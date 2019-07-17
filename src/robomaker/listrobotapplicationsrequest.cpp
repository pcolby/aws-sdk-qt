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

#include "listrobotapplicationsrequest.h"
#include "listrobotapplicationsrequest_p.h"
#include "listrobotapplicationsresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::ListRobotApplicationsRequest
 * \brief The ListRobotApplicationsRequest class provides an interface for RoboMaker ListRobotApplications requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::listRobotApplications
 */

/*!
 * Constructs a copy of \a other.
 */
ListRobotApplicationsRequest::ListRobotApplicationsRequest(const ListRobotApplicationsRequest &other)
    : RoboMakerRequest(new ListRobotApplicationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListRobotApplicationsRequest object.
 */
ListRobotApplicationsRequest::ListRobotApplicationsRequest()
    : RoboMakerRequest(new ListRobotApplicationsRequestPrivate(RoboMakerRequest::ListRobotApplicationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListRobotApplicationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListRobotApplicationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListRobotApplicationsRequest::response(QNetworkReply * const reply) const
{
    return new ListRobotApplicationsResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::ListRobotApplicationsRequestPrivate
 * \brief The ListRobotApplicationsRequestPrivate class provides private implementation for ListRobotApplicationsRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a ListRobotApplicationsRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
ListRobotApplicationsRequestPrivate::ListRobotApplicationsRequestPrivate(
    const RoboMakerRequest::Action action, ListRobotApplicationsRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListRobotApplicationsRequest
 * class' copy constructor.
 */
ListRobotApplicationsRequestPrivate::ListRobotApplicationsRequestPrivate(
    const ListRobotApplicationsRequestPrivate &other, ListRobotApplicationsRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
