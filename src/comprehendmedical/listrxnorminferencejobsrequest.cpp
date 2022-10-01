// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Comprehend Medical; extracts structured information from unstructured clinical text. Use these actions to gain insight
 *  in your documents.
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
