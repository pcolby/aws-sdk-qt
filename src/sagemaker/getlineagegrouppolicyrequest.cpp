// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getlineagegrouppolicyrequest.h"
#include "getlineagegrouppolicyrequest_p.h"
#include "getlineagegrouppolicyresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::GetLineageGroupPolicyRequest
 * \brief The GetLineageGroupPolicyRequest class provides an interface for SageMaker GetLineageGroupPolicy requests.
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
 * \sa SageMakerClient::getLineageGroupPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
GetLineageGroupPolicyRequest::GetLineageGroupPolicyRequest(const GetLineageGroupPolicyRequest &other)
    : SageMakerRequest(new GetLineageGroupPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetLineageGroupPolicyRequest object.
 */
GetLineageGroupPolicyRequest::GetLineageGroupPolicyRequest()
    : SageMakerRequest(new GetLineageGroupPolicyRequestPrivate(SageMakerRequest::GetLineageGroupPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool GetLineageGroupPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetLineageGroupPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetLineageGroupPolicyRequest::response(QNetworkReply * const reply) const
{
    return new GetLineageGroupPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::GetLineageGroupPolicyRequestPrivate
 * \brief The GetLineageGroupPolicyRequestPrivate class provides private implementation for GetLineageGroupPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a GetLineageGroupPolicyRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
GetLineageGroupPolicyRequestPrivate::GetLineageGroupPolicyRequestPrivate(
    const SageMakerRequest::Action action, GetLineageGroupPolicyRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetLineageGroupPolicyRequest
 * class' copy constructor.
 */
GetLineageGroupPolicyRequestPrivate::GetLineageGroupPolicyRequestPrivate(
    const GetLineageGroupPolicyRequestPrivate &other, GetLineageGroupPolicyRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
