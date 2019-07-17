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

#include "updatecoderepositoryrequest.h"
#include "updatecoderepositoryrequest_p.h"
#include "updatecoderepositoryresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::UpdateCodeRepositoryRequest
 * \brief The UpdateCodeRepositoryRequest class provides an interface for SageMaker UpdateCodeRepository requests.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker
 *
 * \sa SageMakerClient::updateCodeRepository
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateCodeRepositoryRequest::UpdateCodeRepositoryRequest(const UpdateCodeRepositoryRequest &other)
    : SageMakerRequest(new UpdateCodeRepositoryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateCodeRepositoryRequest object.
 */
UpdateCodeRepositoryRequest::UpdateCodeRepositoryRequest()
    : SageMakerRequest(new UpdateCodeRepositoryRequestPrivate(SageMakerRequest::UpdateCodeRepositoryAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateCodeRepositoryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateCodeRepositoryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateCodeRepositoryRequest::response(QNetworkReply * const reply) const
{
    return new UpdateCodeRepositoryResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::UpdateCodeRepositoryRequestPrivate
 * \brief The UpdateCodeRepositoryRequestPrivate class provides private implementation for UpdateCodeRepositoryRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a UpdateCodeRepositoryRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
UpdateCodeRepositoryRequestPrivate::UpdateCodeRepositoryRequestPrivate(
    const SageMakerRequest::Action action, UpdateCodeRepositoryRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateCodeRepositoryRequest
 * class' copy constructor.
 */
UpdateCodeRepositoryRequestPrivate::UpdateCodeRepositoryRequestPrivate(
    const UpdateCodeRepositoryRequestPrivate &other, UpdateCodeRepositoryRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
