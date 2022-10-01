// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletemodelpackagegrouprequest.h"
#include "deletemodelpackagegrouprequest_p.h"
#include "deletemodelpackagegroupresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteModelPackageGroupRequest
 * \brief The DeleteModelPackageGroupRequest class provides an interface for SageMaker DeleteModelPackageGroup requests.
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
 * \sa SageMakerClient::deleteModelPackageGroup
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteModelPackageGroupRequest::DeleteModelPackageGroupRequest(const DeleteModelPackageGroupRequest &other)
    : SageMakerRequest(new DeleteModelPackageGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteModelPackageGroupRequest object.
 */
DeleteModelPackageGroupRequest::DeleteModelPackageGroupRequest()
    : SageMakerRequest(new DeleteModelPackageGroupRequestPrivate(SageMakerRequest::DeleteModelPackageGroupAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteModelPackageGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteModelPackageGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteModelPackageGroupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteModelPackageGroupResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DeleteModelPackageGroupRequestPrivate
 * \brief The DeleteModelPackageGroupRequestPrivate class provides private implementation for DeleteModelPackageGroupRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteModelPackageGroupRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DeleteModelPackageGroupRequestPrivate::DeleteModelPackageGroupRequestPrivate(
    const SageMakerRequest::Action action, DeleteModelPackageGroupRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteModelPackageGroupRequest
 * class' copy constructor.
 */
DeleteModelPackageGroupRequestPrivate::DeleteModelPackageGroupRequestPrivate(
    const DeleteModelPackageGroupRequestPrivate &other, DeleteModelPackageGroupRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
