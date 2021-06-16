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

#include "getrecordsrequest.h"
#include "getrecordsrequest_p.h"
#include "getrecordsresponse.h"
#include "dynamodbstreamsrequest_p.h"

namespace QtAws {
namespace DynamoDBStreams {

/*!
 * \class QtAws::DynamoDBStreams::GetRecordsRequest
 * \brief The GetRecordsRequest class provides an interface for DynamoDBStreams GetRecords requests.
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
 * \sa DynamoDBStreamsClient::getRecords
 */

/*!
 * Constructs a copy of \a other.
 */
GetRecordsRequest::GetRecordsRequest(const GetRecordsRequest &other)
    : DynamoDBStreamsRequest(new GetRecordsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetRecordsRequest object.
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
 * Returns a GetRecordsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetRecordsRequest::response(QNetworkReply * const reply) const
{
    return new GetRecordsResponse(*this, reply);
}

/*!
 * \class QtAws::DynamoDBStreams::GetRecordsRequestPrivate
 * \brief The GetRecordsRequestPrivate class provides private implementation for GetRecordsRequest.
 * \internal
 *
 * \inmodule QtAwsDynamoDBStreams
 */

/*!
 * Constructs a GetRecordsRequestPrivate object for DynamoDBStreams \a action,
 * with public implementation \a q.
 */
GetRecordsRequestPrivate::GetRecordsRequestPrivate(
    const DynamoDBStreamsRequest::Action action, GetRecordsRequest * const q)
    : DynamoDBStreamsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetRecordsRequest
 * class' copy constructor.
 */
GetRecordsRequestPrivate::GetRecordsRequestPrivate(
    const GetRecordsRequestPrivate &other, GetRecordsRequest * const q)
    : DynamoDBStreamsRequestPrivate(other, q)
{

}

} // namespace DynamoDBStreams
} // namespace QtAws
