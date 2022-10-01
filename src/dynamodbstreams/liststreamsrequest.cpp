// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "liststreamsrequest.h"
#include "liststreamsrequest_p.h"
#include "liststreamsresponse.h"
#include "dynamodbstreamsrequest_p.h"

namespace QtAws {
namespace DynamoDbStreams {

/*!
 * \class QtAws::DynamoDbStreams::ListStreamsRequest
 * \brief The ListStreamsRequest class provides an interface for DynamoDbStreams ListStreams requests.
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
 * \sa DynamoDbStreamsClient::listStreams
 */

/*!
 * Constructs a copy of \a other.
 */
ListStreamsRequest::ListStreamsRequest(const ListStreamsRequest &other)
    : DynamoDbStreamsRequest(new ListStreamsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListStreamsRequest object.
 */
ListStreamsRequest::ListStreamsRequest()
    : DynamoDbStreamsRequest(new ListStreamsRequestPrivate(DynamoDbStreamsRequest::ListStreamsAction, this))
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
 * \class QtAws::DynamoDbStreams::ListStreamsRequestPrivate
 * \brief The ListStreamsRequestPrivate class provides private implementation for ListStreamsRequest.
 * \internal
 *
 * \inmodule QtAwsDynamoDbStreams
 */

/*!
 * Constructs a ListStreamsRequestPrivate object for DynamoDbStreams \a action,
 * with public implementation \a q.
 */
ListStreamsRequestPrivate::ListStreamsRequestPrivate(
    const DynamoDbStreamsRequest::Action action, ListStreamsRequest * const q)
    : DynamoDbStreamsRequestPrivate(action, q)
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
    : DynamoDbStreamsRequestPrivate(other, q)
{

}

} // namespace DynamoDbStreams
} // namespace QtAws
