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

#include "updateworkteamrequest.h"
#include "updateworkteamrequest_p.h"
#include "updateworkteamresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::UpdateWorkteamRequest
 * \brief The UpdateWorkteamRequest class provides an interface for SageMaker UpdateWorkteam requests.
 *
 * \inmodule QtAwsSageMaker
 *
 *  Provides APIs for creating and managing Amazon SageMaker
 *
 * \sa SageMakerClient::updateWorkteam
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateWorkteamRequest::UpdateWorkteamRequest(const UpdateWorkteamRequest &other)
    : SageMakerRequest(new UpdateWorkteamRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateWorkteamRequest object.
 */
UpdateWorkteamRequest::UpdateWorkteamRequest()
    : SageMakerRequest(new UpdateWorkteamRequestPrivate(SageMakerRequest::UpdateWorkteamAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateWorkteamRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateWorkteamResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateWorkteamRequest::response(QNetworkReply * const reply) const
{
    return new UpdateWorkteamResponse(*this, reply);
}

/*!
 * \class QtAws::SageMaker::UpdateWorkteamRequestPrivate
 * \brief The UpdateWorkteamRequestPrivate class provides private implementation for UpdateWorkteamRequest.
 * \internal
 *
 * \inmodule QtAwsSageMaker
 */

/*!
 * Constructs a UpdateWorkteamRequestPrivate object for SageMaker \a action,
 * with public implementation \a q.
 */
UpdateWorkteamRequestPrivate::UpdateWorkteamRequestPrivate(
    const SageMakerRequest::Action action, UpdateWorkteamRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateWorkteamRequest
 * class' copy constructor.
 */
UpdateWorkteamRequestPrivate::UpdateWorkteamRequestPrivate(
    const UpdateWorkteamRequestPrivate &other, UpdateWorkteamRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
