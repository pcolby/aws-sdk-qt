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
