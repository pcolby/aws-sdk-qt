// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopsnomedctinferencejobrequest.h"
#include "stopsnomedctinferencejobrequest_p.h"
#include "stopsnomedctinferencejobresponse.h"
#include "comprehendmedicalrequest_p.h"

namespace QtAws {
namespace ComprehendMedical {

/*!
 * \class QtAws::ComprehendMedical::StopSNOMEDCTInferenceJobRequest
 * \brief The StopSNOMEDCTInferenceJobRequest class provides an interface for ComprehendMedical StopSNOMEDCTInferenceJob requests.
 *
 * \inmodule QtAwsComprehendMedical
 *
 *  Comprehend Medical; extracts structured information from unstructured clinical text. Use these actions to gain insight
 *  in your documents.
 *
 * \sa ComprehendMedicalClient::stopSNOMEDCTInferenceJob
 */

/*!
 * Constructs a copy of \a other.
 */
StopSNOMEDCTInferenceJobRequest::StopSNOMEDCTInferenceJobRequest(const StopSNOMEDCTInferenceJobRequest &other)
    : ComprehendMedicalRequest(new StopSNOMEDCTInferenceJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopSNOMEDCTInferenceJobRequest object.
 */
StopSNOMEDCTInferenceJobRequest::StopSNOMEDCTInferenceJobRequest()
    : ComprehendMedicalRequest(new StopSNOMEDCTInferenceJobRequestPrivate(ComprehendMedicalRequest::StopSNOMEDCTInferenceJobAction, this))
{

}

/*!
 * \reimp
 */
bool StopSNOMEDCTInferenceJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopSNOMEDCTInferenceJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopSNOMEDCTInferenceJobRequest::response(QNetworkReply * const reply) const
{
    return new StopSNOMEDCTInferenceJobResponse(*this, reply);
}

/*!
 * \class QtAws::ComprehendMedical::StopSNOMEDCTInferenceJobRequestPrivate
 * \brief The StopSNOMEDCTInferenceJobRequestPrivate class provides private implementation for StopSNOMEDCTInferenceJobRequest.
 * \internal
 *
 * \inmodule QtAwsComprehendMedical
 */

/*!
 * Constructs a StopSNOMEDCTInferenceJobRequestPrivate object for ComprehendMedical \a action,
 * with public implementation \a q.
 */
StopSNOMEDCTInferenceJobRequestPrivate::StopSNOMEDCTInferenceJobRequestPrivate(
    const ComprehendMedicalRequest::Action action, StopSNOMEDCTInferenceJobRequest * const q)
    : ComprehendMedicalRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopSNOMEDCTInferenceJobRequest
 * class' copy constructor.
 */
StopSNOMEDCTInferenceJobRequestPrivate::StopSNOMEDCTInferenceJobRequestPrivate(
    const StopSNOMEDCTInferenceJobRequestPrivate &other, StopSNOMEDCTInferenceJobRequest * const q)
    : ComprehendMedicalRequestPrivate(other, q)
{

}

} // namespace ComprehendMedical
} // namespace QtAws
