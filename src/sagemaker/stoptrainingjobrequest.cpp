/*
    Copyright 2013-2018 Paul Colby

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

#include "stoptrainingjobrequest.h"
#include "stoptrainingjobrequest_p.h"
#include "stoptrainingjobresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::StopTrainingJobRequest
 * \brief The StopTrainingJobRequest class provides an interface for SageMaker StopTrainingJob requests.
 *
 * \inmodule QtAwsSageMaker
 *
 *
 * \sa SageMakerClient::stopTrainingJob
 */

/*!
 * Constructs a copy of \a other.
 */
StopTrainingJobRequest::StopTrainingJobRequest(const StopTrainingJobRequest &other)
    : SageMakerRequest(new StopTrainingJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopTrainingJobRequest object.
 */
StopTrainingJobRequest::StopTrainingJobRequest()
    : SageMakerRequest(new StopTrainingJobRequestPrivate(SageMakerRequest::StopTrainingJobAction, this))
{

}

/*!
 * \reimp
 */
bool StopTrainingJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopTrainingJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopTrainingJobRequest::response(QNetworkReply * const reply) const
{
    return new StopTrainingJobResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::StopTrainingJobRequestPrivate
 * \brief The StopTrainingJobRequestPrivate class provides private implementation for StopTrainingJobRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a StopTrainingJobRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
StopTrainingJobRequestPrivate::StopTrainingJobRequestPrivate(
    const SageMakerRequest::Action action, StopTrainingJobRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopTrainingJobRequest
 * class' copy constructor.
 */
StopTrainingJobRequestPrivate::StopTrainingJobRequestPrivate(
    const StopTrainingJobRequestPrivate &other, StopTrainingJobRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
