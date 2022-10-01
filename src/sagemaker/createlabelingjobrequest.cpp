// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createlabelingjobrequest.h"
#include "createlabelingjobrequest_p.h"
#include "createlabelingjobresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateLabelingJobRequest
 * \brief The CreateLabelingJobRequest class provides an interface for SageMaker CreateLabelingJob requests.
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
 * \sa SageMakerClient::createLabelingJob
 */

/*!
 * Constructs a copy of \a other.
 */
CreateLabelingJobRequest::CreateLabelingJobRequest(const CreateLabelingJobRequest &other)
    : SageMakerRequest(new CreateLabelingJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateLabelingJobRequest object.
 */
CreateLabelingJobRequest::CreateLabelingJobRequest()
    : SageMakerRequest(new CreateLabelingJobRequestPrivate(SageMakerRequest::CreateLabelingJobAction, this))
{

}

/*!
 * \reimp
 */
bool CreateLabelingJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateLabelingJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateLabelingJobRequest::response(QNetworkReply * const reply) const
{
    return new CreateLabelingJobResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::CreateLabelingJobRequestPrivate
 * \brief The CreateLabelingJobRequestPrivate class provides private implementation for CreateLabelingJobRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateLabelingJobRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
CreateLabelingJobRequestPrivate::CreateLabelingJobRequestPrivate(
    const SageMakerRequest::Action action, CreateLabelingJobRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateLabelingJobRequest
 * class' copy constructor.
 */
CreateLabelingJobRequestPrivate::CreateLabelingJobRequestPrivate(
    const CreateLabelingJobRequestPrivate &other, CreateLabelingJobRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
