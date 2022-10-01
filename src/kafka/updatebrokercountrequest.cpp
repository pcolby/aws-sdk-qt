// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatebrokercountrequest.h"
#include "updatebrokercountrequest_p.h"
#include "updatebrokercountresponse.h"
#include "kafkarequest_p.h"

namespace QtAws {
namespace Kafka {

/*!
 * \class QtAws::Kafka::UpdateBrokerCountRequest
 * \brief The UpdateBrokerCountRequest class provides an interface for Kafka UpdateBrokerCount requests.
 *
 * \inmodule QtAwsKafka
 *
 *  The operations for managing an Amazon MSK
 *
 * \sa KafkaClient::updateBrokerCount
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateBrokerCountRequest::UpdateBrokerCountRequest(const UpdateBrokerCountRequest &other)
    : KafkaRequest(new UpdateBrokerCountRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateBrokerCountRequest object.
 */
UpdateBrokerCountRequest::UpdateBrokerCountRequest()
    : KafkaRequest(new UpdateBrokerCountRequestPrivate(KafkaRequest::UpdateBrokerCountAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateBrokerCountRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateBrokerCountResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateBrokerCountRequest::response(QNetworkReply * const reply) const
{
    return new UpdateBrokerCountResponse(*this, reply);
}

/*!
 * \class QtAws::Kafka::UpdateBrokerCountRequestPrivate
 * \brief The UpdateBrokerCountRequestPrivate class provides private implementation for UpdateBrokerCountRequest.
 * \internal
 *
 * \inmodule QtAwsKafka
 */

/*!
 * Constructs a UpdateBrokerCountRequestPrivate object for Kafka \a action,
 * with public implementation \a q.
 */
UpdateBrokerCountRequestPrivate::UpdateBrokerCountRequestPrivate(
    const KafkaRequest::Action action, UpdateBrokerCountRequest * const q)
    : KafkaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateBrokerCountRequest
 * class' copy constructor.
 */
UpdateBrokerCountRequestPrivate::UpdateBrokerCountRequestPrivate(
    const UpdateBrokerCountRequestPrivate &other, UpdateBrokerCountRequest * const q)
    : KafkaRequestPrivate(other, q)
{

}

} // namespace Kafka
} // namespace QtAws
