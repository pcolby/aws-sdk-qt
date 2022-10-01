// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createtableresponse.h"
#include "createtableresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace TimestreamWrite {

/*!
 * \class QtAws::TimestreamWrite::CreateTableResponse
 * \brief The CreateTableResponse class provides an interace for TimestreamWrite CreateTable responses.
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
 * \sa TimestreamWriteClient::createTable
 */

/*!
 * Constructs a CreateTableResponse object for \a reply to \a request, with parent \a parent.
 */
CreateTableResponse::CreateTableResponse(
        const CreateTableRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : TimestreamWriteResponse(new CreateTableResponsePrivate(this), parent)
{
    setRequest(new CreateTableRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const CreateTableRequest * CreateTableResponse::request() const
{
    Q_D(const CreateTableResponse);
    return static_cast<const CreateTableRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful TimestreamWrite CreateTable \a response.
 */
void CreateTableResponse::parseSuccess(QIODevice &response)
{
    //Q_D(CreateTableResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::TimestreamWrite::CreateTableResponsePrivate
 * \brief The CreateTableResponsePrivate class provides private implementation for CreateTableResponse.
 * \internal
 *
 * \inmodule QtAwsTimestreamWrite
 */

/*!
 * Constructs a CreateTableResponsePrivate object with public implementation \a q.
 */
CreateTableResponsePrivate::CreateTableResponsePrivate(
    CreateTableResponse * const q) : TimestreamWriteResponsePrivate(q)
{

}

/*!
 * Parses a TimestreamWrite CreateTable response element from \a xml.
 */
void CreateTableResponsePrivate::parseCreateTableResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateTableResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace TimestreamWrite
} // namespace QtAws
