/*
    Copyright 2013-2018 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getdatasetcontentrequest.h"
#include "getdatasetcontentrequest_p.h"
#include "getdatasetcontentresponse.h"
#include "iotanalyticsrequest_p.h"

namespace QtAws {
namespace IoTAnalytics {

/*!
 * \class QtAws::IoTAnalytics::GetDatasetContentRequest
 * \brief The GetDatasetContentRequest class provides an interface for IoTAnalytics GetDatasetContent requests.
 *
 * \inmodule QtAwsIoTAnalytics
 *
 *  AWS IoT Analytics provides advanced data analysis for AWS IoT. It allows you to collect large amounts of device data,
 *  process messages, store them, and then query the data and run sophisticated analytics to make accurate decisions in your
 *  IoT applications and machine learning use cases. AWS IoT Analytics enables advanced data exploration through integration
 *  with Jupyter Notebooks and data visualization through integration with Amazon
 * 
 *  QuickSight>
 * 
 *  Traditional analytics and business intelligence tools are designed to process structured data. IoT data often comes from
 *  devices that record noisy processes (such as temperature, motion, or sound). As a result, the data from these devices
 *  can have significant gaps, corrupted messages, and false readings that must be cleaned up before analysis can occur.
 *  Also, IoT data is often only meaningful in the context of other data from external sources.
 * 
 *  </p
 * 
 *  AWS IoT Analytics automates each of the steps required to analyze data from IoT devices. AWS IoT Analytics filters,
 *  transforms, and enriches IoT data before storing it in a time-series data store for analysis. You can set up the service
 *  to collect only the data you need from your devices, apply mathematical transforms to process the data, and enrich the
 *  data with device-specific metadata such as device type and location before storing it. Then, you can analyze your data
 *  by running queries using the built-in SQL query engine, or perform more complex analytics and machine learning
 *  inference. AWS IoT Analytics includes models for common IoT use cases so you can answer questions like which devices are
 *  about to fail or which customers are at risk of abandoning their wearable
 *
 * \sa IoTAnalyticsClient::getDatasetContent
 */

/*!
 * Constructs a copy of \a other.
 */
GetDatasetContentRequest::GetDatasetContentRequest(const GetDatasetContentRequest &other)
    : IoTAnalyticsRequest(new GetDatasetContentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDatasetContentRequest object.
 */
GetDatasetContentRequest::GetDatasetContentRequest()
    : IoTAnalyticsRequest(new GetDatasetContentRequestPrivate(IoTAnalyticsRequest::GetDatasetContentAction, this))
{

}

/*!
 * \reimp
 */
bool GetDatasetContentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDatasetContentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDatasetContentRequest::response(QNetworkReply * const reply) const
{
    return new GetDatasetContentResponse(*this, reply);
}

/*!
 * \class QtAws::IoTAnalytics::GetDatasetContentRequestPrivate
 * \brief The GetDatasetContentRequestPrivate class provides private implementation for GetDatasetContentRequest.
 * \internal
 *
 * \inmodule QtAwsIoTAnalytics
 */

/*!
 * Constructs a GetDatasetContentRequestPrivate object for IoTAnalytics \a action,
 * with public implementation \a q.
 */
GetDatasetContentRequestPrivate::GetDatasetContentRequestPrivate(
    const IoTAnalyticsRequest::Action action, GetDatasetContentRequest * const q)
    : IoTAnalyticsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDatasetContentRequest
 * class' copy constructor.
 */
GetDatasetContentRequestPrivate::GetDatasetContentRequestPrivate(
    const GetDatasetContentRequestPrivate &other, GetDatasetContentRequest * const q)
    : IoTAnalyticsRequestPrivate(other, q)
{

}

} // namespace IoTAnalytics
} // namespace QtAws
