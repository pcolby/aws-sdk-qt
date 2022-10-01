// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
