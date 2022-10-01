// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "startrxnorminferencejobrequest.h"
#include "startrxnorminferencejobrequest_p.h"
#include "startrxnorminferencejobresponse.h"
#include "comprehendmedicalrequest_p.h"

namespace QtAws {
namespace ComprehendMedical {

/*!
 * \class QtAws::ComprehendMedical::StartRxNormInferenceJobRequest
 * \brief The StartRxNormInferenceJobRequest class provides an interface for ComprehendMedical StartRxNormInferenceJob requests.
 *
 * \inmodule QtAwsComprehendMedical
 *
 *  Comprehend Medical; extracts structured information from unstructured clinical text. Use these actions to gain insight
 *  in your documents.
 *
 * \sa ComprehendMedicalClient::startRxNormInferenceJob
 */

/*!
 * Constructs a copy of \a other.
 */
StartRxNormInferenceJobRequest::StartRxNormInferenceJobRequest(const StartRxNormInferenceJobRequest &other)
    : ComprehendMedicalRequest(new StartRxNormInferenceJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartRxNormInferenceJobRequest object.
 */
StartRxNormInferenceJobRequest::StartRxNormInferenceJobRequest()
    : ComprehendMedicalRequest(new StartRxNormInferenceJobRequestPrivate(ComprehendMedicalRequest::StartRxNormInferenceJobAction, this))
{

}

/*!
 * \reimp
 */
bool StartRxNormInferenceJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartRxNormInferenceJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartRxNormInferenceJobRequest::response(QNetworkReply * const reply) const
{
    return new StartRxNormInferenceJobResponse(*this, reply);
}

/*!
 * \class QtAws::ComprehendMedical::StartRxNormInferenceJobRequestPrivate
 * \brief The StartRxNormInferenceJobRequestPrivate class provides private implementation for StartRxNormInferenceJobRequest.
 * \internal
 *
 * \inmodule QtAwsComprehendMedical
 */

/*!
 * Constructs a StartRxNormInferenceJobRequestPrivate object for ComprehendMedical \a action,
 * with public implementation \a q.
 */
StartRxNormInferenceJobRequestPrivate::StartRxNormInferenceJobRequestPrivate(
    const ComprehendMedicalRequest::Action action, StartRxNormInferenceJobRequest * const q)
    : ComprehendMedicalRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartRxNormInferenceJobRequest
 * class' copy constructor.
 */
StartRxNormInferenceJobRequestPrivate::StartRxNormInferenceJobRequestPrivate(
    const StartRxNormInferenceJobRequestPrivate &other, StartRxNormInferenceJobRequest * const q)
    : ComprehendMedicalRequestPrivate(other, q)
{

}

} // namespace ComprehendMedical
} // namespace QtAws
