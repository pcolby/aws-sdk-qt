// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listjobsrequest.h"
#include "listjobsrequest_p.h"
#include "listjobsresponse.h"
#include "databrewrequest_p.h"

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::ListJobsRequest
 * \brief The ListJobsRequest class provides an interface for DataBrew ListJobs requests.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::listJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListJobsRequest::ListJobsRequest(const ListJobsRequest &other)
    : DataBrewRequest(new ListJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListJobsRequest object.
 */
ListJobsRequest::ListJobsRequest()
    : DataBrewRequest(new ListJobsRequestPrivate(DataBrewRequest::ListJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListJobsResponse(*this, reply);
}

/*!
 * \class QtAws::DataBrew::ListJobsRequestPrivate
 * \brief The ListJobsRequestPrivate class provides private implementation for ListJobsRequest.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a ListJobsRequestPrivate object for DataBrew \a action,
 * with public implementation \a q.
 */
ListJobsRequestPrivate::ListJobsRequestPrivate(
    const DataBrewRequest::Action action, ListJobsRequest * const q)
    : DataBrewRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListJobsRequest
 * class' copy constructor.
 */
ListJobsRequestPrivate::ListJobsRequestPrivate(
    const ListJobsRequestPrivate &other, ListJobsRequest * const q)
    : DataBrewRequestPrivate(other, q)
{

}

} // namespace DataBrew
} // namespace QtAws
