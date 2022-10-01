// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatepipelinerequest.h"
#include "updatepipelinerequest_p.h"
#include "updatepipelineresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::UpdatePipelineRequest
 * \brief The UpdatePipelineRequest class provides an interface for SageMaker UpdatePipeline requests.
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
 * \sa SageMakerClient::updatePipeline
 */

/*!
 * Constructs a copy of \a other.
 */
UpdatePipelineRequest::UpdatePipelineRequest(const UpdatePipelineRequest &other)
    : SageMakerRequest(new UpdatePipelineRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdatePipelineRequest object.
 */
UpdatePipelineRequest::UpdatePipelineRequest()
    : SageMakerRequest(new UpdatePipelineRequestPrivate(SageMakerRequest::UpdatePipelineAction, this))
{

}

/*!
 * \reimp
 */
bool UpdatePipelineRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdatePipelineResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdatePipelineRequest::response(QNetworkReply * const reply) const
{
    return new UpdatePipelineResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::UpdatePipelineRequestPrivate
 * \brief The UpdatePipelineRequestPrivate class provides private implementation for UpdatePipelineRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a UpdatePipelineRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
UpdatePipelineRequestPrivate::UpdatePipelineRequestPrivate(
    const SageMakerRequest::Action action, UpdatePipelineRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdatePipelineRequest
 * class' copy constructor.
 */
UpdatePipelineRequestPrivate::UpdatePipelineRequestPrivate(
    const UpdatePipelineRequestPrivate &other, UpdatePipelineRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
