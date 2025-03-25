import { ref, computed } from 'vue'
import { defineStore } from 'pinia'
import type { Environment } from '@/models/devices'

export type Repository = {
  environments: Array<Environment>
}

export const useDeviceRepository = defineStore('device-repository', {
  state: ():Repository => ({
    environments: []
  }),
  actions: {
    addEnvironment(newEnvironment: Environment){
      this.environments.push(newEnvironment);
    },
    removeEnvironment(name: string){  
      const index = this.environments.findIndex(env => env.name === name);
      if(index >= 0){
        this.environments.splice(index,1)
      }
    }
  },
  getters: {}
})
