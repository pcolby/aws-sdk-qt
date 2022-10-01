/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "retrypipelineexecutionrequest.h"
#include "retrypipelineexecutionrequest_p.h"
#include "retrypipelineexecutionresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::RetryPipelineExecutionRequest
 * \brief The RetryPipelineExecutionRequest class provides an interface for SageMaker RetryPipelineExecution requests.
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
 * \sa SageMakerClient::retryPipelineExecution
 */

/*!
 * Constructs a copy of \a other.
 */
RetryPipelineExecutionRequest::RetryPipelineExecutionRequest(const RetryPipelineExecutionRequest &other)
    : SageMakerRequest(new RetryPipelineExecutionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RetryPipelineExecutionRequest object.
 */
RetryPipelineExecutionRequest::RetryPipelineExecutionRequest()
    : SageMakerRequest(new RetryPipelineExecutionRequestPrivate(SageMakerRequest::RetryPipelineExecutionAction, this))
{

}

/*!
 * \reimp
 */
bool RetryPipelineExecutionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RetryPipelineExecutionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RetryPipelineExecutionRequest::response(QNetworkReply * const reply) const
{
    return new RetryPipelineExecutionResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::RetryPipelineExecutionRequestPrivate
 * \brief The RetryPipelineExecutionRequestPrivate class provides private implementation for RetryPipelineExecutionRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a RetryPipelineExecutionRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
RetryPipelineExecutionRequestPrivate::RetryPipelineExecutionRequestPrivate(
    const SageMakerRequest::Action action, RetryPipelineExecutionRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RetryPipelineExecutionRequest
 * class' copy constructor.
 */
RetryPipelineExecutionRequestPrivate::RetryPipelineExecutionRequestPrivate(
    const RetryPipelineExecutionRequestPrivate &other, RetryPipelineExecutionRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
