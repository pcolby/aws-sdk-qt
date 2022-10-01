// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopicd10cminferencejobrequest.h"
#include "stopicd10cminferencejobrequest_p.h"
#include "stopicd10cminferencejobresponse.h"
#include "comprehendmedicalrequest_p.h"

namespace QtAws {
namespace ComprehendMedical {

/*!
 * \class QtAws::ComprehendMedical::StopICD10CMInferenceJobRequest
 * \brief The StopICD10CMInferenceJobRequest class provides an interface for ComprehendMedical StopICD10CMInferenceJob requests.
 *
 * \inmodule QtAwsComprehendMedical
 *
 *  Comprehend Medical; extracts structured information from unstructured clinical text. Use these actions to gain insight
 *  in your documents.
 *
 * \sa ComprehendMedicalClient::stopICD10CMInferenceJob
 */

/*!
 * Constructs a copy of \a other.
 */
StopICD10CMInferenceJobRequest::StopICD10CMInferenceJobRequest(const StopICD10CMInferenceJobRequest &other)
    : ComprehendMedicalRequest(new StopICD10CMInferenceJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopICD10CMInferenceJobRequest object.
 */
StopICD10CMInferenceJobRequest::StopICD10CMInferenceJobRequest()
    : ComprehendMedicalRequest(new StopICD10CMInferenceJobRequestPrivate(ComprehendMedicalRequest::StopICD10CMInferenceJobAction, this))
{

}

/*!
 * \reimp
 */
bool StopICD10CMInferenceJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopICD10CMInferenceJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopICD10CMInferenceJobRequest::response(QNetworkReply * const reply) const
{
    return new StopICD10CMInferenceJobResponse(*this, reply);
}

/*!
 * \class QtAws::ComprehendMedical::StopICD10CMInferenceJobRequestPrivate
 * \brief The StopICD10CMInferenceJobRequestPrivate class provides private implementation for StopICD10CMInferenceJobRequest.
 * \internal
 *
 * \inmodule QtAwsComprehendMedical
 */

/*!
 * Constructs a StopICD10CMInferenceJobRequestPrivate object for ComprehendMedical \a action,
 * with public implementation \a q.
 */
StopICD10CMInferenceJobRequestPrivate::StopICD10CMInferenceJobRequestPrivate(
    const ComprehendMedicalRequest::Action action, StopICD10CMInferenceJobRequest * const q)
    : ComprehendMedicalRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopICD10CMInferenceJobRequest
 * class' copy constructor.
 */
StopICD10CMInferenceJobRequestPrivate::StopICD10CMInferenceJobRequestPrivate(
    const StopICD10CMInferenceJobRequestPrivate &other, StopICD10CMInferenceJobRequest * const q)
    : ComprehendMedicalRequestPrivate(other, q)
{

}

} // namespace ComprehendMedical
} // namespace QtAws
