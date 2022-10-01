// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "rebootbrokerrequest.h"
#include "rebootbrokerrequest_p.h"
#include "rebootbrokerresponse.h"
#include "mqrequest_p.h"

namespace QtAws {
namespace Mq {

/*!
 * \class QtAws::Mq::RebootBrokerRequest
 * \brief The RebootBrokerRequest class provides an interface for Mq RebootBroker requests.
 *
 * \inmodule QtAwsMq
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ and RabbitMQ that makes it easy to set up and operate
 *  message brokers in the cloud. A message broker allows software applications and components to communicate using various
 *  programming languages, operating systems, and formal messaging
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
 * \class QtAws::Mq::RebootBrokerRequestPrivate
 * \brief The RebootBrokerRequestPrivate class provides private implementation for RebootBrokerRequest.
 * \internal
 *
 * \inmodule QtAwsMq
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

} // namespace Mq
} // namespace QtAws
