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

#include "liststreamsrequest.h"
#include "liststreamsrequest_p.h"
#include "liststreamsresponse.h"
#include "dynamodbstreamsrequest_p.h"

namespace QtAws {
namespace DynamoDBStreams {

/*!
 * \class QtAws::DynamoDBStreams::ListStreamsRequest
 * \brief The ListStreamsRequest class provides an interface for DynamoDBStreams ListStreams requests.
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
 * Constructs a copy of \a other.
 */
ListStreamsRequest::ListStreamsRequest(const ListStreamsRequest &other)
    : DynamoDBStreamsRequest(new ListStreamsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListStreamsRequest object.
 */
ListStreamsRequest::ListStreamsRequest()
    : DynamoDBStreamsRequest(new ListStreamsRequestPrivate(DynamoDBStreamsRequest::ListStreamsAction, this))
{

}

/*!
 * \reimp
 */
bool ListStreamsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListStreamsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListStreamsRequest::response(QNetworkReply * const reply) const
{
    return new ListStreamsResponse(*this, reply);
}

/*!
 * \class QtAws::DynamoDBStreams::ListStreamsRequestPrivate
 * \brief The ListStreamsRequestPrivate class provides private implementation for ListStreamsRequest.
 * \internal
 *
 * \inmodule QtAwsDynamoDBStreams
 */

/*!
 * Constructs a ListStreamsRequestPrivate object for DynamoDBStreams \a action,
 * with public implementation \a q.
 */
ListStreamsRequestPrivate::ListStreamsRequestPrivate(
    const DynamoDBStreamsRequest::Action action, ListStreamsRequest * const q)
    : DynamoDBStreamsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListStreamsRequest
 * class' copy constructor.
 */
ListStreamsRequestPrivate::ListStreamsRequestPrivate(
    const ListStreamsRequestPrivate &other, ListStreamsRequest * const q)
    : DynamoDBStreamsRequestPrivate(other, q)
{

}

} // namespace DynamoDBStreams
} // namespace QtAws
