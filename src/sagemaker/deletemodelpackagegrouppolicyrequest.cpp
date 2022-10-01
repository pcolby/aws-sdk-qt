// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletemodelpackagegrouppolicyrequest.h"
#include "deletemodelpackagegrouppolicyrequest_p.h"
#include "deletemodelpackagegrouppolicyresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteModelPackageGroupPolicyRequest
 * \brief The DeleteModelPackageGroupPolicyRequest class provides an interface for SageMaker DeleteModelPackageGroupPolicy requests.
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
 * \sa SageMakerClient::deleteModelPackageGroupPolicy
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteModelPackageGroupPolicyRequest::DeleteModelPackageGroupPolicyRequest(const DeleteModelPackageGroupPolicyRequest &other)
    : SageMakerRequest(new DeleteModelPackageGroupPolicyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteModelPackageGroupPolicyRequest object.
 */
DeleteModelPackageGroupPolicyRequest::DeleteModelPackageGroupPolicyRequest()
    : SageMakerRequest(new DeleteModelPackageGroupPolicyRequestPrivate(SageMakerRequest::DeleteModelPackageGroupPolicyAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteModelPackageGroupPolicyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteModelPackageGroupPolicyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteModelPackageGroupPolicyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteModelPackageGroupPolicyResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DeleteModelPackageGroupPolicyRequestPrivate
 * \brief The DeleteModelPackageGroupPolicyRequestPrivate class provides private implementation for DeleteModelPackageGroupPolicyRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteModelPackageGroupPolicyRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DeleteModelPackageGroupPolicyRequestPrivate::DeleteModelPackageGroupPolicyRequestPrivate(
    const SageMakerRequest::Action action, DeleteModelPackageGroupPolicyRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteModelPackageGroupPolicyRequest
 * class' copy constructor.
 */
DeleteModelPackageGroupPolicyRequestPrivate::DeleteModelPackageGroupPolicyRequestPrivate(
    const DeleteModelPackageGroupPolicyRequestPrivate &other, DeleteModelPackageGroupPolicyRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
