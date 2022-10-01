// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createinferenceschedulerrequest.h"
#include "createinferenceschedulerrequest_p.h"
#include "createinferenceschedulerresponse.h"
#include "lookoutequipmentrequest_p.h"

namespace QtAws {
namespace LookoutEquipment {

/*!
 * \class QtAws::LookoutEquipment::CreateInferenceSchedulerRequest
 * \brief The CreateInferenceSchedulerRequest class provides an interface for LookoutEquipment CreateInferenceScheduler requests.
 *
 * \inmodule QtAwsLookoutEquipment
 *
 *  Amazon Lookout for Equipment is a machine learning service that uses advanced analytics to identify anomalies in
 *  machines from sensor data for use in predictive maintenance.
 *
 * \sa LookoutEquipmentClient::createInferenceScheduler
 */

/*!
 * Constructs a copy of \a other.
 */
CreateInferenceSchedulerRequest::CreateInferenceSchedulerRequest(const CreateInferenceSchedulerRequest &other)
    : LookoutEquipmentRequest(new CreateInferenceSchedulerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateInferenceSchedulerRequest object.
 */
CreateInferenceSchedulerRequest::CreateInferenceSchedulerRequest()
    : LookoutEquipmentRequest(new CreateInferenceSchedulerRequestPrivate(LookoutEquipmentRequest::CreateInferenceSchedulerAction, this))
{

}

/*!
 * \reimp
 */
bool CreateInferenceSchedulerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateInferenceSchedulerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateInferenceSchedulerRequest::response(QNetworkReply * const reply) const
{
    return new CreateInferenceSchedulerResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutEquipment::CreateInferenceSchedulerRequestPrivate
 * \brief The CreateInferenceSchedulerRequestPrivate class provides private implementation for CreateInferenceSchedulerRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutEquipment
 */

/*!
 * Constructs a CreateInferenceSchedulerRequestPrivate object for LookoutEquipment \a action,
 * with public implementation \a q.
 */
CreateInferenceSchedulerRequestPrivate::CreateInferenceSchedulerRequestPrivate(
    const LookoutEquipmentRequest::Action action, CreateInferenceSchedulerRequest * const q)
    : LookoutEquipmentRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateInferenceSchedulerRequest
 * class' copy constructor.
 */
CreateInferenceSchedulerRequestPrivate::CreateInferenceSchedulerRequestPrivate(
    const CreateInferenceSchedulerRequestPrivate &other, CreateInferenceSchedulerRequest * const q)
    : LookoutEquipmentRequestPrivate(other, q)
{

}

} // namespace LookoutEquipment
} // namespace QtAws
