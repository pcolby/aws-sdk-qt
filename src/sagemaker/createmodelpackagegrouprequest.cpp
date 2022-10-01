// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createmodelpackagegrouprequest.h"
#include "createmodelpackagegrouprequest_p.h"
#include "createmodelpackagegroupresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateModelPackageGroupRequest
 * \brief The CreateModelPackageGroupRequest class provides an interface for SageMaker CreateModelPackageGroup requests.
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
 * \sa SageMakerClient::createModelPackageGroup
 */

/*!
 * Constructs a copy of \a other.
 */
CreateModelPackageGroupRequest::CreateModelPackageGroupRequest(const CreateModelPackageGroupRequest &other)
    : SageMakerRequest(new CreateModelPackageGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateModelPackageGroupRequest object.
 */
CreateModelPackageGroupRequest::CreateModelPackageGroupRequest()
    : SageMakerRequest(new CreateModelPackageGroupRequestPrivate(SageMakerRequest::CreateModelPackageGroupAction, this))
{

}

/*!
 * \reimp
 */
bool CreateModelPackageGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateModelPackageGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateModelPackageGroupRequest::response(QNetworkReply * const reply) const
{
    return new CreateModelPackageGroupResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::CreateModelPackageGroupRequestPrivate
 * \brief The CreateModelPackageGroupRequestPrivate class provides private implementation for CreateModelPackageGroupRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateModelPackageGroupRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
CreateModelPackageGroupRequestPrivate::CreateModelPackageGroupRequestPrivate(
    const SageMakerRequest::Action action, CreateModelPackageGroupRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateModelPackageGroupRequest
 * class' copy constructor.
 */
CreateModelPackageGroupRequestPrivate::CreateModelPackageGroupRequestPrivate(
    const CreateModelPackageGroupRequestPrivate &other, CreateModelPackageGroupRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
