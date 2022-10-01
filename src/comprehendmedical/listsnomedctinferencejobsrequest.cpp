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

#include "listsnomedctinferencejobsrequest.h"
#include "listsnomedctinferencejobsrequest_p.h"
#include "listsnomedctinferencejobsresponse.h"
#include "comprehendmedicalrequest_p.h"

namespace QtAws {
namespace ComprehendMedical {

/*!
 * \class QtAws::ComprehendMedical::ListSNOMEDCTInferenceJobsRequest
 * \brief The ListSNOMEDCTInferenceJobsRequest class provides an interface for ComprehendMedical ListSNOMEDCTInferenceJobs requests.
 *
 * \inmodule QtAwsComprehendMedical
 *
 *  Comprehend Medical; extracts structured information from unstructured clinical text. Use these actions to gain insight
 *  in your documents.
 *
 * \sa ComprehendMedicalClient::listSNOMEDCTInferenceJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListSNOMEDCTInferenceJobsRequest::ListSNOMEDCTInferenceJobsRequest(const ListSNOMEDCTInferenceJobsRequest &other)
    : ComprehendMedicalRequest(new ListSNOMEDCTInferenceJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListSNOMEDCTInferenceJobsRequest object.
 */
ListSNOMEDCTInferenceJobsRequest::ListSNOMEDCTInferenceJobsRequest()
    : ComprehendMedicalRequest(new ListSNOMEDCTInferenceJobsRequestPrivate(ComprehendMedicalRequest::ListSNOMEDCTInferenceJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListSNOMEDCTInferenceJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListSNOMEDCTInferenceJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSNOMEDCTInferenceJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListSNOMEDCTInferenceJobsResponse(*this, reply);
}

/*!
 * \class QtAws::ComprehendMedical::ListSNOMEDCTInferenceJobsRequestPrivate
 * \brief The ListSNOMEDCTInferenceJobsRequestPrivate class provides private implementation for ListSNOMEDCTInferenceJobsRequest.
 * \internal
 *
 * \inmodule QtAwsComprehendMedical
 */

/*!
 * Constructs a ListSNOMEDCTInferenceJobsRequestPrivate object for ComprehendMedical \a action,
 * with public implementation \a q.
 */
ListSNOMEDCTInferenceJobsRequestPrivate::ListSNOMEDCTInferenceJobsRequestPrivate(
    const ComprehendMedicalRequest::Action action, ListSNOMEDCTInferenceJobsRequest * const q)
    : ComprehendMedicalRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListSNOMEDCTInferenceJobsRequest
 * class' copy constructor.
 */
ListSNOMEDCTInferenceJobsRequestPrivate::ListSNOMEDCTInferenceJobsRequestPrivate(
    const ListSNOMEDCTInferenceJobsRequestPrivate &other, ListSNOMEDCTInferenceJobsRequest * const q)
    : ComprehendMedicalRequestPrivate(other, q)
{

}

} // namespace ComprehendMedical
} // namespace QtAws
