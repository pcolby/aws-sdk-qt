/*
    Copyright 2013-2020 Paul Colby

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

#include "liststreamsresponse.h"
#include "liststreamsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DynamoDBStreams {

/*!
 * \class QtAws::DynamoDBStreams::ListStreamsResponse
 * \brief The ListStreamsResponse class provides an interace for DynamoDBStreams ListStreams responses.
 *
 * \inmodule QtAwsDynamoDBStreams
 *
 *  <fullname>Amazon DynamoDB Streams</fullname>
 * 
 *  This is the Amazon DynamoDB Streams API Reference. This guide describes the low-level API actions for accessing streams
 *  and processing stream records. For information about application development with DynamoDB Streams, see the <a
 *  href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide//Streams.html">Amazon DynamoDB Developer
 * 
 *  Guide</a>>
 * 
 *  Note that this document is intended for use with the following DynamoDB
 * 
 *  documentation> <ul> <li>
 * 
 *  <a href="http://docs.aws.amazon.com/amazondynamodb/latest/developerguide/">Amazon DynamoDB Developer Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="http://docs.aws.amazon.com/amazondynamodb/latest/APIReference/">Amazon DynamoDB API Reference</a>
 * 
 *  </p </li> </ul>
 * 
 *  The following are short descriptions of each low-level DynamoDB Streams API action, organized by
 * 
 *  function> <ul> <li><p><i>DescribeStream</i> - Returns detailed information about a particular stream.</p></li> <li>
 * 
 *  <i>GetRecords</i> - Retrieves the stream records from within a
 * 
 *  shard> </li> <li>
 * 
 *  <i>GetShardIterator</i> - Returns information on how to retrieve the streams record from a shard with a given shard
 * 
 *  ID> </li> <li>
 * 
 *  <i>ListStreams</i> - Returns a list of all the streams associated with the current AWS account and
 *
 * \sa DynamoDBStreamsClient::listStreams
 */

/*!
 * Constructs a ListStreamsResponse object for \a reply to \a request, with parent \a parent.
 */
ListStreamsResponse::ListStreamsResponse(
        const ListStreamsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DynamoDBStreamsResponse(new ListStreamsResponsePrivate(this), parent)
{
    setRequest(new ListStreamsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListStreamsRequest * ListStreamsResponse::request() const
{
    Q_D(const ListStreamsResponse);
    return static_cast<const ListStreamsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful DynamoDBStreams ListStreams \a response.
 */
void ListStreamsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListStreamsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::DynamoDBStreams::ListStreamsResponsePrivate
 * \brief The ListStreamsResponsePrivate class provides private implementation for ListStreamsResponse.
 * \internal
 *
 * \inmodule QtAwsDynamoDBStreams
 */

/*!
 * Constructs a ListStreamsResponsePrivate object with public implementation \a q.
 */
ListStreamsResponsePrivate::ListStreamsResponsePrivate(
    ListStreamsResponse * const q) : DynamoDBStreamsResponsePrivate(q)
{

}

/*!
 * Parses a DynamoDBStreams ListStreams response element from \a xml.
 */
void ListStreamsResponsePrivate::parseListStreamsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListStreamsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace DynamoDBStreams
} // namespace QtAws
