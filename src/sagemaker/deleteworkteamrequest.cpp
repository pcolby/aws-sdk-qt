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

#include "deleteworkteamrequest.h"
#include "deleteworkteamrequest_p.h"
#include "deleteworkteamresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::DeleteWorkteamRequest
 * \brief The DeleteWorkteamRequest class provides an interface for SageMaker DeleteWorkteam requests.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker
 *
 * \sa SageMakerClient::deleteWorkteam
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteWorkteamRequest::DeleteWorkteamRequest(const DeleteWorkteamRequest &other)
    : SageMakerRequest(new DeleteWorkteamRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteWorkteamRequest object.
 */
DeleteWorkteamRequest::DeleteWorkteamRequest()
    : SageMakerRequest(new DeleteWorkteamRequestPrivate(SageMakerRequest::DeleteWorkteamAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteWorkteamRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteWorkteamResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteWorkteamRequest::response(QNetworkReply * const reply) const
{
    return new DeleteWorkteamResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::DeleteWorkteamRequestPrivate
 * \brief The DeleteWorkteamRequestPrivate class provides private implementation for DeleteWorkteamRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a DeleteWorkteamRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
DeleteWorkteamRequestPrivate::DeleteWorkteamRequestPrivate(
    const SageMakerRequest::Action action, DeleteWorkteamRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteWorkteamRequest
 * class' copy constructor.
 */
DeleteWorkteamRequestPrivate::DeleteWorkteamRequestPrivate(
    const DeleteWorkteamRequestPrivate &other, DeleteWorkteamRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
