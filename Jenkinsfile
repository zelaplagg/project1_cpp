pipeline {
    agent any
    environment {
        BUILD_DIR = 'build'
    }
    stages {
        stage('Checkout') {
            steps {
                // зазвичай Jenkins сам робить checkout коду
                checkout scm
            }
        }
        stage('Build') {
            steps {
                sh 'cmake -S . -B $BUILD_DIR'
                sh "cmake --build $BUILD_DIR -- -j$(sysctl -n hw.ncpu)"
            }
        }
        stage('Test') {
            steps {
                sh "cd $BUILD_DIR && ctest --output-on-failure --timeout 300"
            }
            post {
                always {
                    junit "$BUILD_DIR/**/TestResults/*.xml" // якщо тести генерують xml
                }
            }
        }
    }
}