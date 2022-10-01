// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createartifactrequest.h"
#include "createartifactrequest_p.h"
#include "createartifactresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateArtifactRequest
 * \brief The CreateArtifactRequest class provides an interface for SageMaker CreateArtifact requests.
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
 * \sa SageMakerClient::createArtifact
 */

/*!
 * Constructs a copy of \a other.
 */
CreateArtifactRequest::CreateArtifactRequest(const CreateArtifactRequest &other)
    : SageMakerRequest(new CreateArtifactRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateArtifactRequest object.
 */
CreateArtifactRequest::CreateArtifactRequest()
    : SageMakerRequest(new CreateArtifactRequestPrivate(SageMakerRequest::CreateArtifactAction, this))
{

}

/*!
 * \reimp
 */
bool CreateArtifactRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateArtifactResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateArtifactRequest::response(QNetworkReply * const reply) const
{
    return new CreateArtifactResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::CreateArtifactRequestPrivate
 * \brief The CreateArtifactRequestPrivate class provides private implementation for CreateArtifactRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateArtifactRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
CreateArtifactRequestPrivate::CreateArtifactRequestPrivate(
    const SageMakerRequest::Action action, CreateArtifactRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateArtifactRequest
 * class' copy constructor.
 */
CreateArtifactRequestPrivate::CreateArtifactRequestPrivate(
    const CreateArtifactRequestPrivate &other, CreateArtifactRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
