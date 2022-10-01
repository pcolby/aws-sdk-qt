// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listfhirimportjobsrequest.h"
#include "listfhirimportjobsrequest_p.h"
#include "listfhirimportjobsresponse.h"
#include "healthlakerequest_p.h"

namespace QtAws {
namespace HealthLake {

/*!
 * \class QtAws::HealthLake::ListFHIRImportJobsRequest
 * \brief The ListFHIRImportJobsRequest class provides an interface for HealthLake ListFHIRImportJobs requests.
 *
 * \inmodule QtAwsHealthLake
 *
 *  Amazon HealthLake is a HIPAA eligibile service that allows customers to store, transform, query, and analyze their
 *  FHIR-formatted data in a consistent fashion in the
 *
 * \sa HealthLakeClient::listFHIRImportJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListFHIRImportJobsRequest::ListFHIRImportJobsRequest(const ListFHIRImportJobsRequest &other)
    : HealthLakeRequest(new ListFHIRImportJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListFHIRImportJobsRequest object.
 */
ListFHIRImportJobsRequest::ListFHIRImportJobsRequest()
    : HealthLakeRequest(new ListFHIRImportJobsRequestPrivate(HealthLakeRequest::ListFHIRImportJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListFHIRImportJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListFHIRImportJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListFHIRImportJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListFHIRImportJobsResponse(*this, reply);
}

/*!
 * \class QtAws::HealthLake::ListFHIRImportJobsRequestPrivate
 * \brief The ListFHIRImportJobsRequestPrivate class provides private implementation for ListFHIRImportJobsRequest.
 * \internal
 *
 * \inmodule QtAwsHealthLake
 */

/*!
 * Constructs a ListFHIRImportJobsRequestPrivate object for HealthLake \a action,
 * with public implementation \a q.
 */
ListFHIRImportJobsRequestPrivate::ListFHIRImportJobsRequestPrivate(
    const HealthLakeRequest::Action action, ListFHIRImportJobsRequest * const q)
    : HealthLakeRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListFHIRImportJobsRequest
 * class' copy constructor.
 */
ListFHIRImportJobsRequestPrivate::ListFHIRImportJobsRequestPrivate(
    const ListFHIRImportJobsRequestPrivate &other, ListFHIRImportJobsRequest * const q)
    : HealthLakeRequestPrivate(other, q)
{

}

} // namespace HealthLake
} // namespace QtAws
