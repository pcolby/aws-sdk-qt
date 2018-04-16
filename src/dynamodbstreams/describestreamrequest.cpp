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

#include "describestreamrequest.h"
#include "describestreamrequest_p.h"
#include "describestreamresponse.h"
#include "dynamodbstreamsrequest_p.h"

namespace QtAws {
namespace DynamoDBStreams {

/*!
 * \class QtAws::DynamoDBStreams::DescribeStreamRequest
 *
 * \brief The DescribeStreamRequest class encapsulates DynamoDBStreams DescribeStream requests.
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
 * \sa DynamoDBStreamsClient::describeStream
 */

/*!
 * @brief  Constructs a new DescribeStreamRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DescribeStreamRequest::DescribeStreamRequest(const DescribeStreamRequest &other)
    : DynamoDBStreamsRequest(new DescribeStreamRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DescribeStreamRequest object.
 */
DescribeStreamRequest::DescribeStreamRequest()
    : DynamoDBStreamsRequest(new DescribeStreamRequestPrivate(DynamoDBStreamsRequest::DescribeStreamAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeStreamRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DescribeStreamResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DescribeStreamResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DynamoDBStreamsClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeStreamRequest::response(QNetworkReply * const reply) const
{
    return new DescribeStreamResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DescribeStreamRequestPrivate
 *
 * @brief  Private implementation for DescribeStreamRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeStreamRequestPrivate object.
 *
 * @param  action  DynamoDBStreams action being performed.
 * @param  q       Pointer to this object's public DescribeStreamRequest instance.
 */
DescribeStreamRequestPrivate::DescribeStreamRequestPrivate(
    const DynamoDBStreamsRequest::Action action, DescribeStreamRequest * const q)
    : DynamoDBStreamsRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeStreamRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DescribeStreamRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DescribeStreamRequest instance.
 */
DescribeStreamRequestPrivate::DescribeStreamRequestPrivate(
    const DescribeStreamRequestPrivate &other, DescribeStreamRequest * const q)
    : DynamoDBStreamsRequestPrivate(other, q)
{

}

} // namespace DynamoDBStreams
} // namespace QtAws
