// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatebrokerstoragerequest.h"
#include "updatebrokerstoragerequest_p.h"
#include "updatebrokerstorageresponse.h"
#include "kafkarequest_p.h"

namespace QtAws {
namespace Kafka {

/*!
 * \class QtAws::Kafka::UpdateBrokerStorageRequest
 * \brief The UpdateBrokerStorageRequest class provides an interface for Kafka UpdateBrokerStorage requests.
 *
 * \inmodule QtAwsKafka
 *
 *  The operations for managing an Amazon MSK
 *
 * \sa KafkaClient::updateBrokerStorage
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateBrokerStorageRequest::UpdateBrokerStorageRequest(const UpdateBrokerStorageRequest &other)
    : KafkaRequest(new UpdateBrokerStorageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateBrokerStorageRequest object.
 */
UpdateBrokerStorageRequest::UpdateBrokerStorageRequest()
    : KafkaRequest(new UpdateBrokerStorageRequestPrivate(KafkaRequest::UpdateBrokerStorageAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateBrokerStorageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateBrokerStorageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateBrokerStorageRequest::response(QNetworkReply * const reply) const
{
    return new UpdateBrokerStorageResponse(*this, reply);
}

/*!
 * \class QtAws::Kafka::UpdateBrokerStorageRequestPrivate
 * \brief The UpdateBrokerStorageRequestPrivate class provides private implementation for UpdateBrokerStorageRequest.
 * \internal
 *
 * \inmodule QtAwsKafka
 */

/*!
 * Constructs a UpdateBrokerStorageRequestPrivate object for Kafka \a action,
 * with public implementation \a q.
 */
UpdateBrokerStorageRequestPrivate::UpdateBrokerStorageRequestPrivate(
    const KafkaRequest::Action action, UpdateBrokerStorageRequest * const q)
    : KafkaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateBrokerStorageRequest
 * class' copy constructor.
 */
UpdateBrokerStorageRequestPrivate::UpdateBrokerStorageRequestPrivate(
    const UpdateBrokerStorageRequestPrivate &other, UpdateBrokerStorageRequest * const q)
    : KafkaRequestPrivate(other, q)
{

}

} // namespace Kafka
} // namespace QtAws
