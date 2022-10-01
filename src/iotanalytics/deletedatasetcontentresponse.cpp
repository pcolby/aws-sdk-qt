// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletedatasetcontentresponse.h"
#include "deletedatasetcontentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace IoTAnalytics {

/*!
 * \class QtAws::IoTAnalytics::DeleteDatasetContentResponse
 * \brief The DeleteDatasetContentResponse class provides an interace for IoTAnalytics DeleteDatasetContent responses.
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
 * \sa IoTAnalyticsClient::deleteDatasetContent
 */

/*!
 * Constructs a DeleteDatasetContentResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDatasetContentResponse::DeleteDatasetContentResponse(
        const DeleteDatasetContentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTAnalyticsResponse(new DeleteDatasetContentResponsePrivate(this), parent)
{
    setRequest(new DeleteDatasetContentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDatasetContentRequest * DeleteDatasetContentResponse::request() const
{
    Q_D(const DeleteDatasetContentResponse);
    return static_cast<const DeleteDatasetContentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful IoTAnalytics DeleteDatasetContent \a response.
 */
void DeleteDatasetContentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDatasetContentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::IoTAnalytics::DeleteDatasetContentResponsePrivate
 * \brief The DeleteDatasetContentResponsePrivate class provides private implementation for DeleteDatasetContentResponse.
 * \internal
 *
 * \inmodule QtAwsIoTAnalytics
 */

/*!
 * Constructs a DeleteDatasetContentResponsePrivate object with public implementation \a q.
 */
DeleteDatasetContentResponsePrivate::DeleteDatasetContentResponsePrivate(
    DeleteDatasetContentResponse * const q) : IoTAnalyticsResponsePrivate(q)
{

}

/*!
 * Parses a IoTAnalytics DeleteDatasetContent response element from \a xml.
 */
void DeleteDatasetContentResponsePrivate::parseDeleteDatasetContentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDatasetContentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace IoTAnalytics
} // namespace QtAws
