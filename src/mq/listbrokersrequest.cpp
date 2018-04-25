/*
    Copyright 2013-2018 Paul Colby

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

#include "listbrokersrequest.h"
#include "listbrokersrequest_p.h"
#include "listbrokersresponse.h"
#include "mqrequest_p.h"

namespace QtAws {
namespace MQ {

/*!
 * \class QtAws::MQ::ListBrokersRequest
 * \brief The ListBrokersRequest class provides an interface for MQ ListBrokers requests.
 *
 * \inmodule QtAwsMQ
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ that makes it easy to set up and operate message
 *  brokers in the cloud. A message broker allows software applications and components to communicate using various
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
 * \class QtAws::MQ::ListBrokersRequestPrivate
 * \brief The ListBrokersRequestPrivate class provides private implementation for ListBrokersRequest.
 * \internal
 *
 * \inmodule QtAwsMQ
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

} // namespace MQ
} // namespace QtAws
