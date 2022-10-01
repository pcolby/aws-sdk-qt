// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateinferenceschedulerrequest.h"
#include "updateinferenceschedulerrequest_p.h"
#include "updateinferenceschedulerresponse.h"
#include "lookoutequipmentrequest_p.h"

namespace QtAws {
namespace LookoutEquipment {

/*!
 * \class QtAws::LookoutEquipment::UpdateInferenceSchedulerRequest
 * \brief The UpdateInferenceSchedulerRequest class provides an interface for LookoutEquipment UpdateInferenceScheduler requests.
 *
 * \inmodule QtAwsLookoutEquipment
 *
 *  Amazon Lookout for Equipment is a machine learning service that uses advanced analytics to identify anomalies in
 *  machines from sensor data for use in predictive maintenance.
 *
 * \sa LookoutEquipmentClient::updateInferenceScheduler
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateInferenceSchedulerRequest::UpdateInferenceSchedulerRequest(const UpdateInferenceSchedulerRequest &other)
    : LookoutEquipmentRequest(new UpdateInferenceSchedulerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateInferenceSchedulerRequest object.
 */
UpdateInferenceSchedulerRequest::UpdateInferenceSchedulerRequest()
    : LookoutEquipmentRequest(new UpdateInferenceSchedulerRequestPrivate(LookoutEquipmentRequest::UpdateInferenceSchedulerAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateInferenceSchedulerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateInferenceSchedulerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateInferenceSchedulerRequest::response(QNetworkReply * const reply) const
{
    return new UpdateInferenceSchedulerResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutEquipment::UpdateInferenceSchedulerRequestPrivate
 * \brief The UpdateInferenceSchedulerRequestPrivate class provides private implementation for UpdateInferenceSchedulerRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutEquipment
 */

/*!
 * Constructs a UpdateInferenceSchedulerRequestPrivate object for LookoutEquipment \a action,
 * with public implementation \a q.
 */
UpdateInferenceSchedulerRequestPrivate::UpdateInferenceSchedulerRequestPrivate(
    const LookoutEquipmentRequest::Action action, UpdateInferenceSchedulerRequest * const q)
    : LookoutEquipmentRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateInferenceSchedulerRequest
 * class' copy constructor.
 */
UpdateInferenceSchedulerRequestPrivate::UpdateInferenceSchedulerRequestPrivate(
    const UpdateInferenceSchedulerRequestPrivate &other, UpdateInferenceSchedulerRequest * const q)
    : LookoutEquipmentRequestPrivate(other, q)
{

}

} // namespace LookoutEquipment
} // namespace QtAws
