// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listjobrunsrequest.h"
#include "listjobrunsrequest_p.h"
#include "listjobrunsresponse.h"
#include "databrewrequest_p.h"

namespace QtAws {
namespace DataBrew {

/*!
 * \class QtAws::DataBrew::ListJobRunsRequest
 * \brief The ListJobRunsRequest class provides an interface for DataBrew ListJobRuns requests.
 *
 * \inmodule QtAwsDataBrew
 *
 *  Glue DataBrew is a visual, cloud-scale data-preparation service. DataBrew simplifies data preparation tasks, targeting
 *  data issues that are hard to spot and time-consuming to fix. DataBrew empowers users of all technical levels to
 *  visualize the data and perform one-click data transformations, with no coding
 *
 * \sa DataBrewClient::listJobRuns
 */

/*!
 * Constructs a copy of \a other.
 */
ListJobRunsRequest::ListJobRunsRequest(const ListJobRunsRequest &other)
    : DataBrewRequest(new ListJobRunsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListJobRunsRequest object.
 */
ListJobRunsRequest::ListJobRunsRequest()
    : DataBrewRequest(new ListJobRunsRequestPrivate(DataBrewRequest::ListJobRunsAction, this))
{

}

/*!
 * \reimp
 */
bool ListJobRunsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListJobRunsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListJobRunsRequest::response(QNetworkReply * const reply) const
{
    return new ListJobRunsResponse(*this, reply);
}

/*!
 * \class QtAws::DataBrew::ListJobRunsRequestPrivate
 * \brief The ListJobRunsRequestPrivate class provides private implementation for ListJobRunsRequest.
 * \internal
 *
 * \inmodule QtAwsDataBrew
 */

/*!
 * Constructs a ListJobRunsRequestPrivate object for DataBrew \a action,
 * with public implementation \a q.
 */
ListJobRunsRequestPrivate::ListJobRunsRequestPrivate(
    const DataBrewRequest::Action action, ListJobRunsRequest * const q)
    : DataBrewRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListJobRunsRequest
 * class' copy constructor.
 */
ListJobRunsRequestPrivate::ListJobRunsRequestPrivate(
    const ListJobRunsRequestPrivate &other, ListJobRunsRequest * const q)
    : DataBrewRequestPrivate(other, q)
{

}

} // namespace DataBrew
} // namespace QtAws
