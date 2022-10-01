// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "enablemetricscollectionrequest.h"
#include "enablemetricscollectionrequest_p.h"
#include "enablemetricscollectionresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::EnableMetricsCollectionRequest
 * \brief The EnableMetricsCollectionRequest class provides an interface for AutoScaling EnableMetricsCollection requests.
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
 * \sa AutoScalingClient::enableMetricsCollection
 */

/*!
 * Constructs a copy of \a other.
 */
EnableMetricsCollectionRequest::EnableMetricsCollectionRequest(const EnableMetricsCollectionRequest &other)
    : AutoScalingRequest(new EnableMetricsCollectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a EnableMetricsCollectionRequest object.
 */
EnableMetricsCollectionRequest::EnableMetricsCollectionRequest()
    : AutoScalingRequest(new EnableMetricsCollectionRequestPrivate(AutoScalingRequest::EnableMetricsCollectionAction, this))
{

}

/*!
 * \reimp
 */
bool EnableMetricsCollectionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a EnableMetricsCollectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * EnableMetricsCollectionRequest::response(QNetworkReply * const reply) const
{
    return new EnableMetricsCollectionResponse(*this, reply);
}

/*!
 * \class QtAws::AutoScaling::EnableMetricsCollectionRequestPrivate
 * \brief The EnableMetricsCollectionRequestPrivate class provides private implementation for EnableMetricsCollectionRequest.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a EnableMetricsCollectionRequestPrivate object for AutoScaling \a action,
 * with public implementation \a q.
 */
EnableMetricsCollectionRequestPrivate::EnableMetricsCollectionRequestPrivate(
    const AutoScalingRequest::Action action, EnableMetricsCollectionRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the EnableMetricsCollectionRequest
 * class' copy constructor.
 */
EnableMetricsCollectionRequestPrivate::EnableMetricsCollectionRequestPrivate(
    const EnableMetricsCollectionRequestPrivate &other, EnableMetricsCollectionRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
