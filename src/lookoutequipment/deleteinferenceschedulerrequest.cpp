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
