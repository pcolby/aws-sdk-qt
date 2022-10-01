// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createmodelpackagerequest.h"
#include "createmodelpackagerequest_p.h"
#include "createmodelpackageresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateModelPackageRequest
 * \brief The CreateModelPackageRequest class provides an interface for SageMaker CreateModelPackage requests.
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
 * \sa SageMakerClient::createModelPackage
 */

/*!
 * Constructs a copy of \a other.
 */
CreateModelPackageRequest::CreateModelPackageRequest(const CreateModelPackageRequest &other)
    : SageMakerRequest(new CreateModelPackageRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateModelPackageRequest object.
 */
CreateModelPackageRequest::CreateModelPackageRequest()
    : SageMakerRequest(new CreateModelPackageRequestPrivate(SageMakerRequest::CreateModelPackageAction, this))
{

}

/*!
 * \reimp
 */
bool CreateModelPackageRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateModelPackageResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateModelPackageRequest::response(QNetworkReply * const reply) const
{
    return new CreateModelPackageResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::CreateModelPackageRequestPrivate
 * \brief The CreateModelPackageRequestPrivate class provides private implementation for CreateModelPackageRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateModelPackageRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
CreateModelPackageRequestPrivate::CreateModelPackageRequestPrivate(
    const SageMakerRequest::Action action, CreateModelPackageRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateModelPackageRequest
 * class' copy constructor.
 */
CreateModelPackageRequestPrivate::CreateModelPackageRequestPrivate(
    const CreateModelPackageRequestPrivate &other, CreateModelPackageRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
