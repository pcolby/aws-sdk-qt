// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatetrainingjobrequest.h"
#include "updatetrainingjobrequest_p.h"
#include "updatetrainingjobresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::UpdateTrainingJobRequest
 * \brief The UpdateTrainingJobRequest class provides an interface for SageMaker UpdateTrainingJob requests.
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
 * \sa SageMakerClient::updateTrainingJob
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateTrainingJobRequest::UpdateTrainingJobRequest(const UpdateTrainingJobRequest &other)
    : SageMakerRequest(new UpdateTrainingJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateTrainingJobRequest object.
 */
UpdateTrainingJobRequest::UpdateTrainingJobRequest()
    : SageMakerRequest(new UpdateTrainingJobRequestPrivate(SageMakerRequest::UpdateTrainingJobAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateTrainingJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateTrainingJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateTrainingJobRequest::response(QNetworkReply * const reply) const
{
    return new UpdateTrainingJobResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::UpdateTrainingJobRequestPrivate
 * \brief The UpdateTrainingJobRequestPrivate class provides private implementation for UpdateTrainingJobRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a UpdateTrainingJobRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
UpdateTrainingJobRequestPrivate::UpdateTrainingJobRequestPrivate(
    const SageMakerRequest::Action action, UpdateTrainingJobRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateTrainingJobRequest
 * class' copy constructor.
 */
UpdateTrainingJobRequestPrivate::UpdateTrainingJobRequestPrivate(
    const UpdateTrainingJobRequestPrivate &other, UpdateTrainingJobRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
