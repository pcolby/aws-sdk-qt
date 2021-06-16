/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
