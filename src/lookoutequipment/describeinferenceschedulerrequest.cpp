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

#include "describeinferenceschedulerrequest.h"
#include "describeinferenceschedulerrequest_p.h"
#include "describeinferenceschedulerresponse.h"
#include "lookoutequipmentrequest_p.h"

namespace QtAws {
namespace LookoutEquipment {

/*!
 * \class QtAws::LookoutEquipment::DescribeInferenceSchedulerRequest
 * \brief The DescribeInferenceSchedulerRequest class provides an interface for LookoutEquipment DescribeInferenceScheduler requests.
 *
 * \inmodule QtAwsLookoutEquipment
 *
 *  Amazon Lookout for Equipment is a machine learning service that uses advanced analytics to identify anomalies in
 *  machines from sensor data for use in predictive maintenance.
 *
 * \sa LookoutEquipmentClient::describeInferenceScheduler
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeInferenceSchedulerRequest::DescribeInferenceSchedulerRequest(const DescribeInferenceSchedulerRequest &other)
    : LookoutEquipmentRequest(new DescribeInferenceSchedulerRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeInferenceSchedulerRequest object.
 */
DescribeInferenceSchedulerRequest::DescribeInferenceSchedulerRequest()
    : LookoutEquipmentRequest(new DescribeInferenceSchedulerRequestPrivate(LookoutEquipmentRequest::DescribeInferenceSchedulerAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeInferenceSchedulerRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeInferenceSchedulerResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeInferenceSchedulerRequest::response(QNetworkReply * const reply) const
{
    return new DescribeInferenceSchedulerResponse(*this, reply);
}

/*!
 * \class QtAws::LookoutEquipment::DescribeInferenceSchedulerRequestPrivate
 * \brief The DescribeInferenceSchedulerRequestPrivate class provides private implementation for DescribeInferenceSchedulerRequest.
 * \internal
 *
 * \inmodule QtAwsLookoutEquipment
 */

/*!
 * Constructs a DescribeInferenceSchedulerRequestPrivate object for LookoutEquipment \a action,
 * with public implementation \a q.
 */
DescribeInferenceSchedulerRequestPrivate::DescribeInferenceSchedulerRequestPrivate(
    const LookoutEquipmentRequest::Action action, DescribeInferenceSchedulerRequest * const q)
    : LookoutEquipmentRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeInferenceSchedulerRequest
 * class' copy constructor.
 */
DescribeInferenceSchedulerRequestPrivate::DescribeInferenceSchedulerRequestPrivate(
    const DescribeInferenceSchedulerRequestPrivate &other, DescribeInferenceSchedulerRequest * const q)
    : LookoutEquipmentRequestPrivate(other, q)
{

}

} // namespace LookoutEquipment
} // namespace QtAws
