// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createfeaturegrouprequest.h"
#include "createfeaturegrouprequest_p.h"
#include "createfeaturegroupresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateFeatureGroupRequest
 * \brief The CreateFeatureGroupRequest class provides an interface for SageMaker CreateFeatureGroup requests.
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
 * \sa SageMakerClient::createFeatureGroup
 */

/*!
 * Constructs a copy of \a other.
 */
CreateFeatureGroupRequest::CreateFeatureGroupRequest(const CreateFeatureGroupRequest &other)
    : SageMakerRequest(new CreateFeatureGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateFeatureGroupRequest object.
 */
CreateFeatureGroupRequest::CreateFeatureGroupRequest()
    : SageMakerRequest(new CreateFeatureGroupRequestPrivate(SageMakerRequest::CreateFeatureGroupAction, this))
{

}

/*!
 * \reimp
 */
bool CreateFeatureGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateFeatureGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateFeatureGroupRequest::response(QNetworkReply * const reply) const
{
    return new CreateFeatureGroupResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::CreateFeatureGroupRequestPrivate
 * \brief The CreateFeatureGroupRequestPrivate class provides private implementation for CreateFeatureGroupRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateFeatureGroupRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
CreateFeatureGroupRequestPrivate::CreateFeatureGroupRequestPrivate(
    const SageMakerRequest::Action action, CreateFeatureGroupRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateFeatureGroupRequest
 * class' copy constructor.
 */
CreateFeatureGroupRequestPrivate::CreateFeatureGroupRequestPrivate(
    const CreateFeatureGroupRequestPrivate &other, CreateFeatureGroupRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
