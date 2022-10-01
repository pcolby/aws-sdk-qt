// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsharditeratorrequest.h"
#include "getsharditeratorrequest_p.h"
#include "getsharditeratorresponse.h"
#include "dynamodbstreamsrequest_p.h"

namespace QtAws {
namespace DynamoDbStreams {

/*!
 * \class QtAws::DynamoDbStreams::GetShardIteratorRequest
 * \brief The GetShardIteratorRequest class provides an interface for DynamoDbStreams GetShardIterator requests.
 *
 * \inmodule QtAwsDynamoDbStreams
 *
 *  <fullname>Amazon DynamoDB</fullname>
 * 
 *  Amazon DynamoDB Streams provides API actions for accessing streams and processing stream records. To learn more about
 *  application development with Streams, see <a
 *  href="https://docs.aws.amazon.com/amazondynamodb/latest/developerguide/Streams.html">Capturing Table Activity with
 *  DynamoDB Streams</a> in the Amazon DynamoDB Developer
 *
 * \sa DynamoDbStreamsClient::getShardIterator
 */

/*!
 * Constructs a copy of \a other.
 */
GetShardIteratorRequest::GetShardIteratorRequest(const GetShardIteratorRequest &other)
    : DynamoDbStreamsRequest(new GetShardIteratorRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetShardIteratorRequest object.
 */
GetShardIteratorRequest::GetShardIteratorRequest()
    : DynamoDbStreamsRequest(new GetShardIteratorRequestPrivate(DynamoDbStreamsRequest::GetShardIteratorAction, this))
{

}

/*!
 * \reimp
 */
bool GetShardIteratorRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetShardIteratorResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetShardIteratorRequest::response(QNetworkReply * const reply) const
{
    return new GetShardIteratorResponse(*this, reply);
}

/*!
 * \class QtAws::DynamoDbStreams::GetShardIteratorRequestPrivate
 * \brief The GetShardIteratorRequestPrivate class provides private implementation for GetShardIteratorRequest.
 * \internal
 *
 * \inmodule QtAwsDynamoDbStreams
 */

/*!
 * Constructs a GetShardIteratorRequestPrivate object for DynamoDbStreams \a action,
 * with public implementation \a q.
 */
GetShardIteratorRequestPrivate::GetShardIteratorRequestPrivate(
    const DynamoDbStreamsRequest::Action action, GetShardIteratorRequest * const q)
    : DynamoDbStreamsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetShardIteratorRequest
 * class' copy constructor.
 */
GetShardIteratorRequestPrivate::GetShardIteratorRequestPrivate(
    const GetShardIteratorRequestPrivate &other, GetShardIteratorRequest * const q)
    : DynamoDbStreamsRequestPrivate(other, q)
{

}

} // namespace DynamoDbStreams
} // namespace QtAws
