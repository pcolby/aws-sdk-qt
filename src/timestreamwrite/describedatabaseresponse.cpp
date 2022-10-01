// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describedatabaseresponse.h"
#include "describedatabaseresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace TimestreamWrite {

/*!
 * \class QtAws::TimestreamWrite::DescribeDatabaseResponse
 * \brief The DescribeDatabaseResponse class provides an interace for TimestreamWrite DescribeDatabase responses.
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
 * \sa TimestreamWriteClient::describeDatabase
 */

/*!
 * Constructs a DescribeDatabaseResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeDatabaseResponse::DescribeDatabaseResponse(
        const DescribeDatabaseRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TimestreamWriteResponse(new DescribeDatabaseResponsePrivate(this), parent)
{
    setRequest(new DescribeDatabaseRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeDatabaseRequest * DescribeDatabaseResponse::request() const
{
    Q_D(const DescribeDatabaseResponse);
    return static_cast<const DescribeDatabaseRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful TimestreamWrite DescribeDatabase \a response.
 */
void DescribeDatabaseResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeDatabaseResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::TimestreamWrite::DescribeDatabaseResponsePrivate
 * \brief The DescribeDatabaseResponsePrivate class provides private implementation for DescribeDatabaseResponse.
 * \internal
 *
 * \inmodule QtAwsTimestreamWrite
 */

/*!
 * Constructs a DescribeDatabaseResponsePrivate object with public implementation \a q.
 */
DescribeDatabaseResponsePrivate::DescribeDatabaseResponsePrivate(
    DescribeDatabaseResponse * const q) : TimestreamWriteResponsePrivate(q)
{

}

/*!
 * Parses a TimestreamWrite DescribeDatabase response element from \a xml.
 */
void DescribeDatabaseResponsePrivate::parseDescribeDatabaseResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDatabaseResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace TimestreamWrite
} // namespace QtAws
