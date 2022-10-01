// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletepipelinerequest.h"
#include "deletepipelinerequest_p.h"
#include "deletepipelineresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeletePipelineRequest
 * \brief The DeletePipelineRequest class provides an interface for SageMaker DeletePipeline requests.
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
 * \sa SageMakerClient::deletePipeline
 */

/*!
 * Constructs a copy of \a other.
 */
DeletePipelineRequest::DeletePipelineRequest(const DeletePipelineRequest &other)
    : SageMakerRequest(new DeletePipelineRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeletePipelineRequest object.
 */
DeletePipelineRequest::DeletePipelineRequest()
    : SageMakerRequest(new DeletePipelineRequestPrivate(SageMakerRequest::DeletePipelineAction, this))
{

}

/*!
 * \reimp
 */
bool DeletePipelineRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeletePipelineResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeletePipelineRequest::response(QNetworkReply * const reply) const
{
    return new DeletePipelineResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DeletePipelineRequestPrivate
 * \brief The DeletePipelineRequestPrivate class provides private implementation for DeletePipelineRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeletePipelineRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DeletePipelineRequestPrivate::DeletePipelineRequestPrivate(
    const SageMakerRequest::Action action, DeletePipelineRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeletePipelineRequest
 * class' copy constructor.
 */
DeletePipelineRequestPrivate::DeletePipelineRequestPrivate(
    const DeletePipelineRequestPrivate &other, DeletePipelineRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
