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

#include "describebrokerrequest.h"
#include "describebrokerrequest_p.h"
#include "describebrokerresponse.h"
#include "mqrequest_p.h"

namespace QtAws {
namespace Mq {

/*!
 * \class QtAws::Mq::DescribeBrokerRequest
 * \brief The DescribeBrokerRequest class provides an interface for Mq DescribeBroker requests.
 *
 * \inmodule QtAwsMq
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ and RabbitMQ that makes it easy to set up and operate
 *  message brokers in the cloud. A message broker allows software applications and components to communicate using various
 *  programming languages, operating systems, and formal messaging
 *
 * \sa MqClient::describeBroker
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeBrokerRequest::DescribeBrokerRequest(const DescribeBrokerRequest &other)
    : MqRequest(new DescribeBrokerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeBrokerRequest object.
 */
DescribeBrokerRequest::DescribeBrokerRequest()
    : MqRequest(new DescribeBrokerRequestPrivate(MqRequest::DescribeBrokerAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeBrokerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeBrokerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeBrokerRequest::response(QNetworkReply * const reply) const
{
    return new DescribeBrokerResponse(*this, reply);
}

/*!
 * \class QtAws::Mq::DescribeBrokerRequestPrivate
 * \brief The DescribeBrokerRequestPrivate class provides private implementation for DescribeBrokerRequest.
 * \internal
 *
 * \inmodule QtAwsMq
 */

/*!
 * Constructs a DescribeBrokerRequestPrivate object for Mq \a action,
 * with public implementation \a q.
 */
DescribeBrokerRequestPrivate::DescribeBrokerRequestPrivate(
    const MqRequest::Action action, DescribeBrokerRequest * const q)
    : MqRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeBrokerRequest
 * class' copy constructor.
 */
DescribeBrokerRequestPrivate::DescribeBrokerRequestPrivate(
    const DescribeBrokerRequestPrivate &other, DescribeBrokerRequest * const q)
    : MqRequestPrivate(other, q)
{

}

} // namespace Mq
} // namespace QtAws
