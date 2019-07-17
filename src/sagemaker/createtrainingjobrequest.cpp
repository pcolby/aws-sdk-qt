/*
    Copyright 2013-2019 Paul Colby

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

#include "createtrainingjobrequest.h"
#include "createtrainingjobrequest_p.h"
#include "createtrainingjobresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateTrainingJobRequest
 * \brief The CreateTrainingJobRequest class provides an interface for SageMaker CreateTrainingJob requests.
 *
 * \inmodule QtAwsSageMaker
 *
 *
 * \sa SageMakerClient::createTrainingJob
 */

/*!
 * Constructs a copy of \a other.
 */
CreateTrainingJobRequest::CreateTrainingJobRequest(const CreateTrainingJobRequest &other)
    : SageMakerRequest(new CreateTrainingJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateTrainingJobRequest object.
 */
CreateTrainingJobRequest::CreateTrainingJobRequest()
    : SageMakerRequest(new CreateTrainingJobRequestPrivate(SageMakerRequest::CreateTrainingJobAction, this))
{

}

/*!
 * \reimp
 */
bool CreateTrainingJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateTrainingJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateTrainingJobRequest::response(QNetworkReply * const reply) const
{
    return new CreateTrainingJobResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::CreateTrainingJobRequestPrivate
 * \brief The CreateTrainingJobRequestPrivate class provides private implementation for CreateTrainingJobRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateTrainingJobRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
CreateTrainingJobRequestPrivate::CreateTrainingJobRequestPrivate(
    const SageMakerRequest::Action action, CreateTrainingJobRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateTrainingJobRequest
 * class' copy constructor.
 */
CreateTrainingJobRequestPrivate::CreateTrainingJobRequestPrivate(
    const CreateTrainingJobRequestPrivate &other, CreateTrainingJobRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
