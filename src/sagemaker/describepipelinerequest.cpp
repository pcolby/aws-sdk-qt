// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describepipelinerequest.h"
#include "describepipelinerequest_p.h"
#include "describepipelineresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DescribePipelineRequest
 * \brief The DescribePipelineRequest class provides an interface for SageMaker DescribePipeline requests.
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
 * \sa SageMakerClient::describePipeline
 */

/*!
 * Constructs a copy of \a other.
 */
DescribePipelineRequest::DescribePipelineRequest(const DescribePipelineRequest &other)
    : SageMakerRequest(new DescribePipelineRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribePipelineRequest object.
 */
DescribePipelineRequest::DescribePipelineRequest()
    : SageMakerRequest(new DescribePipelineRequestPrivate(SageMakerRequest::DescribePipelineAction, this))
{

}

/*!
 * \reimp
 */
bool DescribePipelineRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribePipelineResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribePipelineRequest::response(QNetworkReply * const reply) const
{
    return new DescribePipelineResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DescribePipelineRequestPrivate
 * \brief The DescribePipelineRequestPrivate class provides private implementation for DescribePipelineRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DescribePipelineRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DescribePipelineRequestPrivate::DescribePipelineRequestPrivate(
    const SageMakerRequest::Action action, DescribePipelineRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribePipelineRequest
 * class' copy constructor.
 */
DescribePipelineRequestPrivate::DescribePipelineRequestPrivate(
    const DescribePipelineRequestPrivate &other, DescribePipelineRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
