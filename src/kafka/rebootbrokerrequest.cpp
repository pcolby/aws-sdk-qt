// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "rebootbrokerrequest.h"
#include "rebootbrokerrequest_p.h"
#include "rebootbrokerresponse.h"
#include "kafkarequest_p.h"

namespace QtAws {
namespace Kafka {

/*!
 * \class QtAws::Kafka::RebootBrokerRequest
 * \brief The RebootBrokerRequest class provides an interface for Kafka RebootBroker requests.
 *
 * \inmodule QtAwsKafka
 *
 *  The operations for managing an Amazon MSK
 *
 * \sa KafkaClient::rebootBroker
 */

/*!
 * Constructs a copy of \a other.
 */
RebootBrokerRequest::RebootBrokerRequest(const RebootBrokerRequest &other)
    : KafkaRequest(new RebootBrokerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RebootBrokerRequest object.
 */
RebootBrokerRequest::RebootBrokerRequest()
    : KafkaRequest(new RebootBrokerRequestPrivate(KafkaRequest::RebootBrokerAction, this))
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
 * \class QtAws::Kafka::RebootBrokerRequestPrivate
 * \brief The RebootBrokerRequestPrivate class provides private implementation for RebootBrokerRequest.
 * \internal
 *
 * \inmodule QtAwsKafka
 */

/*!
 * Constructs a RebootBrokerRequestPrivate object for Kafka \a action,
 * with public implementation \a q.
 */
RebootBrokerRequestPrivate::RebootBrokerRequestPrivate(
    const KafkaRequest::Action action, RebootBrokerRequest * const q)
    : KafkaRequestPrivate(action, q)
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
    : KafkaRequestPrivate(other, q)
{

}

} // namespace Kafka
} // namespace QtAws
