// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatebrokertyperequest.h"
#include "updatebrokertyperequest_p.h"
#include "updatebrokertyperesponse.h"
#include "kafkarequest_p.h"

namespace QtAws {
namespace Kafka {

/*!
 * \class QtAws::Kafka::UpdateBrokerTypeRequest
 * \brief The UpdateBrokerTypeRequest class provides an interface for Kafka UpdateBrokerType requests.
 *
 * \inmodule QtAwsKafka
 *
 *  The operations for managing an Amazon MSK
 *
 * \sa KafkaClient::updateBrokerType
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateBrokerTypeRequest::UpdateBrokerTypeRequest(const UpdateBrokerTypeRequest &other)
    : KafkaRequest(new UpdateBrokerTypeRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateBrokerTypeRequest object.
 */
UpdateBrokerTypeRequest::UpdateBrokerTypeRequest()
    : KafkaRequest(new UpdateBrokerTypeRequestPrivate(KafkaRequest::UpdateBrokerTypeAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateBrokerTypeRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateBrokerTypeResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateBrokerTypeRequest::response(QNetworkReply * const reply) const
{
    return new UpdateBrokerTypeResponse(*this, reply);
}

/*!
 * \class QtAws::Kafka::UpdateBrokerTypeRequestPrivate
 * \brief The UpdateBrokerTypeRequestPrivate class provides private implementation for UpdateBrokerTypeRequest.
 * \internal
 *
 * \inmodule QtAwsKafka
 */

/*!
 * Constructs a UpdateBrokerTypeRequestPrivate object for Kafka \a action,
 * with public implementation \a q.
 */
UpdateBrokerTypeRequestPrivate::UpdateBrokerTypeRequestPrivate(
    const KafkaRequest::Action action, UpdateBrokerTypeRequest * const q)
    : KafkaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateBrokerTypeRequest
 * class' copy constructor.
 */
UpdateBrokerTypeRequestPrivate::UpdateBrokerTypeRequestPrivate(
    const UpdateBrokerTypeRequestPrivate &other, UpdateBrokerTypeRequest * const q)
    : KafkaRequestPrivate(other, q)
{

}

} // namespace Kafka
} // namespace QtAws
