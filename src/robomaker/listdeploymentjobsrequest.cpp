// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdeploymentjobsrequest.h"
#include "listdeploymentjobsrequest_p.h"
#include "listdeploymentjobsresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::ListDeploymentJobsRequest
 * \brief The ListDeploymentJobsRequest class provides an interface for RoboMaker ListDeploymentJobs requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::listDeploymentJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListDeploymentJobsRequest::ListDeploymentJobsRequest(const ListDeploymentJobsRequest &other)
    : RoboMakerRequest(new ListDeploymentJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDeploymentJobsRequest object.
 */
ListDeploymentJobsRequest::ListDeploymentJobsRequest()
    : RoboMakerRequest(new ListDeploymentJobsRequestPrivate(RoboMakerRequest::ListDeploymentJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDeploymentJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDeploymentJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDeploymentJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListDeploymentJobsResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::ListDeploymentJobsRequestPrivate
 * \brief The ListDeploymentJobsRequestPrivate class provides private implementation for ListDeploymentJobsRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a ListDeploymentJobsRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
ListDeploymentJobsRequestPrivate::ListDeploymentJobsRequestPrivate(
    const RoboMakerRequest::Action action, ListDeploymentJobsRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDeploymentJobsRequest
 * class' copy constructor.
 */
ListDeploymentJobsRequestPrivate::ListDeploymentJobsRequestPrivate(
    const ListDeploymentJobsRequestPrivate &other, ListDeploymentJobsRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
