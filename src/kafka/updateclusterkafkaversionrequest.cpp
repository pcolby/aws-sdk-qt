// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateclusterkafkaversionrequest.h"
#include "updateclusterkafkaversionrequest_p.h"
#include "updateclusterkafkaversionresponse.h"
#include "kafkarequest_p.h"

namespace QtAws {
namespace Kafka {

/*!
 * \class QtAws::Kafka::UpdateClusterKafkaVersionRequest
 * \brief The UpdateClusterKafkaVersionRequest class provides an interface for Kafka UpdateClusterKafkaVersion requests.
 *
 * \inmodule QtAwsKafka
 *
 *  The operations for managing an Amazon MSK
 *
 * \sa KafkaClient::updateClusterKafkaVersion
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateClusterKafkaVersionRequest::UpdateClusterKafkaVersionRequest(const UpdateClusterKafkaVersionRequest &other)
    : KafkaRequest(new UpdateClusterKafkaVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateClusterKafkaVersionRequest object.
 */
UpdateClusterKafkaVersionRequest::UpdateClusterKafkaVersionRequest()
    : KafkaRequest(new UpdateClusterKafkaVersionRequestPrivate(KafkaRequest::UpdateClusterKafkaVersionAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateClusterKafkaVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateClusterKafkaVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateClusterKafkaVersionRequest::response(QNetworkReply * const reply) const
{
    return new UpdateClusterKafkaVersionResponse(*this, reply);
}

/*!
 * \class QtAws::Kafka::UpdateClusterKafkaVersionRequestPrivate
 * \brief The UpdateClusterKafkaVersionRequestPrivate class provides private implementation for UpdateClusterKafkaVersionRequest.
 * \internal
 *
 * \inmodule QtAwsKafka
 */

/*!
 * Constructs a UpdateClusterKafkaVersionRequestPrivate object for Kafka \a action,
 * with public implementation \a q.
 */
UpdateClusterKafkaVersionRequestPrivate::UpdateClusterKafkaVersionRequestPrivate(
    const KafkaRequest::Action action, UpdateClusterKafkaVersionRequest * const q)
    : KafkaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateClusterKafkaVersionRequest
 * class' copy constructor.
 */
UpdateClusterKafkaVersionRequestPrivate::UpdateClusterKafkaVersionRequestPrivate(
    const UpdateClusterKafkaVersionRequestPrivate &other, UpdateClusterKafkaVersionRequest * const q)
    : KafkaRequestPrivate(other, q)
{

}

} // namespace Kafka
} // namespace QtAws
