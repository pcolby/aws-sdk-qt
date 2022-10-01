// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletebrokerrequest.h"
#include "deletebrokerrequest_p.h"
#include "deletebrokerresponse.h"
#include "mqrequest_p.h"

namespace QtAws {
namespace Mq {

/*!
 * \class QtAws::Mq::DeleteBrokerRequest
 * \brief The DeleteBrokerRequest class provides an interface for Mq DeleteBroker requests.
 *
 * \inmodule QtAwsMq
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ and RabbitMQ that makes it easy to set up and operate
 *  message brokers in the cloud. A message broker allows software applications and components to communicate using various
 *  programming languages, operating systems, and formal messaging
 *
 * \sa MqClient::deleteBroker
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteBrokerRequest::DeleteBrokerRequest(const DeleteBrokerRequest &other)
    : MqRequest(new DeleteBrokerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteBrokerRequest object.
 */
DeleteBrokerRequest::DeleteBrokerRequest()
    : MqRequest(new DeleteBrokerRequestPrivate(MqRequest::DeleteBrokerAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteBrokerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteBrokerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBrokerRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBrokerResponse(*this, reply);
}

/*!
 * \class QtAws::Mq::DeleteBrokerRequestPrivate
 * \brief The DeleteBrokerRequestPrivate class provides private implementation for DeleteBrokerRequest.
 * \internal
 *
 * \inmodule QtAwsMq
 */

/*!
 * Constructs a DeleteBrokerRequestPrivate object for Mq \a action,
 * with public implementation \a q.
 */
DeleteBrokerRequestPrivate::DeleteBrokerRequestPrivate(
    const MqRequest::Action action, DeleteBrokerRequest * const q)
    : MqRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteBrokerRequest
 * class' copy constructor.
 */
DeleteBrokerRequestPrivate::DeleteBrokerRequestPrivate(
    const DeleteBrokerRequestPrivate &other, DeleteBrokerRequest * const q)
    : MqRequestPrivate(other, q)
{

}

} // namespace Mq
} // namespace QtAws
