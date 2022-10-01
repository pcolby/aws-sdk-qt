// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
