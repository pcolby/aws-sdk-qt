// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createchannelrequest.h"
#include "createchannelrequest_p.h"
#include "createchannelresponse.h"
#include "iotanalyticsrequest_p.h"

namespace QtAws {
namespace IoTAnalytics {

/*!
 * \class QtAws::IoTAnalytics::CreateChannelRequest
 * \brief The CreateChannelRequest class provides an interface for IoTAnalytics CreateChannel requests.
 *
 * \inmodule QtAwsIoTAnalytics
 *
 *  IoT Analytics allows you to collect large amounts of device data, process messages, and store them. You can then query
 *  the data and run sophisticated analytics on it. IoT Analytics enables advanced data exploration through integration with
 *  Jupyter Notebooks and data visualization through integration with Amazon
 * 
 *  QuickSight>
 * 
 *  Traditional analytics and business intelligence tools are designed to process structured data. IoT data often comes from
 *  devices that record noisy processes (such as temperature, motion, or sound). As a result the data from these devices can
 *  have significant gaps, corrupted messages, and false readings that must be cleaned up before analysis can occur. Also,
 *  IoT data is often only meaningful in the context of other data from external sources.
 * 
 *  </p
 * 
 *  IoT Analytics automates the steps required to analyze data from IoT devices. IoT Analytics filters, transforms, and
 *  enriches IoT data before storing it in a time-series data store for analysis. You can set up the service to collect only
 *  the data you need from your devices, apply mathematical transforms to process the data, and enrich the data with
 *  device-specific metadata such as device type and location before storing it. Then, you can analyze your data by running
 *  queries using the built-in SQL query engine, or perform more complex analytics and machine learning inference. IoT
 *  Analytics includes pre-built models for common IoT use cases so you can answer questions like which devices are about to
 *  fail or which customers are at risk of abandoning their wearable
 *
 * \sa IoTAnalyticsClient::createChannel
 */

/*!
 * Constructs a copy of \a other.
 */
CreateChannelRequest::CreateChannelRequest(const CreateChannelRequest &other)
    : IoTAnalyticsRequest(new CreateChannelRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateChannelRequest object.
 */
CreateChannelRequest::CreateChannelRequest()
    : IoTAnalyticsRequest(new CreateChannelRequestPrivate(IoTAnalyticsRequest::CreateChannelAction, this))
{

}

/*!
 * \reimp
 */
bool CreateChannelRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateChannelResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateChannelRequest::response(QNetworkReply * const reply) const
{
    return new CreateChannelResponse(*this, reply);
}

/*!
 * \class QtAws::IoTAnalytics::CreateChannelRequestPrivate
 * \brief The CreateChannelRequestPrivate class provides private implementation for CreateChannelRequest.
 * \internal
 *
 * \inmodule QtAwsIoTAnalytics
 */

/*!
 * Constructs a CreateChannelRequestPrivate object for IoTAnalytics \a action,
 * with public implementation \a q.
 */
CreateChannelRequestPrivate::CreateChannelRequestPrivate(
    const IoTAnalyticsRequest::Action action, CreateChannelRequest * const q)
    : IoTAnalyticsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateChannelRequest
 * class' copy constructor.
 */
CreateChannelRequestPrivate::CreateChannelRequestPrivate(
    const CreateChannelRequestPrivate &other, CreateChannelRequest * const q)
    : IoTAnalyticsRequestPrivate(other, q)
{

}

} // namespace IoTAnalytics
} // namespace QtAws
