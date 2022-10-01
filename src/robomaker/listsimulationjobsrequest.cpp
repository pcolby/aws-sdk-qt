// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listsimulationjobsrequest.h"
#include "listsimulationjobsrequest_p.h"
#include "listsimulationjobsresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::ListSimulationJobsRequest
 * \brief The ListSimulationJobsRequest class provides an interface for RoboMaker ListSimulationJobs requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::listSimulationJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListSimulationJobsRequest::ListSimulationJobsRequest(const ListSimulationJobsRequest &other)
    : RoboMakerRequest(new ListSimulationJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListSimulationJobsRequest object.
 */
ListSimulationJobsRequest::ListSimulationJobsRequest()
    : RoboMakerRequest(new ListSimulationJobsRequestPrivate(RoboMakerRequest::ListSimulationJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListSimulationJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListSimulationJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSimulationJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListSimulationJobsResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::ListSimulationJobsRequestPrivate
 * \brief The ListSimulationJobsRequestPrivate class provides private implementation for ListSimulationJobsRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a ListSimulationJobsRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
ListSimulationJobsRequestPrivate::ListSimulationJobsRequestPrivate(
    const RoboMakerRequest::Action action, ListSimulationJobsRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListSimulationJobsRequest
 * class' copy constructor.
 */
ListSimulationJobsRequestPrivate::ListSimulationJobsRequestPrivate(
    const ListSimulationJobsRequestPrivate &other, ListSimulationJobsRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
