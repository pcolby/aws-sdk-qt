// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stoprxnorminferencejobrequest.h"
#include "stoprxnorminferencejobrequest_p.h"
#include "stoprxnorminferencejobresponse.h"
#include "comprehendmedicalrequest_p.h"

namespace QtAws {
namespace ComprehendMedical {

/*!
 * \class QtAws::ComprehendMedical::StopRxNormInferenceJobRequest
 * \brief The StopRxNormInferenceJobRequest class provides an interface for ComprehendMedical StopRxNormInferenceJob requests.
 *
 * \inmodule QtAwsComprehendMedical
 *
 *  Comprehend Medical; extracts structured information from unstructured clinical text. Use these actions to gain insight
 *  in your documents.
 *
 * \sa ComprehendMedicalClient::stopRxNormInferenceJob
 */

/*!
 * Constructs a copy of \a other.
 */
StopRxNormInferenceJobRequest::StopRxNormInferenceJobRequest(const StopRxNormInferenceJobRequest &other)
    : ComprehendMedicalRequest(new StopRxNormInferenceJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopRxNormInferenceJobRequest object.
 */
StopRxNormInferenceJobRequest::StopRxNormInferenceJobRequest()
    : ComprehendMedicalRequest(new StopRxNormInferenceJobRequestPrivate(ComprehendMedicalRequest::StopRxNormInferenceJobAction, this))
{

}

/*!
 * \reimp
 */
bool StopRxNormInferenceJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopRxNormInferenceJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopRxNormInferenceJobRequest::response(QNetworkReply * const reply) const
{
    return new StopRxNormInferenceJobResponse(*this, reply);
}

/*!
 * \class QtAws::ComprehendMedical::StopRxNormInferenceJobRequestPrivate
 * \brief The StopRxNormInferenceJobRequestPrivate class provides private implementation for StopRxNormInferenceJobRequest.
 * \internal
 *
 * \inmodule QtAwsComprehendMedical
 */

/*!
 * Constructs a StopRxNormInferenceJobRequestPrivate object for ComprehendMedical \a action,
 * with public implementation \a q.
 */
StopRxNormInferenceJobRequestPrivate::StopRxNormInferenceJobRequestPrivate(
    const ComprehendMedicalRequest::Action action, StopRxNormInferenceJobRequest * const q)
    : ComprehendMedicalRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopRxNormInferenceJobRequest
 * class' copy constructor.
 */
StopRxNormInferenceJobRequestPrivate::StopRxNormInferenceJobRequestPrivate(
    const StopRxNormInferenceJobRequestPrivate &other, StopRxNormInferenceJobRequest * const q)
    : ComprehendMedicalRequestPrivate(other, q)
{

}

} // namespace ComprehendMedical
} // namespace QtAws
