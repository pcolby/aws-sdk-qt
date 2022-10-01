// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getrecordsrequest.h"
#include "getrecordsrequest_p.h"
#include "getrecordsresponse.h"
#include "dynamodbstreamsrequest_p.h"

namespace QtAws {
namespace DynamoDbStreams {

/*!
 * \class QtAws::DynamoDbStreams::GetRecordsRequest
 * \brief The GetRecordsRequest class provides an interface for DynamoDbStreams GetRecords requests.
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
 * \sa DynamoDbStreamsClient::getRecords
 */

/*!
 * Constructs a copy of \a other.
 */
GetRecordsRequest::GetRecordsRequest(const GetRecordsRequest &other)
    : DynamoDbStreamsRequest(new GetRecordsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetRecordsRequest object.
 */
GetRecordsRequest::GetRecordsRequest()
    : DynamoDbStreamsRequest(new GetRecordsRequestPrivate(DynamoDbStreamsRequest::GetRecordsAction, this))
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
 * \class QtAws::DynamoDbStreams::GetRecordsRequestPrivate
 * \brief The GetRecordsRequestPrivate class provides private implementation for GetRecordsRequest.
 * \internal
 *
 * \inmodule QtAwsDynamoDbStreams
 */

/*!
 * Constructs a GetRecordsRequestPrivate object for DynamoDbStreams \a action,
 * with public implementation \a q.
 */
GetRecordsRequestPrivate::GetRecordsRequestPrivate(
    const DynamoDbStreamsRequest::Action action, GetRecordsRequest * const q)
    : DynamoDbStreamsRequestPrivate(action, q)
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
    : DynamoDbStreamsRequestPrivate(other, q)
{

}

} // namespace DynamoDbStreams
} // namespace QtAws
