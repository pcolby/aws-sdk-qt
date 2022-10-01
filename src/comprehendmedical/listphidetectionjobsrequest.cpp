// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listphidetectionjobsrequest.h"
#include "listphidetectionjobsrequest_p.h"
#include "listphidetectionjobsresponse.h"
#include "comprehendmedicalrequest_p.h"

namespace QtAws {
namespace ComprehendMedical {

/*!
 * \class QtAws::ComprehendMedical::ListPHIDetectionJobsRequest
 * \brief The ListPHIDetectionJobsRequest class provides an interface for ComprehendMedical ListPHIDetectionJobs requests.
 *
 * \inmodule QtAwsComprehendMedical
 *
 *  Comprehend Medical; extracts structured information from unstructured clinical text. Use these actions to gain insight
 *  in your documents.
 *
 * \sa ComprehendMedicalClient::listPHIDetectionJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListPHIDetectionJobsRequest::ListPHIDetectionJobsRequest(const ListPHIDetectionJobsRequest &other)
    : ComprehendMedicalRequest(new ListPHIDetectionJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListPHIDetectionJobsRequest object.
 */
ListPHIDetectionJobsRequest::ListPHIDetectionJobsRequest()
    : ComprehendMedicalRequest(new ListPHIDetectionJobsRequestPrivate(ComprehendMedicalRequest::ListPHIDetectionJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListPHIDetectionJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListPHIDetectionJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListPHIDetectionJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListPHIDetectionJobsResponse(*this, reply);
}

/*!
 * \class QtAws::ComprehendMedical::ListPHIDetectionJobsRequestPrivate
 * \brief The ListPHIDetectionJobsRequestPrivate class provides private implementation for ListPHIDetectionJobsRequest.
 * \internal
 *
 * \inmodule QtAwsComprehendMedical
 */

/*!
 * Constructs a ListPHIDetectionJobsRequestPrivate object for ComprehendMedical \a action,
 * with public implementation \a q.
 */
ListPHIDetectionJobsRequestPrivate::ListPHIDetectionJobsRequestPrivate(
    const ComprehendMedicalRequest::Action action, ListPHIDetectionJobsRequest * const q)
    : ComprehendMedicalRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListPHIDetectionJobsRequest
 * class' copy constructor.
 */
ListPHIDetectionJobsRequestPrivate::ListPHIDetectionJobsRequestPrivate(
    const ListPHIDetectionJobsRequestPrivate &other, ListPHIDetectionJobsRequest * const q)
    : ComprehendMedicalRequestPrivate(other, q)
{

}

} // namespace ComprehendMedical
} // namespace QtAws
