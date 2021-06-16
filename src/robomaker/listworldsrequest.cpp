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

#include "listworldsrequest.h"
#include "listworldsrequest_p.h"
#include "listworldsresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::ListWorldsRequest
 * \brief The ListWorldsRequest class provides an interface for RoboMaker ListWorlds requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::listWorlds
 */

/*!
 * Constructs a copy of \a other.
 */
ListWorldsRequest::ListWorldsRequest(const ListWorldsRequest &other)
    : RoboMakerRequest(new ListWorldsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListWorldsRequest object.
 */
ListWorldsRequest::ListWorldsRequest()
    : RoboMakerRequest(new ListWorldsRequestPrivate(RoboMakerRequest::ListWorldsAction, this))
{

}

/*!
 * \reimp
 */
bool ListWorldsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListWorldsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListWorldsRequest::response(QNetworkReply * const reply) const
{
    return new ListWorldsResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::ListWorldsRequestPrivate
 * \brief The ListWorldsRequestPrivate class provides private implementation for ListWorldsRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a ListWorldsRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
ListWorldsRequestPrivate::ListWorldsRequestPrivate(
    const RoboMakerRequest::Action action, ListWorldsRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListWorldsRequest
 * class' copy constructor.
 */
ListWorldsRequestPrivate::ListWorldsRequestPrivate(
    const ListWorldsRequestPrivate &other, ListWorldsRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
