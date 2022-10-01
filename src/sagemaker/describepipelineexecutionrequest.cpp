// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
