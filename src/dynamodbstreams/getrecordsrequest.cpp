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

#include "getrecordsrequest.h"
#include "getrecordsrequest_p.h"
#include "getrecordsresponse.h"
#include "dynamodbstreamsrequest_p.h"

namespace QtAws {
namespace DynamoDBStreams {

/*!
 * \class QtAws::DynamoDBStreams::GetRecordsRequest
 *
 * \brief The GetRecordsRequest class provides an interface for DynamoDBStreams GetRecords requests.
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
 * \sa DynamoDBStreamsClient::getRecords
 */

/*!
 * @brief  Constructs a new GetRecordsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetRecordsRequest::GetRecordsRequest(const GetRecordsRequest &other)
    : DynamoDBStreamsRequest(new GetRecordsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetRecordsRequest object.
 */
GetRecordsRequest::GetRecordsRequest()
    : DynamoDBStreamsRequest(new GetRecordsRequestPrivate(DynamoDBStreamsRequest::GetRecordsAction, this))
{

}

/*!
 * \reimp
 */
bool GetRecordsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetRecordsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetRecordsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DynamoDBStreamsClient::send
 */
QtAws::Core::AwsAbstractResponse * GetRecordsRequest::response(QNetworkReply * const reply) const
{
    return new GetRecordsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetRecordsRequestPrivate
 *
 * @brief  Private implementation for GetRecordsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetRecordsRequestPrivate object.
 *
 * @param  action  DynamoDBStreams action being performed.
 * @param  q       Pointer to this object's public GetRecordsRequest instance.
 */
GetRecordsRequestPrivate::GetRecordsRequestPrivate(
    const DynamoDBStreamsRequest::Action action, GetRecordsRequest * const q)
    : DynamoDBStreamsRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetRecordsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetRecordsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetRecordsRequest instance.
 */
GetRecordsRequestPrivate::GetRecordsRequestPrivate(
    const GetRecordsRequestPrivate &other, GetRecordsRequest * const q)
    : DynamoDBStreamsRequestPrivate(other, q)
{

}

} // namespace DynamoDBStreams
} // namespace QtAws
