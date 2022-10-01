// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describetableresponse.h"
#include "describetableresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace TimestreamWrite {

/*!
 * \class QtAws::TimestreamWrite::DescribeTableResponse
 * \brief The DescribeTableResponse class provides an interace for TimestreamWrite DescribeTable responses.
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
 * \sa TimestreamWriteClient::describeTable
 */

/*!
 * Constructs a DescribeTableResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeTableResponse::DescribeTableResponse(
        const DescribeTableRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TimestreamWriteResponse(new DescribeTableResponsePrivate(this), parent)
{
    setRequest(new DescribeTableRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeTableRequest * DescribeTableResponse::request() const
{
    Q_D(const DescribeTableResponse);
    return static_cast<const DescribeTableRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful TimestreamWrite DescribeTable \a response.
 */
void DescribeTableResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeTableResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::TimestreamWrite::DescribeTableResponsePrivate
 * \brief The DescribeTableResponsePrivate class provides private implementation for DescribeTableResponse.
 * \internal
 *
 * \inmodule QtAwsTimestreamWrite
 */

/*!
 * Constructs a DescribeTableResponsePrivate object with public implementation \a q.
 */
DescribeTableResponsePrivate::DescribeTableResponsePrivate(
    DescribeTableResponse * const q) : TimestreamWriteResponsePrivate(q)
{

}

/*!
 * Parses a TimestreamWrite DescribeTable response element from \a xml.
 */
void DescribeTableResponsePrivate::parseDescribeTableResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeTableResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace TimestreamWrite
} // namespace QtAws
