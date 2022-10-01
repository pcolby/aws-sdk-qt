// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listworldexportjobsrequest.h"
#include "listworldexportjobsrequest_p.h"
#include "listworldexportjobsresponse.h"
#include "robomakerrequest_p.h"

namespace QtAws {
namespace RoboMaker {

/*!
 * \class QtAws::RoboMaker::ListWorldExportJobsRequest
 * \brief The ListWorldExportJobsRequest class provides an interface for RoboMaker ListWorldExportJobs requests.
 *
 * \inmodule QtAwsRoboMaker
 *
 *  This section provides documentation for the AWS RoboMaker API
 *
 * \sa RoboMakerClient::listWorldExportJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListWorldExportJobsRequest::ListWorldExportJobsRequest(const ListWorldExportJobsRequest &other)
    : RoboMakerRequest(new ListWorldExportJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListWorldExportJobsRequest object.
 */
ListWorldExportJobsRequest::ListWorldExportJobsRequest()
    : RoboMakerRequest(new ListWorldExportJobsRequestPrivate(RoboMakerRequest::ListWorldExportJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListWorldExportJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListWorldExportJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListWorldExportJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListWorldExportJobsResponse(*this, reply);
}

/*!
 * \class QtAws::RoboMaker::ListWorldExportJobsRequestPrivate
 * \brief The ListWorldExportJobsRequestPrivate class provides private implementation for ListWorldExportJobsRequest.
 * \internal
 *
 * \inmodule QtAwsRoboMaker
 */

/*!
 * Constructs a ListWorldExportJobsRequestPrivate object for RoboMaker \a action,
 * with public implementation \a q.
 */
ListWorldExportJobsRequestPrivate::ListWorldExportJobsRequestPrivate(
    const RoboMakerRequest::Action action, ListWorldExportJobsRequest * const q)
    : RoboMakerRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListWorldExportJobsRequest
 * class' copy constructor.
 */
ListWorldExportJobsRequestPrivate::ListWorldExportJobsRequestPrivate(
    const ListWorldExportJobsRequestPrivate &other, ListWorldExportJobsRequest * const q)
    : RoboMakerRequestPrivate(other, q)
{

}

} // namespace RoboMaker
} // namespace QtAws
