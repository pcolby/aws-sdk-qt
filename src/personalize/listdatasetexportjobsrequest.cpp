// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdatasetexportjobsrequest.h"
#include "listdatasetexportjobsrequest_p.h"
#include "listdatasetexportjobsresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::ListDatasetExportJobsRequest
 * \brief The ListDatasetExportJobsRequest class provides an interface for Personalize ListDatasetExportJobs requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::listDatasetExportJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListDatasetExportJobsRequest::ListDatasetExportJobsRequest(const ListDatasetExportJobsRequest &other)
    : PersonalizeRequest(new ListDatasetExportJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDatasetExportJobsRequest object.
 */
ListDatasetExportJobsRequest::ListDatasetExportJobsRequest()
    : PersonalizeRequest(new ListDatasetExportJobsRequestPrivate(PersonalizeRequest::ListDatasetExportJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDatasetExportJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDatasetExportJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDatasetExportJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListDatasetExportJobsResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::ListDatasetExportJobsRequestPrivate
 * \brief The ListDatasetExportJobsRequestPrivate class provides private implementation for ListDatasetExportJobsRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a ListDatasetExportJobsRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
ListDatasetExportJobsRequestPrivate::ListDatasetExportJobsRequestPrivate(
    const PersonalizeRequest::Action action, ListDatasetExportJobsRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDatasetExportJobsRequest
 * class' copy constructor.
 */
ListDatasetExportJobsRequestPrivate::ListDatasetExportJobsRequestPrivate(
    const ListDatasetExportJobsRequestPrivate &other, ListDatasetExportJobsRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
