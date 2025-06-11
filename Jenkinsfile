pipeline {
    agent any
    environment {
        PATH = "/usr/local/bin:/opt/homebrew/bin:${env.PATH}"
        BUILD_DIR = 'build'
    }
    stages {
        stage('Clean workspace') {
            steps {
                deleteDir()
            }
        }
        stage('Checkout') {
            steps {
                checkout scm
            }
        }
        stage('Environment check') {
            steps {
                sh '''
                    echo "Running as: $(whoami)"
                    echo "Workspace: $PWD"
                    echo "PATH: $PATH"
                    which cmake || echo "cmake not found"
                    cmake --version || true
                '''
            }
        }
        stage('Configure') {
            steps {
                sh '''
                    mkdir -p "$BUILD_DIR"
                    cmake -S . -B "$BUILD_DIR"
                '''
            }
        }
        stage('Build') {
            steps {
                sh '''
                    make --build "$BUILD_DIR" -j$(sysctl -n hw.ncpu)
                '''
            }
        }
        stage('Test') {
            steps {
                sh '''
                    cd "$BUILD_DIR"
                    ctest --output-on-failure
                '''
            }
        }
    }
    post {
        always {
            junit '**/build/**/Test*.xml'
        }
    }
}