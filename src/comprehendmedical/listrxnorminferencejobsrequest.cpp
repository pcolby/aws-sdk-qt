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

#include "listrxnorminferencejobsrequest.h"
#include "listrxnorminferencejobsrequest_p.h"
#include "listrxnorminferencejobsresponse.h"
#include "comprehendmedicalrequest_p.h"

namespace QtAws {
namespace ComprehendMedical {

/*!
 * \class QtAws::ComprehendMedical::ListRxNormInferenceJobsRequest
 * \brief The ListRxNormInferenceJobsRequest class provides an interface for ComprehendMedical ListRxNormInferenceJobs requests.
 *
 * \inmodule QtAwsComprehendMedical
 *
 *  Amazon Comprehend Medical extracts structured information from unstructured clinical text. Use these actions to gain
 *  insight in your documents.
 *
 * \sa ComprehendMedicalClient::listRxNormInferenceJobs
 */

/*!
 * Constructs a copy of \a other.
 */
ListRxNormInferenceJobsRequest::ListRxNormInferenceJobsRequest(const ListRxNormInferenceJobsRequest &other)
    : ComprehendMedicalRequest(new ListRxNormInferenceJobsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListRxNormInferenceJobsRequest object.
 */
ListRxNormInferenceJobsRequest::ListRxNormInferenceJobsRequest()
    : ComprehendMedicalRequest(new ListRxNormInferenceJobsRequestPrivate(ComprehendMedicalRequest::ListRxNormInferenceJobsAction, this))
{

}

/*!
 * \reimp
 */
bool ListRxNormInferenceJobsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListRxNormInferenceJobsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListRxNormInferenceJobsRequest::response(QNetworkReply * const reply) const
{
    return new ListRxNormInferenceJobsResponse(*this, reply);
}

/*!
 * \class QtAws::ComprehendMedical::ListRxNormInferenceJobsRequestPrivate
 * \brief The ListRxNormInferenceJobsRequestPrivate class provides private implementation for ListRxNormInferenceJobsRequest.
 * \internal
 *
 * \inmodule QtAwsComprehendMedical
 */

/*!
 * Constructs a ListRxNormInferenceJobsRequestPrivate object for ComprehendMedical \a action,
 * with public implementation \a q.
 */
ListRxNormInferenceJobsRequestPrivate::ListRxNormInferenceJobsRequestPrivate(
    const ComprehendMedicalRequest::Action action, ListRxNormInferenceJobsRequest * const q)
    : ComprehendMedicalRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListRxNormInferenceJobsRequest
 * class' copy constructor.
 */
ListRxNormInferenceJobsRequestPrivate::ListRxNormInferenceJobsRequestPrivate(
    const ListRxNormInferenceJobsRequestPrivate &other, ListRxNormInferenceJobsRequest * const q)
    : ComprehendMedicalRequestPrivate(other, q)
{

}

} // namespace ComprehendMedical
} // namespace QtAws
