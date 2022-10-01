// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatepipelineexecutionrequest.h"
#include "updatepipelineexecutionrequest_p.h"
#include "updatepipelineexecutionresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::UpdatePipelineExecutionRequest
 * \brief The UpdatePipelineExecutionRequest class provides an interface for SageMaker UpdatePipelineExecution requests.
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
 * \sa SageMakerClient::updatePipelineExecution
 */

/*!
 * Constructs a copy of \a other.
 */
UpdatePipelineExecutionRequest::UpdatePipelineExecutionRequest(const UpdatePipelineExecutionRequest &other)
    : SageMakerRequest(new UpdatePipelineExecutionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdatePipelineExecutionRequest object.
 */
UpdatePipelineExecutionRequest::UpdatePipelineExecutionRequest()
    : SageMakerRequest(new UpdatePipelineExecutionRequestPrivate(SageMakerRequest::UpdatePipelineExecutionAction, this))
{

}

/*!
 * \reimp
 */
bool UpdatePipelineExecutionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdatePipelineExecutionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdatePipelineExecutionRequest::response(QNetworkReply * const reply) const
{
    return new UpdatePipelineExecutionResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::UpdatePipelineExecutionRequestPrivate
 * \brief The UpdatePipelineExecutionRequestPrivate class provides private implementation for UpdatePipelineExecutionRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a UpdatePipelineExecutionRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
UpdatePipelineExecutionRequestPrivate::UpdatePipelineExecutionRequestPrivate(
    const SageMakerRequest::Action action, UpdatePipelineExecutionRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdatePipelineExecutionRequest
 * class' copy constructor.
 */
UpdatePipelineExecutionRequestPrivate::UpdatePipelineExecutionRequestPrivate(
    const UpdatePipelineExecutionRequestPrivate &other, UpdatePipelineExecutionRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
