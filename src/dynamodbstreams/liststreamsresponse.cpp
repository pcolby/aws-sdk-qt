/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
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
 *
 * \brief The ListStreamsResponse class encapsulates DynamoDBStreams ListStreams responses.
 *
 * \ingroup DynamoDBStreams
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
 * @brief  Constructs a new ListStreamsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
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

const ListStreamsRequest * ListStreamsResponse::request() const
{
    Q_D(const ListStreamsResponse);
    return static_cast<const ListStreamsRequest *>(d->request);
}

/*!
 * @brief  Parse a DynamoDBStreams ListStreams response.
 *
 * @param  response  Response to parse.
 */
void ListStreamsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ListStreamsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ListStreamsResponsePrivate
 *
 * \brief Private implementation for ListStreamsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListStreamsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListStreamsResponse instance.
 */
ListStreamsResponsePrivate::ListStreamsResponsePrivate(
    ListStreamsResponse * const q) : DynamoDBStreamsResponsePrivate(q)
{

}

/*!
 * @brief  Parse an DynamoDBStreams ListStreamsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListStreamsResponsePrivate::parseListStreamsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListStreamsResponse"));
    /// @todo
}

} // namespace DynamoDBStreams
} // namespace QtAws
