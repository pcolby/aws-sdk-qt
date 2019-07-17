/*
    Copyright 2013-2019 Paul Colby

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

#include "rebootbrokerrequest.h"
#include "rebootbrokerrequest_p.h"
#include "rebootbrokerresponse.h"
#include "mqrequest_p.h"

namespace QtAws {
namespace MQ {

/*!
 * \class QtAws::MQ::RebootBrokerRequest
 * \brief The RebootBrokerRequest class provides an interface for MQ RebootBroker requests.
 *
 * \inmodule QtAwsMQ
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ that makes it easy to set up and operate message
 *  brokers in the cloud. A message broker allows software applications and components to communicate using various
 *
 * \sa MqClient::rebootBroker
 */

/*!
 * Constructs a copy of \a other.
 */
RebootBrokerRequest::RebootBrokerRequest(const RebootBrokerRequest &other)
    : MqRequest(new RebootBrokerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RebootBrokerRequest object.
 */
RebootBrokerRequest::RebootBrokerRequest()
    : MqRequest(new RebootBrokerRequestPrivate(MqRequest::RebootBrokerAction, this))
{

}

/*!
 * \reimp
 */
bool RebootBrokerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RebootBrokerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RebootBrokerRequest::response(QNetworkReply * const reply) const
{
    return new RebootBrokerResponse(*this, reply);
}

/*!
 * \class QtAws::MQ::RebootBrokerRequestPrivate
 * \brief The RebootBrokerRequestPrivate class provides private implementation for RebootBrokerRequest.
 * \internal
 *
 * \inmodule QtAwsMQ
 */

/*!
 * Constructs a RebootBrokerRequestPrivate object for Mq \a action,
 * with public implementation \a q.
 */
RebootBrokerRequestPrivate::RebootBrokerRequestPrivate(
    const MqRequest::Action action, RebootBrokerRequest * const q)
    : MqRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RebootBrokerRequest
 * class' copy constructor.
 */
RebootBrokerRequestPrivate::RebootBrokerRequestPrivate(
    const RebootBrokerRequestPrivate &other, RebootBrokerRequest * const q)
    : MqRequestPrivate(other, q)
{

}

} // namespace MQ
} // namespace QtAws
