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

#include "deletefleetrequest.h"
#include "deletefleetrequest_p.h"
#include "deletefleetresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::DeleteFleetRequest
 * \brief The DeleteFleetRequest class provides an interface for RoboMaker DeleteFleet requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  his section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::deleteFleet
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteFleetRequest::DeleteFleetRequest(const DeleteFleetRequest &other)
    : RoboMakerRequest(new DeleteFleetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteFleetRequest object.
 */
DeleteFleetRequest::DeleteFleetRequest()
    : RoboMakerRequest(new DeleteFleetRequestPrivate(RoboMakerRequest::DeleteFleetAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteFleetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteFleetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteFleetRequest::response(QNetworkReply * const reply) const
{
    return new DeleteFleetResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::DeleteFleetRequestPrivate
 * \brief The DeleteFleetRequestPrivate class provides private implementation for DeleteFleetRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a DeleteFleetRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
DeleteFleetRequestPrivate::DeleteFleetRequestPrivate(
    const RoboMakerRequest::Action action, DeleteFleetRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteFleetRequest
 * class' copy constructor.
 */
DeleteFleetRequestPrivate::DeleteFleetRequestPrivate(
    const DeleteFleetRequestPrivate &other, DeleteFleetRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
