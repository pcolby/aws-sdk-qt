// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateexperimentrequest.h"
#include "updateexperimentrequest_p.h"
#include "updateexperimentresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::UpdateExperimentRequest
 * \brief The UpdateExperimentRequest class provides an interface for SageMaker UpdateExperiment requests.
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
 * \sa SageMakerClient::updateExperiment
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateExperimentRequest::UpdateExperimentRequest(const UpdateExperimentRequest &other)
    : SageMakerRequest(new UpdateExperimentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateExperimentRequest object.
 */
UpdateExperimentRequest::UpdateExperimentRequest()
    : SageMakerRequest(new UpdateExperimentRequestPrivate(SageMakerRequest::UpdateExperimentAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateExperimentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateExperimentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateExperimentRequest::response(QNetworkReply * const reply) const
{
    return new UpdateExperimentResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::UpdateExperimentRequestPrivate
 * \brief The UpdateExperimentRequestPrivate class provides private implementation for UpdateExperimentRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a UpdateExperimentRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
UpdateExperimentRequestPrivate::UpdateExperimentRequestPrivate(
    const SageMakerRequest::Action action, UpdateExperimentRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateExperimentRequest
 * class' copy constructor.
 */
UpdateExperimentRequestPrivate::UpdateExperimentRequestPrivate(
    const UpdateExperimentRequestPrivate &other, UpdateExperimentRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
