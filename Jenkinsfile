pipeline {
  agent any
  stages {
    stage('Clean workspace') {
      steps { deleteDir() }
    }
    stage('Configure & Build') {
      steps {
        sh '''
          mkdir -p build
          cmake -S $WORKSPACE -B build
          cmake --build build
        '''
      }
    }
  }
}