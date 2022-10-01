// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listusersrequest.h"
#include "listusersrequest_p.h"
#include "listusersresponse.h"
#include "mqrequest_p.h"

namespace QtAws {
namespace Mq {

/*!
 * \class QtAws::Mq::ListUsersRequest
 * \brief The ListUsersRequest class provides an interface for Mq ListUsers requests.
 *
 * \inmodule QtAwsMq
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ and RabbitMQ that makes it easy to set up and operate
 *  message brokers in the cloud. A message broker allows software applications and components to communicate using various
 *  programming languages, operating systems, and formal messaging
 *
 * \sa MqClient::listUsers
 */

/*!
 * Constructs a copy of \a other.
 */
ListUsersRequest::ListUsersRequest(const ListUsersRequest &other)
    : MqRequest(new ListUsersRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListUsersRequest object.
 */
ListUsersRequest::ListUsersRequest()
    : MqRequest(new ListUsersRequestPrivate(MqRequest::ListUsersAction, this))
{

}

/*!
 * \reimp
 */
bool ListUsersRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListUsersResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListUsersRequest::response(QNetworkReply * const reply) const
{
    return new ListUsersResponse(*this, reply);
}

/*!
 * \class QtAws::Mq::ListUsersRequestPrivate
 * \brief The ListUsersRequestPrivate class provides private implementation for ListUsersRequest.
 * \internal
 *
 * \inmodule QtAwsMq
 */

/*!
 * Constructs a ListUsersRequestPrivate object for Mq \a action,
 * with public implementation \a q.
 */
ListUsersRequestPrivate::ListUsersRequestPrivate(
    const MqRequest::Action action, ListUsersRequest * const q)
    : MqRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListUsersRequest
 * class' copy constructor.
 */
ListUsersRequestPrivate::ListUsersRequestPrivate(
    const ListUsersRequestPrivate &other, ListUsersRequest * const q)
    : MqRequestPrivate(other, q)
{

}

} // namespace Mq
} // namespace QtAws
