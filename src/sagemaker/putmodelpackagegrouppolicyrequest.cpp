// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putmodelpackagegrouppolicyrequest.h"
#include "putmodelpackagegrouppolicyrequest_p.h"
#include "putmodelpackagegrouppolicyresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::PutModelPackageGroupPolicyRequest
 * \brief The PutModelPackageGroupPolicyRequest class provides an interface for SageMaker PutModelPackageGroupPolicy requests.
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
 * \sa SageMakerClient::putModelPackageGroupPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
PutModelPackageGroupPolicyRequest::PutModelPackageGroupPolicyRequest(const PutModelPackageGroupPolicyRequest &other)
    : SageMakerRequest(new PutModelPackageGroupPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutModelPackageGroupPolicyRequest object.
 */
PutModelPackageGroupPolicyRequest::PutModelPackageGroupPolicyRequest()
    : SageMakerRequest(new PutModelPackageGroupPolicyRequestPrivate(SageMakerRequest::PutModelPackageGroupPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool PutModelPackageGroupPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutModelPackageGroupPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutModelPackageGroupPolicyRequest::response(QNetworkReply * const reply) const
{
    return new PutModelPackageGroupPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::PutModelPackageGroupPolicyRequestPrivate
 * \brief The PutModelPackageGroupPolicyRequestPrivate class provides private implementation for PutModelPackageGroupPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a PutModelPackageGroupPolicyRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
PutModelPackageGroupPolicyRequestPrivate::PutModelPackageGroupPolicyRequestPrivate(
    const SageMakerRequest::Action action, PutModelPackageGroupPolicyRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutModelPackageGroupPolicyRequest
 * class' copy constructor.
 */
PutModelPackageGroupPolicyRequestPrivate::PutModelPackageGroupPolicyRequestPrivate(
    const PutModelPackageGroupPolicyRequestPrivate &other, PutModelPackageGroupPolicyRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
