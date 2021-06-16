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

#include "describepipelineexecutionrequest.h"
#include "describepipelineexecutionrequest_p.h"
#include "describepipelineexecutionresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribePipelineExecutionRequest
 * \brief The DescribePipelineExecutionRequest class provides an interface for SageMaker DescribePipelineExecution requests.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">Amazon SageMaker Developer
 *  Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/augmented-ai/2019-11-07/APIReference/Welcome.html">Amazon Augmented AI Runtime API
 *  Reference</a>
 *
 * \sa SageMakerClient::describePipelineExecution
 */

/*!
 * Constructs a copy of \a other.
 */
DescribePipelineExecutionRequest::DescribePipelineExecutionRequest(const DescribePipelineExecutionRequest &other)
    : SageMakerRequest(new DescribePipelineExecutionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribePipelineExecutionRequest object.
 */
DescribePipelineExecutionRequest::DescribePipelineExecutionRequest()
    : SageMakerRequest(new DescribePipelineExecutionRequestPrivate(SageMakerRequest::DescribePipelineExecutionAction, this))
{

}

/*!
 * \reimp
 */
bool DescribePipelineExecutionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribePipelineExecutionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribePipelineExecutionRequest::response(QNetworkReply * const reply) const
{
    return new DescribePipelineExecutionResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DescribePipelineExecutionRequestPrivate
 * \brief The DescribePipelineExecutionRequestPrivate class provides private implementation for DescribePipelineExecutionRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribePipelineExecutionRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DescribePipelineExecutionRequestPrivate::DescribePipelineExecutionRequestPrivate(
    const SageMakerRequest::Action action, DescribePipelineExecutionRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribePipelineExecutionRequest
 * class' copy constructor.
 */
DescribePipelineExecutionRequestPrivate::DescribePipelineExecutionRequestPrivate(
    const DescribePipelineExecutionRequestPrivate &other, DescribePipelineExecutionRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
