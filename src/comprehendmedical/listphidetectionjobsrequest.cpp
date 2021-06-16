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
 *  Amazon Comprehend Medical extracts structured information from unstructured clinical text. Use these actions to gain
 *  insight in your documents.
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
