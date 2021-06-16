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
 *  <fullname>Amazon DynamoDB</fullname>
 * 
 *  Amazon DynamoDB Streams provides API actions for accessing streams and processing stream records. To learn more about
 *  application development with Streams, see <a
 *  href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Streams.html">Capturing Table Activity with
 *  DynamoDB Streams</a> in the Amazon DynamoDB Developer
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
