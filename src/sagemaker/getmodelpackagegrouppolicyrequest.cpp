// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getmodelpackagegrouppolicyrequest.h"
#include "getmodelpackagegrouppolicyrequest_p.h"
#include "getmodelpackagegrouppolicyresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::GetModelPackageGroupPolicyRequest
 * \brief The GetModelPackageGroupPolicyRequest class provides an interface for SageMaker GetModelPackageGroupPolicy requests.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">SageMaker Developer Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/augmented-ai/2019-11-07/APIReference/Welcome.html">Amazon Augmented AI Runtime API
 *  Reference</a>
 *
 * \sa SageMakerClient::getModelPackageGroupPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
GetModelPackageGroupPolicyRequest::GetModelPackageGroupPolicyRequest(const GetModelPackageGroupPolicyRequest &other)
    : SageMakerRequest(new GetModelPackageGroupPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetModelPackageGroupPolicyRequest object.
 */
GetModelPackageGroupPolicyRequest::GetModelPackageGroupPolicyRequest()
    : SageMakerRequest(new GetModelPackageGroupPolicyRequestPrivate(SageMakerRequest::GetModelPackageGroupPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool GetModelPackageGroupPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetModelPackageGroupPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetModelPackageGroupPolicyRequest::response(QNetworkReply * const reply) const
{
    return new GetModelPackageGroupPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::GetModelPackageGroupPolicyRequestPrivate
 * \brief The GetModelPackageGroupPolicyRequestPrivate class provides private implementation for GetModelPackageGroupPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a GetModelPackageGroupPolicyRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
GetModelPackageGroupPolicyRequestPrivate::GetModelPackageGroupPolicyRequestPrivate(
    const SageMakerRequest::Action action, GetModelPackageGroupPolicyRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetModelPackageGroupPolicyRequest
 * class' copy constructor.
 */
GetModelPackageGroupPolicyRequestPrivate::GetModelPackageGroupPolicyRequestPrivate(
    const GetModelPackageGroupPolicyRequestPrivate &other, GetModelPackageGroupPolicyRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
