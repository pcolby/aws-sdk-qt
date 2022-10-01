// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createpipelinerequest.h"
#include "createpipelinerequest_p.h"
#include "createpipelineresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreatePipelineRequest
 * \brief The CreatePipelineRequest class provides an interface for SageMaker CreatePipeline requests.
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
 * \sa SageMakerClient::createPipeline
 */

/*!
 * Constructs a copy of \a other.
 */
CreatePipelineRequest::CreatePipelineRequest(const CreatePipelineRequest &other)
    : SageMakerRequest(new CreatePipelineRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreatePipelineRequest object.
 */
CreatePipelineRequest::CreatePipelineRequest()
    : SageMakerRequest(new CreatePipelineRequestPrivate(SageMakerRequest::CreatePipelineAction, this))
{

}

/*!
 * \reimp
 */
bool CreatePipelineRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreatePipelineResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreatePipelineRequest::response(QNetworkReply * const reply) const
{
    return new CreatePipelineResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::CreatePipelineRequestPrivate
 * \brief The CreatePipelineRequestPrivate class provides private implementation for CreatePipelineRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreatePipelineRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
CreatePipelineRequestPrivate::CreatePipelineRequestPrivate(
    const SageMakerRequest::Action action, CreatePipelineRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreatePipelineRequest
 * class' copy constructor.
 */
CreatePipelineRequestPrivate::CreatePipelineRequestPrivate(
    const CreatePipelineRequestPrivate &other, CreatePipelineRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
