// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteinferenceschedulerrequest.h"
#include "deleteinferenceschedulerrequest_p.h"
#include "deleteinferenceschedulerresponse.h"
#include "lookoutequipmentrequest_p.h"

namespace QtAws {
namespace LookoutEquipment {

/*!
 * \class QtAws::LookoutEquipment::DeleteInferenceSchedulerRequest
 * \brief The DeleteInferenceSchedulerRequest class provides an interface for LookoutEquipment DeleteInferenceScheduler requests.
 *
 * \inmodule QtAwsLookoutEquipment
 *
 *  Amazon Lookout for Equipment is a machine learning service that uses advanced analytics to identify anomalies in
 *  machines from sensor data for use in predictive maintenance.
 *
 * \sa LookoutEquipmentClient::deleteInferenceScheduler
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteInferenceSchedulerRequest::DeleteInferenceSchedulerRequest(const DeleteInferenceSchedulerRequest &other)
    : LookoutEquipmentRequest(new DeleteInferenceSchedulerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteInferenceSchedulerRequest object.
 */
DeleteInferenceSchedulerRequest::DeleteInferenceSchedulerRequest()
    : LookoutEquipmentRequest(new DeleteInferenceSchedulerRequestPrivate(LookoutEquipmentRequest::DeleteInferenceSchedulerAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteInferenceSchedulerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteInferenceSchedulerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteInferenceSchedulerRequest::response(QNetworkReply * const reply) const
{
    return new DeleteInferenceSchedulerResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutEquipment::DeleteInferenceSchedulerRequestPrivate
 * \brief The DeleteInferenceSchedulerRequestPrivate class provides private implementation for DeleteInferenceSchedulerRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutEquipment
 */

/*!
 * Constructs a DeleteInferenceSchedulerRequestPrivate object for LookoutEquipment \a action,
 * with public implementation \a q.
 */
DeleteInferenceSchedulerRequestPrivate::DeleteInferenceSchedulerRequestPrivate(
    const LookoutEquipmentRequest::Action action, DeleteInferenceSchedulerRequest * const q)
    : LookoutEquipmentRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteInferenceSchedulerRequest
 * class' copy constructor.
 */
DeleteInferenceSchedulerRequestPrivate::DeleteInferenceSchedulerRequestPrivate(
    const DeleteInferenceSchedulerRequestPrivate &other, DeleteInferenceSchedulerRequest * const q)
    : LookoutEquipmentRequestPrivate(other, q)
{

}

} // namespace LookoutEquipment
} // namespace QtAws
