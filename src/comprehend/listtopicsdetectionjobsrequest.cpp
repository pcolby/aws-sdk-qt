// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtopicsdetectionjobsrequest.h"
#include "listtopicsdetectionjobsrequest_p.h"
#include "listtopicsdetectionjobsresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::ListTopicsDetectionJobsRequest
 * \brief The ListTopicsDetectionJobsRequest class provides an interface for Comprehend ListTopicsDetectionJobs requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::listTopicsDetectionJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListTopicsDetectionJobsRequest::ListTopicsDetectionJobsRequest(const ListTopicsDetectionJobsRequest &other)
    : ComprehendRequest(new ListTopicsDetectionJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTopicsDetectionJobsRequest object.
 */
ListTopicsDetectionJobsRequest::ListTopicsDetectionJobsRequest()
    : ComprehendRequest(new ListTopicsDetectionJobsRequestPrivate(ComprehendRequest::ListTopicsDetectionJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListTopicsDetectionJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTopicsDetectionJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTopicsDetectionJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListTopicsDetectionJobsResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::ListTopicsDetectionJobsRequestPrivate
 * \brief The ListTopicsDetectionJobsRequestPrivate class provides private implementation for ListTopicsDetectionJobsRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a ListTopicsDetectionJobsRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
ListTopicsDetectionJobsRequestPrivate::ListTopicsDetectionJobsRequestPrivate(
    const ComprehendRequest::Action action, ListTopicsDetectionJobsRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTopicsDetectionJobsRequest
 * class' copy constructor.
 */
ListTopicsDetectionJobsRequestPrivate::ListTopicsDetectionJobsRequestPrivate(
    const ListTopicsDetectionJobsRequestPrivate &other, ListTopicsDetectionJobsRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
