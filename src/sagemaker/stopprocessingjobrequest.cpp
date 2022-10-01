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

#include "stopprocessingjobrequest.h"
#include "stopprocessingjobrequest_p.h"
#include "stopprocessingjobresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::StopProcessingJobRequest
 * \brief The StopProcessingJobRequest class provides an interface for SageMaker StopProcessingJob requests.
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
 * \sa SageMakerClient::stopProcessingJob
 */

/*!
 * Constructs a copy of \a other.
 */
StopProcessingJobRequest::StopProcessingJobRequest(const StopProcessingJobRequest &other)
    : SageMakerRequest(new StopProcessingJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopProcessingJobRequest object.
 */
StopProcessingJobRequest::StopProcessingJobRequest()
    : SageMakerRequest(new StopProcessingJobRequestPrivate(SageMakerRequest::StopProcessingJobAction, this))
{

}

/*!
 * \reimp
 */
bool StopProcessingJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopProcessingJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopProcessingJobRequest::response(QNetworkReply * const reply) const
{
    return new StopProcessingJobResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::StopProcessingJobRequestPrivate
 * \brief The StopProcessingJobRequestPrivate class provides private implementation for StopProcessingJobRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a StopProcessingJobRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
StopProcessingJobRequestPrivate::StopProcessingJobRequestPrivate(
    const SageMakerRequest::Action action, StopProcessingJobRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopProcessingJobRequest
 * class' copy constructor.
 */
StopProcessingJobRequestPrivate::StopProcessingJobRequestPrivate(
    const StopProcessingJobRequestPrivate &other, StopProcessingJobRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
