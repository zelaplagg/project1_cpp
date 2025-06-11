pipeline {
    agent any
    environment {
        PATH = "/usr/local/bin:/opt/homebrew/bin:${env.PATH}"
        BUILD_DIR = 'build'
    }
    stages {
        stage('Checkout') {
            steps {
                checkout scm
            }
        }
        stage('Configure') {
            steps {
                sh '''
                   echo "Current PATH: $PATH"
                   mkdir -p "$BUILD_DIR"
                   cmake -S . -B "$BUILD_DIR"
                '''
            }
        }
        stage('Build') {
            steps {
                sh '''
                   echo "PATH before build: $PATH"
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
}