// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletemodelpackagerequest.h"
#include "deletemodelpackagerequest_p.h"
#include "deletemodelpackageresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteModelPackageRequest
 * \brief The DeleteModelPackageRequest class provides an interface for SageMaker DeleteModelPackage requests.
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
 * \sa SageMakerClient::deleteModelPackage
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteModelPackageRequest::DeleteModelPackageRequest(const DeleteModelPackageRequest &other)
    : SageMakerRequest(new DeleteModelPackageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteModelPackageRequest object.
 */
DeleteModelPackageRequest::DeleteModelPackageRequest()
    : SageMakerRequest(new DeleteModelPackageRequestPrivate(SageMakerRequest::DeleteModelPackageAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteModelPackageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteModelPackageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteModelPackageRequest::response(QNetworkReply * const reply) const
{
    return new DeleteModelPackageResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DeleteModelPackageRequestPrivate
 * \brief The DeleteModelPackageRequestPrivate class provides private implementation for DeleteModelPackageRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteModelPackageRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DeleteModelPackageRequestPrivate::DeleteModelPackageRequestPrivate(
    const SageMakerRequest::Action action, DeleteModelPackageRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteModelPackageRequest
 * class' copy constructor.
 */
DeleteModelPackageRequestPrivate::DeleteModelPackageRequestPrivate(
    const DeleteModelPackageRequestPrivate &other, DeleteModelPackageRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
