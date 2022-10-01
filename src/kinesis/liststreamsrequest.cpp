// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "liststreamsrequest.h"
#include "liststreamsrequest_p.h"
#include "liststreamsresponse.h"
#include "kinesisrequest_p.h"

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::ListStreamsRequest
 * \brief The ListStreamsRequest class provides an interface for Kinesis ListStreams requests.
 *
 * \inmodule QtAwsKinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::listStreams
 */

/*!
 * Constructs a copy of \a other.
 */
ListStreamsRequest::ListStreamsRequest(const ListStreamsRequest &other)
    : KinesisRequest(new ListStreamsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListStreamsRequest object.
 */
ListStreamsRequest::ListStreamsRequest()
    : KinesisRequest(new ListStreamsRequestPrivate(KinesisRequest::ListStreamsAction, this))
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
 * \class QtAws::Kinesis::ListStreamsRequestPrivate
 * \brief The ListStreamsRequestPrivate class provides private implementation for ListStreamsRequest.
 * \internal
 *
 * \inmodule QtAwsKinesis
 */

/*!
 * Constructs a ListStreamsRequestPrivate object for Kinesis \a action,
 * with public implementation \a q.
 */
ListStreamsRequestPrivate::ListStreamsRequestPrivate(
    const KinesisRequest::Action action, ListStreamsRequest * const q)
    : KinesisRequestPrivate(action, q)
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
    : KinesisRequestPrivate(other, q)
{

}

} // namespace Kinesis
} // namespace QtAws
