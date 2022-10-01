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

#include "updatebrokerrequest.h"
#include "updatebrokerrequest_p.h"
#include "updatebrokerresponse.h"
#include "mqrequest_p.h"

namespace QtAws {
namespace Mq {

/*!
 * \class QtAws::Mq::UpdateBrokerRequest
 * \brief The UpdateBrokerRequest class provides an interface for Mq UpdateBroker requests.
 *
 * \inmodule QtAwsMq
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ and RabbitMQ that makes it easy to set up and operate
 *  message brokers in the cloud. A message broker allows software applications and components to communicate using various
 *  programming languages, operating systems, and formal messaging
 *
 * \sa MqClient::updateBroker
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateBrokerRequest::UpdateBrokerRequest(const UpdateBrokerRequest &other)
    : MqRequest(new UpdateBrokerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateBrokerRequest object.
 */
UpdateBrokerRequest::UpdateBrokerRequest()
    : MqRequest(new UpdateBrokerRequestPrivate(MqRequest::UpdateBrokerAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateBrokerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateBrokerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateBrokerRequest::response(QNetworkReply * const reply) const
{
    return new UpdateBrokerResponse(*this, reply);
}

/*!
 * \class QtAws::Mq::UpdateBrokerRequestPrivate
 * \brief The UpdateBrokerRequestPrivate class provides private implementation for UpdateBrokerRequest.
 * \internal
 *
 * \inmodule QtAwsMq
 */

/*!
 * Constructs a UpdateBrokerRequestPrivate object for Mq \a action,
 * with public implementation \a q.
 */
UpdateBrokerRequestPrivate::UpdateBrokerRequestPrivate(
    const MqRequest::Action action, UpdateBrokerRequest * const q)
    : MqRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateBrokerRequest
 * class' copy constructor.
 */
UpdateBrokerRequestPrivate::UpdateBrokerRequestPrivate(
    const UpdateBrokerRequestPrivate &other, UpdateBrokerRequest * const q)
    : MqRequestPrivate(other, q)
{

}

} // namespace Mq
} // namespace QtAws
