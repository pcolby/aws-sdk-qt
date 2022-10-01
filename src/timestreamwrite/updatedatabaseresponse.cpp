// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedatabaseresponse.h"
#include "updatedatabaseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace TimestreamWrite {

/*!
 * \class QtAws::TimestreamWrite::UpdateDatabaseResponse
 * \brief The UpdateDatabaseResponse class provides an interace for TimestreamWrite UpdateDatabase responses.
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
 * \sa TimestreamWriteClient::updateDatabase
 */

/*!
 * Constructs a UpdateDatabaseResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateDatabaseResponse::UpdateDatabaseResponse(
        const UpdateDatabaseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TimestreamWriteResponse(new UpdateDatabaseResponsePrivate(this), parent)
{
    setRequest(new UpdateDatabaseRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateDatabaseRequest * UpdateDatabaseResponse::request() const
{
    Q_D(const UpdateDatabaseResponse);
    return static_cast<const UpdateDatabaseRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful TimestreamWrite UpdateDatabase \a response.
 */
void UpdateDatabaseResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateDatabaseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::TimestreamWrite::UpdateDatabaseResponsePrivate
 * \brief The UpdateDatabaseResponsePrivate class provides private implementation for UpdateDatabaseResponse.
 * \internal
 *
 * \inmodule QtAwsTimestreamWrite
 */

/*!
 * Constructs a UpdateDatabaseResponsePrivate object with public implementation \a q.
 */
UpdateDatabaseResponsePrivate::UpdateDatabaseResponsePrivate(
    UpdateDatabaseResponse * const q) : TimestreamWriteResponsePrivate(q)
{

}

/*!
 * Parses a TimestreamWrite UpdateDatabase response element from \a xml.
 */
void UpdateDatabaseResponsePrivate::parseUpdateDatabaseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDatabaseResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace TimestreamWrite
} // namespace QtAws
