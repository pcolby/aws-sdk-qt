// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listbrokersrequest.h"
#include "listbrokersrequest_p.h"
#include "listbrokersresponse.h"
#include "mqrequest_p.h"

namespace QtAws {
namespace Mq {

/*!
 * \class QtAws::Mq::ListBrokersRequest
 * \brief The ListBrokersRequest class provides an interface for Mq ListBrokers requests.
 *
 * \inmodule QtAwsMq
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ and RabbitMQ that makes it easy to set up and operate
 *  message brokers in the cloud. A message broker allows software applications and components to communicate using various
 *  programming languages, operating systems, and formal messaging
 *
 * \sa MqClient::listBrokers
 */

/*!
 * Constructs a copy of \a other.
 */
ListBrokersRequest::ListBrokersRequest(const ListBrokersRequest &other)
    : MqRequest(new ListBrokersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListBrokersRequest object.
 */
ListBrokersRequest::ListBrokersRequest()
    : MqRequest(new ListBrokersRequestPrivate(MqRequest::ListBrokersAction, this))
{

}

/*!
 * \reimp
 */
bool ListBrokersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListBrokersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListBrokersRequest::response(QNetworkReply * const reply) const
{
    return new ListBrokersResponse(*this, reply);
}

/*!
 * \class QtAws::Mq::ListBrokersRequestPrivate
 * \brief The ListBrokersRequestPrivate class provides private implementation for ListBrokersRequest.
 * \internal
 *
 * \inmodule QtAwsMq
 */

/*!
 * Constructs a ListBrokersRequestPrivate object for Mq \a action,
 * with public implementation \a q.
 */
ListBrokersRequestPrivate::ListBrokersRequestPrivate(
    const MqRequest::Action action, ListBrokersRequest * const q)
    : MqRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListBrokersRequest
 * class' copy constructor.
 */
ListBrokersRequestPrivate::ListBrokersRequestPrivate(
    const ListBrokersRequestPrivate &other, ListBrokersRequest * const q)
    : MqRequestPrivate(other, q)
{

}

} // namespace Mq
} // namespace QtAws
