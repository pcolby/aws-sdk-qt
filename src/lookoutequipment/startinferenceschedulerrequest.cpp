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

#include "startinferenceschedulerrequest.h"
#include "startinferenceschedulerrequest_p.h"
#include "startinferenceschedulerresponse.h"
#include "lookoutequipmentrequest_p.h"

namespace QtAws {
namespace LookoutEquipment {

/*!
 * \class QtAws::LookoutEquipment::StartInferenceSchedulerRequest
 * \brief The StartInferenceSchedulerRequest class provides an interface for LookoutEquipment StartInferenceScheduler requests.
 *
 * \inmodule QtAwsLookoutEquipment
 *
 *  Amazon Lookout for Equipment is a machine learning service that uses advanced analytics to identify anomalies in
 *  machines from sensor data for use in predictive maintenance.
 *
 * \sa LookoutEquipmentClient::startInferenceScheduler
 */

/*!
 * Constructs a copy of \a other.
 */
StartInferenceSchedulerRequest::StartInferenceSchedulerRequest(const StartInferenceSchedulerRequest &other)
    : LookoutEquipmentRequest(new StartInferenceSchedulerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartInferenceSchedulerRequest object.
 */
StartInferenceSchedulerRequest::StartInferenceSchedulerRequest()
    : LookoutEquipmentRequest(new StartInferenceSchedulerRequestPrivate(LookoutEquipmentRequest::StartInferenceSchedulerAction, this))
{

}

/*!
 * \reimp
 */
bool StartInferenceSchedulerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartInferenceSchedulerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartInferenceSchedulerRequest::response(QNetworkReply * const reply) const
{
    return new StartInferenceSchedulerResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutEquipment::StartInferenceSchedulerRequestPrivate
 * \brief The StartInferenceSchedulerRequestPrivate class provides private implementation for StartInferenceSchedulerRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutEquipment
 */

/*!
 * Constructs a StartInferenceSchedulerRequestPrivate object for LookoutEquipment \a action,
 * with public implementation \a q.
 */
StartInferenceSchedulerRequestPrivate::StartInferenceSchedulerRequestPrivate(
    const LookoutEquipmentRequest::Action action, StartInferenceSchedulerRequest * const q)
    : LookoutEquipmentRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartInferenceSchedulerRequest
 * class' copy constructor.
 */
StartInferenceSchedulerRequestPrivate::StartInferenceSchedulerRequestPrivate(
    const StartInferenceSchedulerRequestPrivate &other, StartInferenceSchedulerRequest * const q)
    : LookoutEquipmentRequestPrivate(other, q)
{

}

} // namespace LookoutEquipment
} // namespace QtAws
