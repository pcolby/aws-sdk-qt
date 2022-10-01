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

#include "listfhirexportjobsrequest.h"
#include "listfhirexportjobsrequest_p.h"
#include "listfhirexportjobsresponse.h"
#include "healthlakerequest_p.h"

namespace QtAws {
namespace HealthLake {

/*!
 * \class QtAws::HealthLake::ListFHIRExportJobsRequest
 * \brief The ListFHIRExportJobsRequest class provides an interface for HealthLake ListFHIRExportJobs requests.
 *
 * \inmodule QtAwsHealthLake
 *
 *  Amazon HealthLake is a HIPAA eligibile service that allows customers to store, transform, query, and analyze their
 *  FHIR-formatted data in a consistent fashion in the
 *
 * \sa HealthLakeClient::listFHIRExportJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListFHIRExportJobsRequest::ListFHIRExportJobsRequest(const ListFHIRExportJobsRequest &other)
    : HealthLakeRequest(new ListFHIRExportJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListFHIRExportJobsRequest object.
 */
ListFHIRExportJobsRequest::ListFHIRExportJobsRequest()
    : HealthLakeRequest(new ListFHIRExportJobsRequestPrivate(HealthLakeRequest::ListFHIRExportJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListFHIRExportJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListFHIRExportJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListFHIRExportJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListFHIRExportJobsResponse(*this, reply);
}

/*!
 * \class QtAws::HealthLake::ListFHIRExportJobsRequestPrivate
 * \brief The ListFHIRExportJobsRequestPrivate class provides private implementation for ListFHIRExportJobsRequest.
 * \internal
 *
 * \inmodule QtAwsHealthLake
 */

/*!
 * Constructs a ListFHIRExportJobsRequestPrivate object for HealthLake \a action,
 * with public implementation \a q.
 */
ListFHIRExportJobsRequestPrivate::ListFHIRExportJobsRequestPrivate(
    const HealthLakeRequest::Action action, ListFHIRExportJobsRequest * const q)
    : HealthLakeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListFHIRExportJobsRequest
 * class' copy constructor.
 */
ListFHIRExportJobsRequestPrivate::ListFHIRExportJobsRequestPrivate(
    const ListFHIRExportJobsRequestPrivate &other, ListFHIRExportJobsRequest * const q)
    : HealthLakeRequestPrivate(other, q)
{

}

} // namespace HealthLake
} // namespace QtAws
