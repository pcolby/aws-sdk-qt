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

#include "createworkteamrequest.h"
#include "createworkteamrequest_p.h"
#include "createworkteamresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::CreateWorkteamRequest
 * \brief The CreateWorkteamRequest class provides an interface for SageMaker CreateWorkteam requests.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker
 *
 * \sa SageMakerClient::createWorkteam
 */

/*!
 * Constructs a copy of \a other.
 */
CreateWorkteamRequest::CreateWorkteamRequest(const CreateWorkteamRequest &other)
    : SageMakerRequest(new CreateWorkteamRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateWorkteamRequest object.
 */
CreateWorkteamRequest::CreateWorkteamRequest()
    : SageMakerRequest(new CreateWorkteamRequestPrivate(SageMakerRequest::CreateWorkteamAction, this))
{

}

/*!
 * \reimp
 */
bool CreateWorkteamRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateWorkteamResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateWorkteamRequest::response(QNetworkReply * const reply) const
{
    return new CreateWorkteamResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::CreateWorkteamRequestPrivate
 * \brief The CreateWorkteamRequestPrivate class provides private implementation for CreateWorkteamRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a CreateWorkteamRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
CreateWorkteamRequestPrivate::CreateWorkteamRequestPrivate(
    const SageMakerRequest::Action action, CreateWorkteamRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateWorkteamRequest
 * class' copy constructor.
 */
CreateWorkteamRequestPrivate::CreateWorkteamRequestPrivate(
    const CreateWorkteamRequestPrivate &other, CreateWorkteamRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
