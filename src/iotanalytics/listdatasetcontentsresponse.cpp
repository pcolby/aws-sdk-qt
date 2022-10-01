/*
    Copyright 2013-2021 Paul Colby

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

#include "listdatasetcontentsresponse.h"
#include "listdatasetcontentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTAnalytics {

/*!
 * \class QtAws::IoTAnalytics::ListDatasetContentsResponse
 * \brief The ListDatasetContentsResponse class provides an interace for IoTAnalytics ListDatasetContents responses.
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
 * \sa IoTAnalyticsClient::listDatasetContents
 */

/*!
 * Constructs a ListDatasetContentsResponse object for \a reply to \a request, with parent \a parent.
 */
ListDatasetContentsResponse::ListDatasetContentsResponse(
        const ListDatasetContentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTAnalyticsResponse(new ListDatasetContentsResponsePrivate(this), parent)
{
    setRequest(new ListDatasetContentsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListDatasetContentsRequest * ListDatasetContentsResponse::request() const
{
    Q_D(const ListDatasetContentsResponse);
    return static_cast<const ListDatasetContentsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTAnalytics ListDatasetContents \a response.
 */
void ListDatasetContentsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListDatasetContentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTAnalytics::ListDatasetContentsResponsePrivate
 * \brief The ListDatasetContentsResponsePrivate class provides private implementation for ListDatasetContentsResponse.
 * \internal
 *
 * \inmodule QtAwsIoTAnalytics
 */

/*!
 * Constructs a ListDatasetContentsResponsePrivate object with public implementation \a q.
 */
ListDatasetContentsResponsePrivate::ListDatasetContentsResponsePrivate(
    ListDatasetContentsResponse * const q) : IoTAnalyticsResponsePrivate(q)
{

}

/*!
 * Parses a IoTAnalytics ListDatasetContents response element from \a xml.
 */
void ListDatasetContentsResponsePrivate::parseListDatasetContentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListDatasetContentsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTAnalytics
} // namespace QtAws
