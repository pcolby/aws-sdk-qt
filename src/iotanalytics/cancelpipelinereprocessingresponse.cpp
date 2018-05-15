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

#include "cancelpipelinereprocessingresponse.h"
#include "cancelpipelinereprocessingresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTAnalytics {

/*!
 * \class QtAws::IoTAnalytics::CancelPipelineReprocessingResponse
 * \brief The CancelPipelineReprocessingResponse class provides an interace for IoTAnalytics CancelPipelineReprocessing responses.
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
 * \sa IoTAnalyticsClient::cancelPipelineReprocessing
 */

/*!
 * Constructs a CancelPipelineReprocessingResponse object for \a reply to \a request, with parent \a parent.
 */
CancelPipelineReprocessingResponse::CancelPipelineReprocessingResponse(
        const CancelPipelineReprocessingRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTAnalyticsResponse(new CancelPipelineReprocessingResponsePrivate(this), parent)
{
    setRequest(new CancelPipelineReprocessingRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CancelPipelineReprocessingRequest * CancelPipelineReprocessingResponse::request() const
{
    Q_D(const CancelPipelineReprocessingResponse);
    return static_cast<const CancelPipelineReprocessingRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTAnalytics CancelPipelineReprocessing \a response.
 */
void CancelPipelineReprocessingResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CancelPipelineReprocessingResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTAnalytics::CancelPipelineReprocessingResponsePrivate
 * \brief The CancelPipelineReprocessingResponsePrivate class provides private implementation for CancelPipelineReprocessingResponse.
 * \internal
 *
 * \inmodule QtAwsIoTAnalytics
 */

/*!
 * Constructs a CancelPipelineReprocessingResponsePrivate object with public implementation \a q.
 */
CancelPipelineReprocessingResponsePrivate::CancelPipelineReprocessingResponsePrivate(
    CancelPipelineReprocessingResponse * const q) : IoTAnalyticsResponsePrivate(q)
{

}

/*!
 * Parses a IoTAnalytics CancelPipelineReprocessing response element from \a xml.
 */
void CancelPipelineReprocessingResponsePrivate::parseCancelPipelineReprocessingResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelPipelineReprocessingResponse"));
    /// @todo
}

} // namespace IoTAnalytics
} // namespace QtAws
