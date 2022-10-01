// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
