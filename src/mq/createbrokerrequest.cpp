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

#include "createbrokerrequest.h"
#include "createbrokerrequest_p.h"
#include "createbrokerresponse.h"
#include "mqrequest_p.h"

namespace QtAws {
namespace Mq {

/*!
 * \class QtAws::Mq::CreateBrokerRequest
 * \brief The CreateBrokerRequest class provides an interface for Mq CreateBroker requests.
 *
 * \inmodule QtAwsMq
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ and RabbitMQ that makes it easy to set up and operate
 *  message brokers in the cloud. A message broker allows software applications and components to communicate using various
 *  programming languages, operating systems, and formal messaging
 *
 * \sa MqClient::createBroker
 */

/*!
 * Constructs a copy of \a other.
 */
CreateBrokerRequest::CreateBrokerRequest(const CreateBrokerRequest &other)
    : MqRequest(new CreateBrokerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateBrokerRequest object.
 */
CreateBrokerRequest::CreateBrokerRequest()
    : MqRequest(new CreateBrokerRequestPrivate(MqRequest::CreateBrokerAction, this))
{

}

/*!
 * \reimp
 */
bool CreateBrokerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateBrokerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateBrokerRequest::response(QNetworkReply * const reply) const
{
    return new CreateBrokerResponse(*this, reply);
}

/*!
 * \class QtAws::Mq::CreateBrokerRequestPrivate
 * \brief The CreateBrokerRequestPrivate class provides private implementation for CreateBrokerRequest.
 * \internal
 *
 * \inmodule QtAwsMq
 */

/*!
 * Constructs a CreateBrokerRequestPrivate object for Mq \a action,
 * with public implementation \a q.
 */
CreateBrokerRequestPrivate::CreateBrokerRequestPrivate(
    const MqRequest::Action action, CreateBrokerRequest * const q)
    : MqRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateBrokerRequest
 * class' copy constructor.
 */
CreateBrokerRequestPrivate::CreateBrokerRequestPrivate(
    const CreateBrokerRequestPrivate &other, CreateBrokerRequest * const q)
    : MqRequestPrivate(other, q)
{

}

} // namespace Mq
} // namespace QtAws
