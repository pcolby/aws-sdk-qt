// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startpipelineexecutionrequest.h"
#include "startpipelineexecutionrequest_p.h"
#include "startpipelineexecutionresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::StartPipelineExecutionRequest
 * \brief The StartPipelineExecutionRequest class provides an interface for SageMaker StartPipelineExecution requests.
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
 * \sa SageMakerClient::startPipelineExecution
 */

/*!
 * Constructs a copy of \a other.
 */
StartPipelineExecutionRequest::StartPipelineExecutionRequest(const StartPipelineExecutionRequest &other)
    : SageMakerRequest(new StartPipelineExecutionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartPipelineExecutionRequest object.
 */
StartPipelineExecutionRequest::StartPipelineExecutionRequest()
    : SageMakerRequest(new StartPipelineExecutionRequestPrivate(SageMakerRequest::StartPipelineExecutionAction, this))
{

}

/*!
 * \reimp
 */
bool StartPipelineExecutionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartPipelineExecutionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartPipelineExecutionRequest::response(QNetworkReply * const reply) const
{
    return new StartPipelineExecutionResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::StartPipelineExecutionRequestPrivate
 * \brief The StartPipelineExecutionRequestPrivate class provides private implementation for StartPipelineExecutionRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a StartPipelineExecutionRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
StartPipelineExecutionRequestPrivate::StartPipelineExecutionRequestPrivate(
    const SageMakerRequest::Action action, StartPipelineExecutionRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartPipelineExecutionRequest
 * class' copy constructor.
 */
StartPipelineExecutionRequestPrivate::StartPipelineExecutionRequestPrivate(
    const StartPipelineExecutionRequestPrivate &other, StartPipelineExecutionRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
