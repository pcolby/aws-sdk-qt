// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createprocessingjobrequest.h"
#include "createprocessingjobrequest_p.h"
#include "createprocessingjobresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateProcessingJobRequest
 * \brief The CreateProcessingJobRequest class provides an interface for SageMaker CreateProcessingJob requests.
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
 * \sa SageMakerClient::createProcessingJob
 */

/*!
 * Constructs a copy of \a other.
 */
CreateProcessingJobRequest::CreateProcessingJobRequest(const CreateProcessingJobRequest &other)
    : SageMakerRequest(new CreateProcessingJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateProcessingJobRequest object.
 */
CreateProcessingJobRequest::CreateProcessingJobRequest()
    : SageMakerRequest(new CreateProcessingJobRequestPrivate(SageMakerRequest::CreateProcessingJobAction, this))
{

}

/*!
 * \reimp
 */
bool CreateProcessingJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateProcessingJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateProcessingJobRequest::response(QNetworkReply * const reply) const
{
    return new CreateProcessingJobResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::CreateProcessingJobRequestPrivate
 * \brief The CreateProcessingJobRequestPrivate class provides private implementation for CreateProcessingJobRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateProcessingJobRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
CreateProcessingJobRequestPrivate::CreateProcessingJobRequestPrivate(
    const SageMakerRequest::Action action, CreateProcessingJobRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateProcessingJobRequest
 * class' copy constructor.
 */
CreateProcessingJobRequestPrivate::CreateProcessingJobRequestPrivate(
    const CreateProcessingJobRequestPrivate &other, CreateProcessingJobRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
