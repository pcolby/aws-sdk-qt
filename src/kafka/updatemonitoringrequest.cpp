// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatemonitoringrequest.h"
#include "updatemonitoringrequest_p.h"
#include "updatemonitoringresponse.h"
#include "kafkarequest_p.h"

namespace QtAws {
namespace Kafka {

/*!
 * \class QtAws::Kafka::UpdateMonitoringRequest
 * \brief The UpdateMonitoringRequest class provides an interface for Kafka UpdateMonitoring requests.
 *
 * \inmodule QtAwsKafka
 *
 *  The operations for managing an Amazon MSK
 *
 * \sa KafkaClient::updateMonitoring
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateMonitoringRequest::UpdateMonitoringRequest(const UpdateMonitoringRequest &other)
    : KafkaRequest(new UpdateMonitoringRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateMonitoringRequest object.
 */
UpdateMonitoringRequest::UpdateMonitoringRequest()
    : KafkaRequest(new UpdateMonitoringRequestPrivate(KafkaRequest::UpdateMonitoringAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateMonitoringRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateMonitoringResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateMonitoringRequest::response(QNetworkReply * const reply) const
{
    return new UpdateMonitoringResponse(*this, reply);
}

/*!
 * \class QtAws::Kafka::UpdateMonitoringRequestPrivate
 * \brief The UpdateMonitoringRequestPrivate class provides private implementation for UpdateMonitoringRequest.
 * \internal
 *
 * \inmodule QtAwsKafka
 */

/*!
 * Constructs a UpdateMonitoringRequestPrivate object for Kafka \a action,
 * with public implementation \a q.
 */
UpdateMonitoringRequestPrivate::UpdateMonitoringRequestPrivate(
    const KafkaRequest::Action action, UpdateMonitoringRequest * const q)
    : KafkaRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateMonitoringRequest
 * class' copy constructor.
 */
UpdateMonitoringRequestPrivate::UpdateMonitoringRequestPrivate(
    const UpdateMonitoringRequestPrivate &other, UpdateMonitoringRequest * const q)
    : KafkaRequestPrivate(other, q)
{

}

} // namespace Kafka
} // namespace QtAws
