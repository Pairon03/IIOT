<script setup lang="ts">
import { Device } from '@/models/devices';


    const props = defineProps({
        device: {type: Device, required: true}
    });

</script>

<template>
    <section>
        <h5>{{ props.device.name }}</h5>
            <span class="icons material-icons-round">{{ props.device.icon }}</span>
            <div :class="`button-${props.device.state}`">
                <button @click="()=>props.device.state = true" class="on">ON</button>
                <button @click="()=>props.device.state = false" class="off">OFF</button>
            </div>  
    </section>
</template>

<style scoped lang="scss">
     .button-true{
        .on{
            background-color: green;
        }
        .off{
            background-color: white;
        }
    }
    .button-false{
        .on{
            background-color: white;
        }
        .off{
            background-color: red;
        }
    }
</style>