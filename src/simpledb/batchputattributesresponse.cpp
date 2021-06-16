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

#include "batchputattributesresponse.h"
#include "batchputattributesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SimpleDB {

/*!
 * \class QtAws::SimpleDB::BatchPutAttributesResponse
 * \brief The BatchPutAttributesResponse class provides an interace for SimpleDB BatchPutAttributes responses.
 *
 * \inmodule QtAwsSimpleDB
 *
 *  Amazon SimpleDB is a web service providing the core database functions of data indexing and querying in the cloud. By
 *  offloading the time and effort associated with building and operating a web-scale database, SimpleDB provides developers
 *  the freedom to focus on application development.
 * 
 *  A traditional, clustered relational database requires a sizable upfront capital outlay, is complex to design, and often
 *  requires extensive and repetitive database administration. Amazon SimpleDB is dramatically simpler, requiring no schema,
 *  automatically indexing your data and providing a simple API for storage and access. This approach eliminates the
 *  administrative burden of data modeling, index maintenance, and performance tuning. Developers gain access to this
 *  functionality within Amazon's proven computing environment, are able to scale instantly, and pay only for what they use.
 * 
 *  </p
 * 
 *  Visit <a href="http://aws.amazon.com/simpledb/">http://aws.amazon.com/simpledb/</a> for more information.
 *
 * \sa SimpleDBClient::batchPutAttributes
 */

/*!
 * Constructs a BatchPutAttributesResponse object for \a reply to \a request, with parent \a parent.
 */
BatchPutAttributesResponse::BatchPutAttributesResponse(
        const BatchPutAttributesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SimpleDBResponse(new BatchPutAttributesResponsePrivate(this), parent)
{
    setRequest(new BatchPutAttributesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BatchPutAttributesRequest * BatchPutAttributesResponse::request() const
{
    Q_D(const BatchPutAttributesResponse);
    return static_cast<const BatchPutAttributesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful SimpleDB BatchPutAttributes \a response.
 */
void BatchPutAttributesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BatchPutAttributesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::SimpleDB::BatchPutAttributesResponsePrivate
 * \brief The BatchPutAttributesResponsePrivate class provides private implementation for BatchPutAttributesResponse.
 * \internal
 *
 * \inmodule QtAwsSimpleDB
 */

/*!
 * Constructs a BatchPutAttributesResponsePrivate object with public implementation \a q.
 */
BatchPutAttributesResponsePrivate::BatchPutAttributesResponsePrivate(
    BatchPutAttributesResponse * const q) : SimpleDBResponsePrivate(q)
{

}

/*!
 * Parses a SimpleDB BatchPutAttributes response element from \a xml.
 */
void BatchPutAttributesResponsePrivate::parseBatchPutAttributesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BatchPutAttributesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace SimpleDB
} // namespace QtAws
