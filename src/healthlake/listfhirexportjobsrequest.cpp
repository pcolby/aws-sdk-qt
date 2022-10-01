// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
