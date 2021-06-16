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

#include "listworldgenerationjobsrequest.h"
#include "listworldgenerationjobsrequest_p.h"
#include "listworldgenerationjobsresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::ListWorldGenerationJobsRequest
 * \brief The ListWorldGenerationJobsRequest class provides an interface for RoboMaker ListWorldGenerationJobs requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::listWorldGenerationJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListWorldGenerationJobsRequest::ListWorldGenerationJobsRequest(const ListWorldGenerationJobsRequest &other)
    : RoboMakerRequest(new ListWorldGenerationJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListWorldGenerationJobsRequest object.
 */
ListWorldGenerationJobsRequest::ListWorldGenerationJobsRequest()
    : RoboMakerRequest(new ListWorldGenerationJobsRequestPrivate(RoboMakerRequest::ListWorldGenerationJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListWorldGenerationJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListWorldGenerationJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListWorldGenerationJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListWorldGenerationJobsResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::ListWorldGenerationJobsRequestPrivate
 * \brief The ListWorldGenerationJobsRequestPrivate class provides private implementation for ListWorldGenerationJobsRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a ListWorldGenerationJobsRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
ListWorldGenerationJobsRequestPrivate::ListWorldGenerationJobsRequestPrivate(
    const RoboMakerRequest::Action action, ListWorldGenerationJobsRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListWorldGenerationJobsRequest
 * class' copy constructor.
 */
ListWorldGenerationJobsRequestPrivate::ListWorldGenerationJobsRequestPrivate(
    const ListWorldGenerationJobsRequestPrivate &other, ListWorldGenerationJobsRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
