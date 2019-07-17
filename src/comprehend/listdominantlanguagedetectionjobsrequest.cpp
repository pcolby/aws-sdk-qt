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

#include "listdominantlanguagedetectionjobsrequest.h"
#include "listdominantlanguagedetectionjobsrequest_p.h"
#include "listdominantlanguagedetectionjobsresponse.h"
#include "comprehendrequest_p.h"

namespace QtAws {
namespace Comprehend {

/*!
 * \class QtAws::Comprehend::ListDominantLanguageDetectionJobsRequest
 * \brief The ListDominantLanguageDetectionJobsRequest class provides an interface for Comprehend ListDominantLanguageDetectionJobs requests.
 *
 * \inmodule QtAwsComprehend
 *
 *  Amazon Comprehend is an AWS service for gaining insight into the content of documents. Use these actions to determine
 *  the topics contained in your documents, the topics they discuss, the predominant sentiment expressed in them, the
 *  predominant language used, and
 *
 * \sa ComprehendClient::listDominantLanguageDetectionJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListDominantLanguageDetectionJobsRequest::ListDominantLanguageDetectionJobsRequest(const ListDominantLanguageDetectionJobsRequest &other)
    : ComprehendRequest(new ListDominantLanguageDetectionJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDominantLanguageDetectionJobsRequest object.
 */
ListDominantLanguageDetectionJobsRequest::ListDominantLanguageDetectionJobsRequest()
    : ComprehendRequest(new ListDominantLanguageDetectionJobsRequestPrivate(ComprehendRequest::ListDominantLanguageDetectionJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDominantLanguageDetectionJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDominantLanguageDetectionJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDominantLanguageDetectionJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListDominantLanguageDetectionJobsResponse(*this, reply);
}

/*!
 * \class QtAws::Comprehend::ListDominantLanguageDetectionJobsRequestPrivate
 * \brief The ListDominantLanguageDetectionJobsRequestPrivate class provides private implementation for ListDominantLanguageDetectionJobsRequest.
 * \internal
 *
 * \inmodule QtAwsComprehend
 */

/*!
 * Constructs a ListDominantLanguageDetectionJobsRequestPrivate object for Comprehend \a action,
 * with public implementation \a q.
 */
ListDominantLanguageDetectionJobsRequestPrivate::ListDominantLanguageDetectionJobsRequestPrivate(
    const ComprehendRequest::Action action, ListDominantLanguageDetectionJobsRequest * const q)
    : ComprehendRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDominantLanguageDetectionJobsRequest
 * class' copy constructor.
 */
ListDominantLanguageDetectionJobsRequestPrivate::ListDominantLanguageDetectionJobsRequestPrivate(
    const ListDominantLanguageDetectionJobsRequestPrivate &other, ListDominantLanguageDetectionJobsRequest * const q)
    : ComprehendRequestPrivate(other, q)
{

}

} // namespace Comprehend
} // namespace QtAws
