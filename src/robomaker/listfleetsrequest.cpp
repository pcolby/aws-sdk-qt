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

#include "listfleetsrequest.h"
#include "listfleetsrequest_p.h"
#include "listfleetsresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::ListFleetsRequest
 * \brief The ListFleetsRequest class provides an interface for RoboMaker ListFleets requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  his section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::listFleets
 */

/*!
 * Constructs a copy of \a other.
 */
ListFleetsRequest::ListFleetsRequest(const ListFleetsRequest &other)
    : RoboMakerRequest(new ListFleetsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListFleetsRequest object.
 */
ListFleetsRequest::ListFleetsRequest()
    : RoboMakerRequest(new ListFleetsRequestPrivate(RoboMakerRequest::ListFleetsAction, this))
{

}

/*!
 * \reimp
 */
bool ListFleetsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListFleetsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListFleetsRequest::response(QNetworkReply * const reply) const
{
    return new ListFleetsResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::ListFleetsRequestPrivate
 * \brief The ListFleetsRequestPrivate class provides private implementation for ListFleetsRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a ListFleetsRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
ListFleetsRequestPrivate::ListFleetsRequestPrivate(
    const RoboMakerRequest::Action action, ListFleetsRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListFleetsRequest
 * class' copy constructor.
 */
ListFleetsRequestPrivate::ListFleetsRequestPrivate(
    const ListFleetsRequestPrivate &other, ListFleetsRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
