// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createorupdatetagsrequest.h"
#include "createorupdatetagsrequest_p.h"
#include "createorupdatetagsresponse.h"
#include "autoscalingrequest_p.h"

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::CreateOrUpdateTagsRequest
 * \brief The CreateOrUpdateTagsRequest class provides an interface for AutoScaling CreateOrUpdateTags requests.
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
 * \sa AutoScalingClient::createOrUpdateTags
 */

/*!
 * Constructs a copy of \a other.
 */
CreateOrUpdateTagsRequest::CreateOrUpdateTagsRequest(const CreateOrUpdateTagsRequest &other)
    : AutoScalingRequest(new CreateOrUpdateTagsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateOrUpdateTagsRequest object.
 */
CreateOrUpdateTagsRequest::CreateOrUpdateTagsRequest()
    : AutoScalingRequest(new CreateOrUpdateTagsRequestPrivate(AutoScalingRequest::CreateOrUpdateTagsAction, this))
{

}

/*!
 * \reimp
 */
bool CreateOrUpdateTagsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateOrUpdateTagsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateOrUpdateTagsRequest::response(QNetworkReply * const reply) const
{
    return new CreateOrUpdateTagsResponse(*this, reply);
}

/*!
 * \class QtAws::AutoScaling::CreateOrUpdateTagsRequestPrivate
 * \brief The CreateOrUpdateTagsRequestPrivate class provides private implementation for CreateOrUpdateTagsRequest.
 * \internal
 *
 * \inmodule QtAwsAutoScaling
 */

/*!
 * Constructs a CreateOrUpdateTagsRequestPrivate object for AutoScaling \a action,
 * with public implementation \a q.
 */
CreateOrUpdateTagsRequestPrivate::CreateOrUpdateTagsRequestPrivate(
    const AutoScalingRequest::Action action, CreateOrUpdateTagsRequest * const q)
    : AutoScalingRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateOrUpdateTagsRequest
 * class' copy constructor.
 */
CreateOrUpdateTagsRequestPrivate::CreateOrUpdateTagsRequestPrivate(
    const CreateOrUpdateTagsRequestPrivate &other, CreateOrUpdateTagsRequest * const q)
    : AutoScalingRequestPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace QtAws
