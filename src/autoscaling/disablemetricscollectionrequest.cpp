// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disablemetricscollectionrequest.h"
#include "disablemetricscollectionrequest_p.h"
#include "disablemetricscollectionresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DisableMetricsCollectionRequest
 * \brief The DisableMetricsCollectionRequest class provides an interface for AutoScaling DisableMetricsCollection requests.
 *
 * \inmodule QtAwsAutoScaling
 *
 *  <fullname>Amazon EC2 Auto Scaling</fullname>
 * 
 *  Amazon EC2 Auto Scaling is designed to automatically launch and terminate EC2 instances based on user-defined scaling
 *  policies, scheduled actions, and health
 * 
 *  checks>
 * 
 *  For more information, see the <a href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/">Amazon EC2 Auto Scaling
 *  User Guide</a> and the <a href="https://docs.aws.amazon.com/autoscaling/ec2/APIReference/Welcome.html">Amazon EC2 Auto
 *  Scaling API
 *
 * \sa AutoScalingClient::disableMetricsCollection
 */

/*!
 * Constructs a copy of \a other.
 */
DisableMetricsCollectionRequest::DisableMetricsCollectionRequest(const DisableMetricsCollectionRequest &other)
    : AutoScalingRequest(new DisableMetricsCollectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisableMetricsCollectionRequest object.
 */
DisableMetricsCollectionRequest::DisableMetricsCollectionRequest()
    : AutoScalingRequest(new DisableMetricsCollectionRequestPrivate(AutoScalingRequest::DisableMetricsCollectionAction, this))
{

}

/*!
 * \reimp
 */
bool DisableMetricsCollectionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisableMetricsCollectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisableMetricsCollectionRequest::response(QNetworkReply * const reply) const
{
    return new DisableMetricsCollectionResponse(*this, reply);
}

/*!
 * \class QtAws::AutoScaling::DisableMetricsCollectionRequestPrivate
 * \brief The DisableMetricsCollectionRequestPrivate class provides private implementation for DisableMetricsCollectionRequest.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a DisableMetricsCollectionRequestPrivate object for AutoScaling \a action,
 * with public implementation \a q.
 */
DisableMetricsCollectionRequestPrivate::DisableMetricsCollectionRequestPrivate(
    const AutoScalingRequest::Action action, DisableMetricsCollectionRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisableMetricsCollectionRequest
 * class' copy constructor.
 */
DisableMetricsCollectionRequestPrivate::DisableMetricsCollectionRequestPrivate(
    const DisableMetricsCollectionRequestPrivate &other, DisableMetricsCollectionRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
