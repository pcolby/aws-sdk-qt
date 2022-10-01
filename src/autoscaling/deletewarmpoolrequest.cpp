// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletewarmpoolrequest.h"
#include "deletewarmpoolrequest_p.h"
#include "deletewarmpoolresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::DeleteWarmPoolRequest
 * \brief The DeleteWarmPoolRequest class provides an interface for AutoScaling DeleteWarmPool requests.
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
 * \sa AutoScalingClient::deleteWarmPool
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteWarmPoolRequest::DeleteWarmPoolRequest(const DeleteWarmPoolRequest &other)
    : AutoScalingRequest(new DeleteWarmPoolRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteWarmPoolRequest object.
 */
DeleteWarmPoolRequest::DeleteWarmPoolRequest()
    : AutoScalingRequest(new DeleteWarmPoolRequestPrivate(AutoScalingRequest::DeleteWarmPoolAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteWarmPoolRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteWarmPoolResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteWarmPoolRequest::response(QNetworkReply * const reply) const
{
    return new DeleteWarmPoolResponse(*this, reply);
}

/*!
 * \class QtAws::AutoScaling::DeleteWarmPoolRequestPrivate
 * \brief The DeleteWarmPoolRequestPrivate class provides private implementation for DeleteWarmPoolRequest.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a DeleteWarmPoolRequestPrivate object for AutoScaling \a action,
 * with public implementation \a q.
 */
DeleteWarmPoolRequestPrivate::DeleteWarmPoolRequestPrivate(
    const AutoScalingRequest::Action action, DeleteWarmPoolRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteWarmPoolRequest
 * class' copy constructor.
 */
DeleteWarmPoolRequestPrivate::DeleteWarmPoolRequestPrivate(
    const DeleteWarmPoolRequestPrivate &other, DeleteWarmPoolRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
