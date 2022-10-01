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

#include "deletedatabaseresponse.h"
#include "deletedatabaseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace TimestreamWrite {

/*!
 * \class QtAws::TimestreamWrite::DeleteDatabaseResponse
 * \brief The DeleteDatabaseResponse class provides an interace for TimestreamWrite DeleteDatabase responses.
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
 * \sa TimestreamWriteClient::deleteDatabase
 */

/*!
 * Constructs a DeleteDatabaseResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteDatabaseResponse::DeleteDatabaseResponse(
        const DeleteDatabaseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TimestreamWriteResponse(new DeleteDatabaseResponsePrivate(this), parent)
{
    setRequest(new DeleteDatabaseRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteDatabaseRequest * DeleteDatabaseResponse::request() const
{
    Q_D(const DeleteDatabaseResponse);
    return static_cast<const DeleteDatabaseRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful TimestreamWrite DeleteDatabase \a response.
 */
void DeleteDatabaseResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteDatabaseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::TimestreamWrite::DeleteDatabaseResponsePrivate
 * \brief The DeleteDatabaseResponsePrivate class provides private implementation for DeleteDatabaseResponse.
 * \internal
 *
 * \inmodule QtAwsTimestreamWrite
 */

/*!
 * Constructs a DeleteDatabaseResponsePrivate object with public implementation \a q.
 */
DeleteDatabaseResponsePrivate::DeleteDatabaseResponsePrivate(
    DeleteDatabaseResponse * const q) : TimestreamWriteResponsePrivate(q)
{

}

/*!
 * Parses a TimestreamWrite DeleteDatabase response element from \a xml.
 */
void DeleteDatabaseResponsePrivate::parseDeleteDatabaseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteDatabaseResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace TimestreamWrite
} // namespace QtAws
