// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "starticd10cminferencejobrequest.h"
#include "starticd10cminferencejobrequest_p.h"
#include "starticd10cminferencejobresponse.h"
#include "comprehendmedicalrequest_p.h"

namespace QtAws {
namespace ComprehendMedical {

/*!
 * \class QtAws::ComprehendMedical::StartICD10CMInferenceJobRequest
 * \brief The StartICD10CMInferenceJobRequest class provides an interface for ComprehendMedical StartICD10CMInferenceJob requests.
 *
 * \inmodule QtAwsComprehendMedical
 *
 *  Comprehend Medical; extracts structured information from unstructured clinical text. Use these actions to gain insight
 *  in your documents.
 *
 * \sa ComprehendMedicalClient::startICD10CMInferenceJob
 */

/*!
 * Constructs a copy of \a other.
 */
StartICD10CMInferenceJobRequest::StartICD10CMInferenceJobRequest(const StartICD10CMInferenceJobRequest &other)
    : ComprehendMedicalRequest(new StartICD10CMInferenceJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StartICD10CMInferenceJobRequest object.
 */
StartICD10CMInferenceJobRequest::StartICD10CMInferenceJobRequest()
    : ComprehendMedicalRequest(new StartICD10CMInferenceJobRequestPrivate(ComprehendMedicalRequest::StartICD10CMInferenceJobAction, this))
{

}

/*!
 * \reimp
 */
bool StartICD10CMInferenceJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StartICD10CMInferenceJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StartICD10CMInferenceJobRequest::response(QNetworkReply * const reply) const
{
    return new StartICD10CMInferenceJobResponse(*this, reply);
}

/*!
 * \class QtAws::ComprehendMedical::StartICD10CMInferenceJobRequestPrivate
 * \brief The StartICD10CMInferenceJobRequestPrivate class provides private implementation for StartICD10CMInferenceJobRequest.
 * \internal
 *
 * \inmodule QtAwsComprehendMedical
 */

/*!
 * Constructs a StartICD10CMInferenceJobRequestPrivate object for ComprehendMedical \a action,
 * with public implementation \a q.
 */
StartICD10CMInferenceJobRequestPrivate::StartICD10CMInferenceJobRequestPrivate(
    const ComprehendMedicalRequest::Action action, StartICD10CMInferenceJobRequest * const q)
    : ComprehendMedicalRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StartICD10CMInferenceJobRequest
 * class' copy constructor.
 */
StartICD10CMInferenceJobRequestPrivate::StartICD10CMInferenceJobRequestPrivate(
    const StartICD10CMInferenceJobRequestPrivate &other, StartICD10CMInferenceJobRequest * const q)
    : ComprehendMedicalRequestPrivate(other, q)
{

}

} // namespace ComprehendMedical
} // namespace QtAws
