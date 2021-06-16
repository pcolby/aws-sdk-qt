/*
    Copyright 2013-2021 Paul Colby

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
