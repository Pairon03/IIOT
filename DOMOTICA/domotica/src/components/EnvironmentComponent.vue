<script setup lang="ts">
import { Device, Environment } from '@/models/devices';
import DeviceComponent from './DeviceComponent.vue';


    const props = defineProps({
        environment: {type: Environment, required: true}
    });

</script>

<template>
    <section>
        <h3>{{ props.environment.name }}</h3>
        <div v-for="(currentDevice, id) in props.environment.devices" :key="id">        
            <DeviceComponent :device="currentDevice"/>    
        </div>    
        <hr>  
    </section>
</template>

<style scoped lang="scss">

</style>