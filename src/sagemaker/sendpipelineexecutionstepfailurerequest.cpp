// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sendpipelineexecutionstepfailurerequest.h"
#include "sendpipelineexecutionstepfailurerequest_p.h"
#include "sendpipelineexecutionstepfailureresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::SendPipelineExecutionStepFailureRequest
 * \brief The SendPipelineExecutionStepFailureRequest class provides an interface for SageMaker SendPipelineExecutionStepFailure requests.
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
 * \sa SageMakerClient::sendPipelineExecutionStepFailure
 */

/*!
 * Constructs a copy of \a other.
 */
SendPipelineExecutionStepFailureRequest::SendPipelineExecutionStepFailureRequest(const SendPipelineExecutionStepFailureRequest &other)
    : SageMakerRequest(new SendPipelineExecutionStepFailureRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SendPipelineExecutionStepFailureRequest object.
 */
SendPipelineExecutionStepFailureRequest::SendPipelineExecutionStepFailureRequest()
    : SageMakerRequest(new SendPipelineExecutionStepFailureRequestPrivate(SageMakerRequest::SendPipelineExecutionStepFailureAction, this))
{

}

/*!
 * \reimp
 */
bool SendPipelineExecutionStepFailureRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SendPipelineExecutionStepFailureResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SendPipelineExecutionStepFailureRequest::response(QNetworkReply * const reply) const
{
    return new SendPipelineExecutionStepFailureResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::SendPipelineExecutionStepFailureRequestPrivate
 * \brief The SendPipelineExecutionStepFailureRequestPrivate class provides private implementation for SendPipelineExecutionStepFailureRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a SendPipelineExecutionStepFailureRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
SendPipelineExecutionStepFailureRequestPrivate::SendPipelineExecutionStepFailureRequestPrivate(
    const SageMakerRequest::Action action, SendPipelineExecutionStepFailureRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SendPipelineExecutionStepFailureRequest
 * class' copy constructor.
 */
SendPipelineExecutionStepFailureRequestPrivate::SendPipelineExecutionStepFailureRequestPrivate(
    const SendPipelineExecutionStepFailureRequestPrivate &other, SendPipelineExecutionStepFailureRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
