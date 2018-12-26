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

#include "listrobotsrequest.h"
#include "listrobotsrequest_p.h"
#include "listrobotsresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::ListRobotsRequest
 * \brief The ListRobotsRequest class provides an interface for RoboMaker ListRobots requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  his section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::listRobots
 */

/*!
 * Constructs a copy of \a other.
 */
ListRobotsRequest::ListRobotsRequest(const ListRobotsRequest &other)
    : RoboMakerRequest(new ListRobotsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListRobotsRequest object.
 */
ListRobotsRequest::ListRobotsRequest()
    : RoboMakerRequest(new ListRobotsRequestPrivate(RoboMakerRequest::ListRobotsAction, this))
{

}

/*!
 * \reimp
 */
bool ListRobotsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListRobotsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListRobotsRequest::response(QNetworkReply * const reply) const
{
    return new ListRobotsResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::ListRobotsRequestPrivate
 * \brief The ListRobotsRequestPrivate class provides private implementation for ListRobotsRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a ListRobotsRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
ListRobotsRequestPrivate::ListRobotsRequestPrivate(
    const RoboMakerRequest::Action action, ListRobotsRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListRobotsRequest
 * class' copy constructor.
 */
ListRobotsRequestPrivate::ListRobotsRequestPrivate(
    const ListRobotsRequestPrivate &other, ListRobotsRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
