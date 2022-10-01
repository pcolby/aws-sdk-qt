// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describepipelinedefinitionforexecutionrequest.h"
#include "describepipelinedefinitionforexecutionrequest_p.h"
#include "describepipelinedefinitionforexecutionresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribePipelineDefinitionForExecutionRequest
 * \brief The DescribePipelineDefinitionForExecutionRequest class provides an interface for SageMaker DescribePipelineDefinitionForExecution requests.
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
 * \sa SageMakerClient::describePipelineDefinitionForExecution
 */

/*!
 * Constructs a copy of \a other.
 */
DescribePipelineDefinitionForExecutionRequest::DescribePipelineDefinitionForExecutionRequest(const DescribePipelineDefinitionForExecutionRequest &other)
    : SageMakerRequest(new DescribePipelineDefinitionForExecutionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribePipelineDefinitionForExecutionRequest object.
 */
DescribePipelineDefinitionForExecutionRequest::DescribePipelineDefinitionForExecutionRequest()
    : SageMakerRequest(new DescribePipelineDefinitionForExecutionRequestPrivate(SageMakerRequest::DescribePipelineDefinitionForExecutionAction, this))
{

}

/*!
 * \reimp
 */
bool DescribePipelineDefinitionForExecutionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribePipelineDefinitionForExecutionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribePipelineDefinitionForExecutionRequest::response(QNetworkReply * const reply) const
{
    return new DescribePipelineDefinitionForExecutionResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DescribePipelineDefinitionForExecutionRequestPrivate
 * \brief The DescribePipelineDefinitionForExecutionRequestPrivate class provides private implementation for DescribePipelineDefinitionForExecutionRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribePipelineDefinitionForExecutionRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DescribePipelineDefinitionForExecutionRequestPrivate::DescribePipelineDefinitionForExecutionRequestPrivate(
    const SageMakerRequest::Action action, DescribePipelineDefinitionForExecutionRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribePipelineDefinitionForExecutionRequest
 * class' copy constructor.
 */
DescribePipelineDefinitionForExecutionRequestPrivate::DescribePipelineDefinitionForExecutionRequestPrivate(
    const DescribePipelineDefinitionForExecutionRequestPrivate &other, DescribePipelineDefinitionForExecutionRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
