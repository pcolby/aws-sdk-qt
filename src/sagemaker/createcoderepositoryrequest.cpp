/*
    Copyright 2013-2020 Paul Colby

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

#include "createcoderepositoryrequest.h"
#include "createcoderepositoryrequest_p.h"
#include "createcoderepositoryresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateCodeRepositoryRequest
 * \brief The CreateCodeRepositoryRequest class provides an interface for SageMaker CreateCodeRepository requests.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker
 *
 * \sa SageMakerClient::createCodeRepository
 */

/*!
 * Constructs a copy of \a other.
 */
CreateCodeRepositoryRequest::CreateCodeRepositoryRequest(const CreateCodeRepositoryRequest &other)
    : SageMakerRequest(new CreateCodeRepositoryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateCodeRepositoryRequest object.
 */
CreateCodeRepositoryRequest::CreateCodeRepositoryRequest()
    : SageMakerRequest(new CreateCodeRepositoryRequestPrivate(SageMakerRequest::CreateCodeRepositoryAction, this))
{

}

/*!
 * \reimp
 */
bool CreateCodeRepositoryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateCodeRepositoryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateCodeRepositoryRequest::response(QNetworkReply * const reply) const
{
    return new CreateCodeRepositoryResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::CreateCodeRepositoryRequestPrivate
 * \brief The CreateCodeRepositoryRequestPrivate class provides private implementation for CreateCodeRepositoryRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateCodeRepositoryRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
CreateCodeRepositoryRequestPrivate::CreateCodeRepositoryRequestPrivate(
    const SageMakerRequest::Action action, CreateCodeRepositoryRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateCodeRepositoryRequest
 * class' copy constructor.
 */
CreateCodeRepositoryRequestPrivate::CreateCodeRepositoryRequestPrivate(
    const CreateCodeRepositoryRequestPrivate &other, CreateCodeRepositoryRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
