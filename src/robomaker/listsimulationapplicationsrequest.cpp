// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listsimulationapplicationsrequest.h"
#include "listsimulationapplicationsrequest_p.h"
#include "listsimulationapplicationsresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::ListSimulationApplicationsRequest
 * \brief The ListSimulationApplicationsRequest class provides an interface for RoboMaker ListSimulationApplications requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::listSimulationApplications
 */

/*!
 * Constructs a copy of \a other.
 */
ListSimulationApplicationsRequest::ListSimulationApplicationsRequest(const ListSimulationApplicationsRequest &other)
    : RoboMakerRequest(new ListSimulationApplicationsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListSimulationApplicationsRequest object.
 */
ListSimulationApplicationsRequest::ListSimulationApplicationsRequest()
    : RoboMakerRequest(new ListSimulationApplicationsRequestPrivate(RoboMakerRequest::ListSimulationApplicationsAction, this))
{

}

/*!
 * \reimp
 */
bool ListSimulationApplicationsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListSimulationApplicationsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSimulationApplicationsRequest::response(QNetworkReply * const reply) const
{
    return new ListSimulationApplicationsResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::ListSimulationApplicationsRequestPrivate
 * \brief The ListSimulationApplicationsRequestPrivate class provides private implementation for ListSimulationApplicationsRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a ListSimulationApplicationsRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
ListSimulationApplicationsRequestPrivate::ListSimulationApplicationsRequestPrivate(
    const RoboMakerRequest::Action action, ListSimulationApplicationsRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListSimulationApplicationsRequest
 * class' copy constructor.
 */
ListSimulationApplicationsRequestPrivate::ListSimulationApplicationsRequestPrivate(
    const ListSimulationApplicationsRequestPrivate &other, ListSimulationApplicationsRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
