// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatetableresponse.h"
#include "updatetableresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace TimestreamWrite {

/*!
 * \class QtAws::TimestreamWrite::UpdateTableResponse
 * \brief The UpdateTableResponse class provides an interace for TimestreamWrite UpdateTable responses.
 *
 * \inmodule QtAwsTimestreamWrite
 *
 *  <fullname>Amazon Timestream Write</fullname>
 * 
 *  Amazon Timestream is a fast, scalable, fully managed time series database service that makes it easy to store and
 *  analyze trillions of time series data points per day. With Timestream, you can easily store and analyze IoT sensor data
 *  to derive insights from your IoT applications. You can analyze industrial telemetry to streamline equipment management
 *  and maintenance. You can also store and analyze log data and metrics to improve the performance and availability of your
 *  applications. Timestream is built from the ground up to effectively ingest, process, and store time series data. It
 *  organizes data to optimize query processing. It automatically scales based on the volume of data ingested and on the
 *  query volume to ensure you receive optimal performance while inserting and querying data. As your data grows over time,
 *  Timestream’s adaptive query processing engine spans across storage tiers to provide fast analysis while reducing
 *
 * \sa TimestreamWriteClient::updateTable
 */

/*!
 * Constructs a UpdateTableResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateTableResponse::UpdateTableResponse(
        const UpdateTableRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TimestreamWriteResponse(new UpdateTableResponsePrivate(this), parent)
{
    setRequest(new UpdateTableRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateTableRequest * UpdateTableResponse::request() const
{
    Q_D(const UpdateTableResponse);
    return static_cast<const UpdateTableRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful TimestreamWrite UpdateTable \a response.
 */
void UpdateTableResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateTableResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::TimestreamWrite::UpdateTableResponsePrivate
 * \brief The UpdateTableResponsePrivate class provides private implementation for UpdateTableResponse.
 * \internal
 *
 * \inmodule QtAwsTimestreamWrite
 */

/*!
 * Constructs a UpdateTableResponsePrivate object with public implementation \a q.
 */
UpdateTableResponsePrivate::UpdateTableResponsePrivate(
    UpdateTableResponse * const q) : TimestreamWriteResponsePrivate(q)
{

}

/*!
 * Parses a TimestreamWrite UpdateTable response element from \a xml.
 */
void UpdateTableResponsePrivate::parseUpdateTableResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateTableResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace TimestreamWrite
} // namespace QtAws
