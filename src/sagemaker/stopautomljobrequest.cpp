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

#include "stopautomljobrequest.h"
#include "stopautomljobrequest_p.h"
#include "stopautomljobresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::StopAutoMLJobRequest
 * \brief The StopAutoMLJobRequest class provides an interface for SageMaker StopAutoMLJob requests.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker resources.
 * 
 *  </p
 * 
 *  Other
 * 
 *  Resources> <ul> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/sagemaker/latest/dg/whatis.html#first-time-user">Amazon SageMaker Developer
 *  Guide</a>
 * 
 *  </p </li> <li>
 * 
 *  <a href="https://docs.aws.amazon.com/augmented-ai/2019-11-07/APIReference/Welcome.html">Amazon Augmented AI Runtime API
 *  Reference</a>
 *
 * \sa SageMakerClient::stopAutoMLJob
 */

/*!
 * Constructs a copy of \a other.
 */
StopAutoMLJobRequest::StopAutoMLJobRequest(const StopAutoMLJobRequest &other)
    : SageMakerRequest(new StopAutoMLJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopAutoMLJobRequest object.
 */
StopAutoMLJobRequest::StopAutoMLJobRequest()
    : SageMakerRequest(new StopAutoMLJobRequestPrivate(SageMakerRequest::StopAutoMLJobAction, this))
{

}

/*!
 * \reimp
 */
bool StopAutoMLJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopAutoMLJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopAutoMLJobRequest::response(QNetworkReply * const reply) const
{
    return new StopAutoMLJobResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::StopAutoMLJobRequestPrivate
 * \brief The StopAutoMLJobRequestPrivate class provides private implementation for StopAutoMLJobRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a StopAutoMLJobRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
StopAutoMLJobRequestPrivate::StopAutoMLJobRequestPrivate(
    const SageMakerRequest::Action action, StopAutoMLJobRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopAutoMLJobRequest
 * class' copy constructor.
 */
StopAutoMLJobRequestPrivate::StopAutoMLJobRequestPrivate(
    const StopAutoMLJobRequestPrivate &other, StopAutoMLJobRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
