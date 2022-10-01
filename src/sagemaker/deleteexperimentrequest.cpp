// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteexperimentrequest.h"
#include "deleteexperimentrequest_p.h"
#include "deleteexperimentresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteExperimentRequest
 * \brief The DeleteExperimentRequest class provides an interface for SageMaker DeleteExperiment requests.
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
 * \sa SageMakerClient::deleteExperiment
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteExperimentRequest::DeleteExperimentRequest(const DeleteExperimentRequest &other)
    : SageMakerRequest(new DeleteExperimentRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteExperimentRequest object.
 */
DeleteExperimentRequest::DeleteExperimentRequest()
    : SageMakerRequest(new DeleteExperimentRequestPrivate(SageMakerRequest::DeleteExperimentAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteExperimentRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteExperimentResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteExperimentRequest::response(QNetworkReply * const reply) const
{
    return new DeleteExperimentResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DeleteExperimentRequestPrivate
 * \brief The DeleteExperimentRequestPrivate class provides private implementation for DeleteExperimentRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteExperimentRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DeleteExperimentRequestPrivate::DeleteExperimentRequestPrivate(
    const SageMakerRequest::Action action, DeleteExperimentRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteExperimentRequest
 * class' copy constructor.
 */
DeleteExperimentRequestPrivate::DeleteExperimentRequestPrivate(
    const DeleteExperimentRequestPrivate &other, DeleteExperimentRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
