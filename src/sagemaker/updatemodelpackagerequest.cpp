// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatemodelpackagerequest.h"
#include "updatemodelpackagerequest_p.h"
#include "updatemodelpackageresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::UpdateModelPackageRequest
 * \brief The UpdateModelPackageRequest class provides an interface for SageMaker UpdateModelPackage requests.
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
 * \sa SageMakerClient::updateModelPackage
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateModelPackageRequest::UpdateModelPackageRequest(const UpdateModelPackageRequest &other)
    : SageMakerRequest(new UpdateModelPackageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateModelPackageRequest object.
 */
UpdateModelPackageRequest::UpdateModelPackageRequest()
    : SageMakerRequest(new UpdateModelPackageRequestPrivate(SageMakerRequest::UpdateModelPackageAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateModelPackageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateModelPackageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateModelPackageRequest::response(QNetworkReply * const reply) const
{
    return new UpdateModelPackageResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::UpdateModelPackageRequestPrivate
 * \brief The UpdateModelPackageRequestPrivate class provides private implementation for UpdateModelPackageRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a UpdateModelPackageRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
UpdateModelPackageRequestPrivate::UpdateModelPackageRequestPrivate(
    const SageMakerRequest::Action action, UpdateModelPackageRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateModelPackageRequest
 * class' copy constructor.
 */
UpdateModelPackageRequestPrivate::UpdateModelPackageRequestPrivate(
    const UpdateModelPackageRequestPrivate &other, UpdateModelPackageRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
