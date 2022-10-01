// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
