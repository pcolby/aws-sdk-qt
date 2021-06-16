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

#include "stopinferenceschedulerrequest.h"
#include "stopinferenceschedulerrequest_p.h"
#include "stopinferenceschedulerresponse.h"
#include "lookoutequipmentrequest_p.h"

namespace QtAws {
namespace LookoutEquipment {

/*!
 * \class QtAws::LookoutEquipment::StopInferenceSchedulerRequest
 * \brief The StopInferenceSchedulerRequest class provides an interface for LookoutEquipment StopInferenceScheduler requests.
 *
 * \inmodule QtAwsLookoutEquipment
 *
 *  Amazon Lookout for Equipment is a machine learning service that uses advanced analytics to identify anomalies in
 *  machines from sensor data for use in predictive maintenance.
 *
 * \sa LookoutEquipmentClient::stopInferenceScheduler
 */

/*!
 * Constructs a copy of \a other.
 */
StopInferenceSchedulerRequest::StopInferenceSchedulerRequest(const StopInferenceSchedulerRequest &other)
    : LookoutEquipmentRequest(new StopInferenceSchedulerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopInferenceSchedulerRequest object.
 */
StopInferenceSchedulerRequest::StopInferenceSchedulerRequest()
    : LookoutEquipmentRequest(new StopInferenceSchedulerRequestPrivate(LookoutEquipmentRequest::StopInferenceSchedulerAction, this))
{

}

/*!
 * \reimp
 */
bool StopInferenceSchedulerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopInferenceSchedulerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopInferenceSchedulerRequest::response(QNetworkReply * const reply) const
{
    return new StopInferenceSchedulerResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutEquipment::StopInferenceSchedulerRequestPrivate
 * \brief The StopInferenceSchedulerRequestPrivate class provides private implementation for StopInferenceSchedulerRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutEquipment
 */

/*!
 * Constructs a StopInferenceSchedulerRequestPrivate object for LookoutEquipment \a action,
 * with public implementation \a q.
 */
StopInferenceSchedulerRequestPrivate::StopInferenceSchedulerRequestPrivate(
    const LookoutEquipmentRequest::Action action, StopInferenceSchedulerRequest * const q)
    : LookoutEquipmentRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopInferenceSchedulerRequest
 * class' copy constructor.
 */
StopInferenceSchedulerRequestPrivate::StopInferenceSchedulerRequestPrivate(
    const StopInferenceSchedulerRequestPrivate &other, StopInferenceSchedulerRequest * const q)
    : LookoutEquipmentRequestPrivate(other, q)
{

}

} // namespace LookoutEquipment
} // namespace QtAws
