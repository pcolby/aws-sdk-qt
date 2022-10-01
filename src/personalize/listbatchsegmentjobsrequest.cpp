// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listbatchsegmentjobsrequest.h"
#include "listbatchsegmentjobsrequest_p.h"
#include "listbatchsegmentjobsresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::ListBatchSegmentJobsRequest
 * \brief The ListBatchSegmentJobsRequest class provides an interface for Personalize ListBatchSegmentJobs requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::listBatchSegmentJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListBatchSegmentJobsRequest::ListBatchSegmentJobsRequest(const ListBatchSegmentJobsRequest &other)
    : PersonalizeRequest(new ListBatchSegmentJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListBatchSegmentJobsRequest object.
 */
ListBatchSegmentJobsRequest::ListBatchSegmentJobsRequest()
    : PersonalizeRequest(new ListBatchSegmentJobsRequestPrivate(PersonalizeRequest::ListBatchSegmentJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListBatchSegmentJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListBatchSegmentJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListBatchSegmentJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListBatchSegmentJobsResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::ListBatchSegmentJobsRequestPrivate
 * \brief The ListBatchSegmentJobsRequestPrivate class provides private implementation for ListBatchSegmentJobsRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a ListBatchSegmentJobsRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
ListBatchSegmentJobsRequestPrivate::ListBatchSegmentJobsRequestPrivate(
    const PersonalizeRequest::Action action, ListBatchSegmentJobsRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListBatchSegmentJobsRequest
 * class' copy constructor.
 */
ListBatchSegmentJobsRequestPrivate::ListBatchSegmentJobsRequestPrivate(
    const ListBatchSegmentJobsRequestPrivate &other, ListBatchSegmentJobsRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
