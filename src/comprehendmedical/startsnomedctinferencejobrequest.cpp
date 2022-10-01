// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startsnomedctinferencejobrequest.h"
#include "startsnomedctinferencejobrequest_p.h"
#include "startsnomedctinferencejobresponse.h"
#include "comprehendmedicalrequest_p.h"

namespace QtAws {
namespace ComprehendMedical {

/*!
 * \class QtAws::ComprehendMedical::StartSNOMEDCTInferenceJobRequest
 * \brief The StartSNOMEDCTInferenceJobRequest class provides an interface for ComprehendMedical StartSNOMEDCTInferenceJob requests.
 *
 * \inmodule QtAwsComprehendMedical
 *
 *  Comprehend Medical; extracts structured information from unstructured clinical text. Use these actions to gain insight
 *  in your documents.
 *
 * \sa ComprehendMedicalClient::startSNOMEDCTInferenceJob
 */

/*!
 * Constructs a copy of \a other.
 */
StartSNOMEDCTInferenceJobRequest::StartSNOMEDCTInferenceJobRequest(const StartSNOMEDCTInferenceJobRequest &other)
    : ComprehendMedicalRequest(new StartSNOMEDCTInferenceJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartSNOMEDCTInferenceJobRequest object.
 */
StartSNOMEDCTInferenceJobRequest::StartSNOMEDCTInferenceJobRequest()
    : ComprehendMedicalRequest(new StartSNOMEDCTInferenceJobRequestPrivate(ComprehendMedicalRequest::StartSNOMEDCTInferenceJobAction, this))
{

}

/*!
 * \reimp
 */
bool StartSNOMEDCTInferenceJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartSNOMEDCTInferenceJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartSNOMEDCTInferenceJobRequest::response(QNetworkReply * const reply) const
{
    return new StartSNOMEDCTInferenceJobResponse(*this, reply);
}

/*!
 * \class QtAws::ComprehendMedical::StartSNOMEDCTInferenceJobRequestPrivate
 * \brief The StartSNOMEDCTInferenceJobRequestPrivate class provides private implementation for StartSNOMEDCTInferenceJobRequest.
 * \internal
 *
 * \inmodule QtAwsComprehendMedical
 */

/*!
 * Constructs a StartSNOMEDCTInferenceJobRequestPrivate object for ComprehendMedical \a action,
 * with public implementation \a q.
 */
StartSNOMEDCTInferenceJobRequestPrivate::StartSNOMEDCTInferenceJobRequestPrivate(
    const ComprehendMedicalRequest::Action action, StartSNOMEDCTInferenceJobRequest * const q)
    : ComprehendMedicalRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartSNOMEDCTInferenceJobRequest
 * class' copy constructor.
 */
StartSNOMEDCTInferenceJobRequestPrivate::StartSNOMEDCTInferenceJobRequestPrivate(
    const StartSNOMEDCTInferenceJobRequestPrivate &other, StartSNOMEDCTInferenceJobRequest * const q)
    : ComprehendMedicalRequestPrivate(other, q)
{

}

} // namespace ComprehendMedical
} // namespace QtAws
