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

#include "listicd10cminferencejobsrequest.h"
#include "listicd10cminferencejobsrequest_p.h"
#include "listicd10cminferencejobsresponse.h"
#include "comprehendmedicalrequest_p.h"

namespace QtAws {
namespace ComprehendMedical {

/*!
 * \class QtAws::ComprehendMedical::ListICD10CMInferenceJobsRequest
 * \brief The ListICD10CMInferenceJobsRequest class provides an interface for ComprehendMedical ListICD10CMInferenceJobs requests.
 *
 * \inmodule QtAwsComprehendMedical
 *
 *  Comprehend Medical; extracts structured information from unstructured clinical text. Use these actions to gain insight
 *  in your documents.
 *
 * \sa ComprehendMedicalClient::listICD10CMInferenceJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListICD10CMInferenceJobsRequest::ListICD10CMInferenceJobsRequest(const ListICD10CMInferenceJobsRequest &other)
    : ComprehendMedicalRequest(new ListICD10CMInferenceJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListICD10CMInferenceJobsRequest object.
 */
ListICD10CMInferenceJobsRequest::ListICD10CMInferenceJobsRequest()
    : ComprehendMedicalRequest(new ListICD10CMInferenceJobsRequestPrivate(ComprehendMedicalRequest::ListICD10CMInferenceJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListICD10CMInferenceJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListICD10CMInferenceJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListICD10CMInferenceJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListICD10CMInferenceJobsResponse(*this, reply);
}

/*!
 * \class QtAws::ComprehendMedical::ListICD10CMInferenceJobsRequestPrivate
 * \brief The ListICD10CMInferenceJobsRequestPrivate class provides private implementation for ListICD10CMInferenceJobsRequest.
 * \internal
 *
 * \inmodule QtAwsComprehendMedical
 */

/*!
 * Constructs a ListICD10CMInferenceJobsRequestPrivate object for ComprehendMedical \a action,
 * with public implementation \a q.
 */
ListICD10CMInferenceJobsRequestPrivate::ListICD10CMInferenceJobsRequestPrivate(
    const ComprehendMedicalRequest::Action action, ListICD10CMInferenceJobsRequest * const q)
    : ComprehendMedicalRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListICD10CMInferenceJobsRequest
 * class' copy constructor.
 */
ListICD10CMInferenceJobsRequestPrivate::ListICD10CMInferenceJobsRequestPrivate(
    const ListICD10CMInferenceJobsRequestPrivate &other, ListICD10CMInferenceJobsRequest * const q)
    : ComprehendMedicalRequestPrivate(other, q)
{

}

} // namespace ComprehendMedical
} // namespace QtAws
