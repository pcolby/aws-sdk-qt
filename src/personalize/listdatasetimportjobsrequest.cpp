// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdatasetimportjobsrequest.h"
#include "listdatasetimportjobsrequest_p.h"
#include "listdatasetimportjobsresponse.h"
#include "personalizerequest_p.h"

namespace QtAws {
namespace Personalize {

/*!
 * \class QtAws::Personalize::ListDatasetImportJobsRequest
 * \brief The ListDatasetImportJobsRequest class provides an interface for Personalize ListDatasetImportJobs requests.
 *
 * \inmodule QtAwsPersonalize
 *
 *  Amazon Personalize is a machine learning service that makes it easy to add individualized recommendations to
 *
 * \sa PersonalizeClient::listDatasetImportJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListDatasetImportJobsRequest::ListDatasetImportJobsRequest(const ListDatasetImportJobsRequest &other)
    : PersonalizeRequest(new ListDatasetImportJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDatasetImportJobsRequest object.
 */
ListDatasetImportJobsRequest::ListDatasetImportJobsRequest()
    : PersonalizeRequest(new ListDatasetImportJobsRequestPrivate(PersonalizeRequest::ListDatasetImportJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDatasetImportJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDatasetImportJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDatasetImportJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListDatasetImportJobsResponse(*this, reply);
}

/*!
 * \class QtAws::Personalize::ListDatasetImportJobsRequestPrivate
 * \brief The ListDatasetImportJobsRequestPrivate class provides private implementation for ListDatasetImportJobsRequest.
 * \internal
 *
 * \inmodule QtAwsPersonalize
 */

/*!
 * Constructs a ListDatasetImportJobsRequestPrivate object for Personalize \a action,
 * with public implementation \a q.
 */
ListDatasetImportJobsRequestPrivate::ListDatasetImportJobsRequestPrivate(
    const PersonalizeRequest::Action action, ListDatasetImportJobsRequest * const q)
    : PersonalizeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDatasetImportJobsRequest
 * class' copy constructor.
 */
ListDatasetImportJobsRequestPrivate::ListDatasetImportJobsRequestPrivate(
    const ListDatasetImportJobsRequestPrivate &other, ListDatasetImportJobsRequest * const q)
    : PersonalizeRequestPrivate(other, q)
{

}

} // namespace Personalize
} // namespace QtAws
