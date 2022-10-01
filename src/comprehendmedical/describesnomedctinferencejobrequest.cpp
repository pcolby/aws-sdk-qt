// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "describesnomedctinferencejobrequest.h"
#include "describesnomedctinferencejobrequest_p.h"
#include "describesnomedctinferencejobresponse.h"
#include "comprehendmedicalrequest_p.h"

namespace QtAws {
namespace ComprehendMedical {

/*!
 * \class QtAws::ComprehendMedical::DescribeSNOMEDCTInferenceJobRequest
 * \brief The DescribeSNOMEDCTInferenceJobRequest class provides an interface for ComprehendMedical DescribeSNOMEDCTInferenceJob requests.
 *
 * \inmodule QtAwsComprehendMedical
 *
 *  Comprehend Medical; extracts structured information from unstructured clinical text. Use these actions to gain insight
 *  in your documents.
 *
 * \sa ComprehendMedicalClient::describeSNOMEDCTInferenceJob
 */

/*!
 * Constructs a copy of \a other.
 */
DescribeSNOMEDCTInferenceJobRequest::DescribeSNOMEDCTInferenceJobRequest(const DescribeSNOMEDCTInferenceJobRequest &other)
    : ComprehendMedicalRequest(new DescribeSNOMEDCTInferenceJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DescribeSNOMEDCTInferenceJobRequest object.
 */
DescribeSNOMEDCTInferenceJobRequest::DescribeSNOMEDCTInferenceJobRequest()
    : ComprehendMedicalRequest(new DescribeSNOMEDCTInferenceJobRequestPrivate(ComprehendMedicalRequest::DescribeSNOMEDCTInferenceJobAction, this))
{

}

/*!
 * \reimp
 */
bool DescribeSNOMEDCTInferenceJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DescribeSNOMEDCTInferenceJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DescribeSNOMEDCTInferenceJobRequest::response(QNetworkReply * const reply) const
{
    return new DescribeSNOMEDCTInferenceJobResponse(*this, reply);
}

/*!
 * \class QtAws::ComprehendMedical::DescribeSNOMEDCTInferenceJobRequestPrivate
 * \brief The DescribeSNOMEDCTInferenceJobRequestPrivate class provides private implementation for DescribeSNOMEDCTInferenceJobRequest.
 * \internal
 *
 * \inmodule QtAwsComprehendMedical
 */

/*!
 * Constructs a DescribeSNOMEDCTInferenceJobRequestPrivate object for ComprehendMedical \a action,
 * with public implementation \a q.
 */
DescribeSNOMEDCTInferenceJobRequestPrivate::DescribeSNOMEDCTInferenceJobRequestPrivate(
    const ComprehendMedicalRequest::Action action, DescribeSNOMEDCTInferenceJobRequest * const q)
    : ComprehendMedicalRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DescribeSNOMEDCTInferenceJobRequest
 * class' copy constructor.
 */
DescribeSNOMEDCTInferenceJobRequestPrivate::DescribeSNOMEDCTInferenceJobRequestPrivate(
    const DescribeSNOMEDCTInferenceJobRequestPrivate &other, DescribeSNOMEDCTInferenceJobRequest * const q)
    : ComprehendMedicalRequestPrivate(other, q)
{

}

} // namespace ComprehendMedical
} // namespace QtAws
