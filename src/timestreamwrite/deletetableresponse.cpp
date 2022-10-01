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

#include "deletetableresponse.h"
#include "deletetableresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace TimestreamWrite {

/*!
 * \class QtAws::TimestreamWrite::DeleteTableResponse
 * \brief The DeleteTableResponse class provides an interace for TimestreamWrite DeleteTable responses.
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
 * \sa TimestreamWriteClient::deleteTable
 */

/*!
 * Constructs a DeleteTableResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteTableResponse::DeleteTableResponse(
        const DeleteTableRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TimestreamWriteResponse(new DeleteTableResponsePrivate(this), parent)
{
    setRequest(new DeleteTableRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteTableRequest * DeleteTableResponse::request() const
{
    Q_D(const DeleteTableResponse);
    return static_cast<const DeleteTableRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful TimestreamWrite DeleteTable \a response.
 */
void DeleteTableResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteTableResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::TimestreamWrite::DeleteTableResponsePrivate
 * \brief The DeleteTableResponsePrivate class provides private implementation for DeleteTableResponse.
 * \internal
 *
 * \inmodule QtAwsTimestreamWrite
 */

/*!
 * Constructs a DeleteTableResponsePrivate object with public implementation \a q.
 */
DeleteTableResponsePrivate::DeleteTableResponsePrivate(
    DeleteTableResponse * const q) : TimestreamWriteResponsePrivate(q)
{

}

/*!
 * Parses a TimestreamWrite DeleteTable response element from \a xml.
 */
void DeleteTableResponsePrivate::parseDeleteTableResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteTableResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace TimestreamWrite
} // namespace QtAws
