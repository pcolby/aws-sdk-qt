// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
