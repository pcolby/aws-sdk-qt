/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "updatebrokerrequest.h"
#include "updatebrokerrequest_p.h"
#include "updatebrokerresponse.h"
#include "mqrequest_p.h"

namespace QtAws {
namespace MQ {

/*!
 * \class QtAws::MQ::UpdateBrokerRequest
 * \brief The UpdateBrokerRequest class provides an interface for MQ UpdateBroker requests.
 *
 * \inmodule QtAwsMQ
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ that makes it easy to set up and operate message
 *  brokers in the cloud. A message broker allows software applications and components to communicate using various
 *
 * \sa MQClient::updateBroker
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateBrokerRequest::UpdateBrokerRequest(const UpdateBrokerRequest &other)
    : MQRequest(new UpdateBrokerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateBrokerRequest object.
 */
UpdateBrokerRequest::UpdateBrokerRequest()
    : MQRequest(new UpdateBrokerRequestPrivate(MQRequest::UpdateBrokerAction, this))
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
 * \class QtAws::MQ::UpdateBrokerRequestPrivate
 * \brief The UpdateBrokerRequestPrivate class provides private implementation for UpdateBrokerRequest.
 * \internal
 *
 * \inmodule QtAwsMQ
 */

/*!
 * Constructs a UpdateBrokerRequestPrivate object for MQ \a action,
 * with public implementation \a q.
 */
UpdateBrokerRequestPrivate::UpdateBrokerRequestPrivate(
    const MQRequest::Action action, UpdateBrokerRequest * const q)
    : MQRequestPrivate(action, q)
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
    : MQRequestPrivate(other, q)
{

}

} // namespace MQ
} // namespace QtAws
