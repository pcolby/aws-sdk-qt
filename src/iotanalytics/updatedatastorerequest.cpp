// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedatastorerequest.h"
#include "updatedatastorerequest_p.h"
#include "updatedatastoreresponse.h"
#include "iotanalyticsrequest_p.h"

namespace QtAws {
namespace IoTAnalytics {

/*!
 * \class QtAws::IoTAnalytics::UpdateDatastoreRequest
 * \brief The UpdateDatastoreRequest class provides an interface for IoTAnalytics UpdateDatastore requests.
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
 * \sa IoTAnalyticsClient::updateDatastore
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDatastoreRequest::UpdateDatastoreRequest(const UpdateDatastoreRequest &other)
    : IoTAnalyticsRequest(new UpdateDatastoreRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDatastoreRequest object.
 */
UpdateDatastoreRequest::UpdateDatastoreRequest()
    : IoTAnalyticsRequest(new UpdateDatastoreRequestPrivate(IoTAnalyticsRequest::UpdateDatastoreAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDatastoreRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateDatastoreResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDatastoreRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDatastoreResponse(*this, reply);
}

/*!
 * \class QtAws::IoTAnalytics::UpdateDatastoreRequestPrivate
 * \brief The UpdateDatastoreRequestPrivate class provides private implementation for UpdateDatastoreRequest.
 * \internal
 *
 * \inmodule QtAwsIoTAnalytics
 */

/*!
 * Constructs a UpdateDatastoreRequestPrivate object for IoTAnalytics \a action,
 * with public implementation \a q.
 */
UpdateDatastoreRequestPrivate::UpdateDatastoreRequestPrivate(
    const IoTAnalyticsRequest::Action action, UpdateDatastoreRequest * const q)
    : IoTAnalyticsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateDatastoreRequest
 * class' copy constructor.
 */
UpdateDatastoreRequestPrivate::UpdateDatastoreRequestPrivate(
    const UpdateDatastoreRequestPrivate &other, UpdateDatastoreRequest * const q)
    : IoTAnalyticsRequestPrivate(other, q)
{

}

} // namespace IoTAnalytics
} // namespace QtAws
