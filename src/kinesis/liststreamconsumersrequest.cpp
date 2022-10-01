// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "liststreamconsumersrequest.h"
#include "liststreamconsumersrequest_p.h"
#include "liststreamconsumersresponse.h"
#include "kinesisrequest_p.h"

namespace QtAws {
namespace Kinesis {

/*!
 * \class QtAws::Kinesis::ListStreamConsumersRequest
 * \brief The ListStreamConsumersRequest class provides an interface for Kinesis ListStreamConsumers requests.
 *
 * \inmodule QtAwsKinesis
 *
 *  <fullname>Amazon Kinesis Data Streams Service API Reference</fullname>
 * 
 *  Amazon Kinesis Data Streams is a managed service that scales elastically for real-time processing of streaming big
 *
 * \sa KinesisClient::listStreamConsumers
 */

/*!
 * Constructs a copy of \a other.
 */
ListStreamConsumersRequest::ListStreamConsumersRequest(const ListStreamConsumersRequest &other)
    : KinesisRequest(new ListStreamConsumersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListStreamConsumersRequest object.
 */
ListStreamConsumersRequest::ListStreamConsumersRequest()
    : KinesisRequest(new ListStreamConsumersRequestPrivate(KinesisRequest::ListStreamConsumersAction, this))
{

}

/*!
 * \reimp
 */
bool ListStreamConsumersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListStreamConsumersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListStreamConsumersRequest::response(QNetworkReply * const reply) const
{
    return new ListStreamConsumersResponse(*this, reply);
}

/*!
 * \class QtAws::Kinesis::ListStreamConsumersRequestPrivate
 * \brief The ListStreamConsumersRequestPrivate class provides private implementation for ListStreamConsumersRequest.
 * \internal
 *
 * \inmodule QtAwsKinesis
 */

/*!
 * Constructs a ListStreamConsumersRequestPrivate object for Kinesis \a action,
 * with public implementation \a q.
 */
ListStreamConsumersRequestPrivate::ListStreamConsumersRequestPrivate(
    const KinesisRequest::Action action, ListStreamConsumersRequest * const q)
    : KinesisRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListStreamConsumersRequest
 * class' copy constructor.
 */
ListStreamConsumersRequestPrivate::ListStreamConsumersRequestPrivate(
    const ListStreamConsumersRequestPrivate &other, ListStreamConsumersRequest * const q)
    : KinesisRequestPrivate(other, q)
{

}

} // namespace Kinesis
} // namespace QtAws
