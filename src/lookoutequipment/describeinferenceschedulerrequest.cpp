// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
