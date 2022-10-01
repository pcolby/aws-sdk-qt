// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "infersnomedctrequest.h"
#include "infersnomedctrequest_p.h"
#include "infersnomedctresponse.h"
#include "comprehendmedicalrequest_p.h"

namespace QtAws {
namespace ComprehendMedical {

/*!
 * \class QtAws::ComprehendMedical::InferSNOMEDCTRequest
 * \brief The InferSNOMEDCTRequest class provides an interface for ComprehendMedical InferSNOMEDCT requests.
 *
 * \inmodule QtAwsComprehendMedical
 *
 *  Comprehend Medical; extracts structured information from unstructured clinical text. Use these actions to gain insight
 *  in your documents.
 *
 * \sa ComprehendMedicalClient::inferSNOMEDCT
 */

/*!
 * Constructs a copy of \a other.
 */
InferSNOMEDCTRequest::InferSNOMEDCTRequest(const InferSNOMEDCTRequest &other)
    : ComprehendMedicalRequest(new InferSNOMEDCTRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a InferSNOMEDCTRequest object.
 */
InferSNOMEDCTRequest::InferSNOMEDCTRequest()
    : ComprehendMedicalRequest(new InferSNOMEDCTRequestPrivate(ComprehendMedicalRequest::InferSNOMEDCTAction, this))
{

}

/*!
 * \reimp
 */
bool InferSNOMEDCTRequest::isValid() const
{
    return false;
}


/*!
 * Returns a InferSNOMEDCTResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * InferSNOMEDCTRequest::response(QNetworkReply * const reply) const
{
    return new InferSNOMEDCTResponse(*this, reply);
}

/*!
 * \class QtAws::ComprehendMedical::InferSNOMEDCTRequestPrivate
 * \brief The InferSNOMEDCTRequestPrivate class provides private implementation for InferSNOMEDCTRequest.
 * \internal
 *
 * \inmodule QtAwsComprehendMedical
 */

/*!
 * Constructs a InferSNOMEDCTRequestPrivate object for ComprehendMedical \a action,
 * with public implementation \a q.
 */
InferSNOMEDCTRequestPrivate::InferSNOMEDCTRequestPrivate(
    const ComprehendMedicalRequest::Action action, InferSNOMEDCTRequest * const q)
    : ComprehendMedicalRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the InferSNOMEDCTRequest
 * class' copy constructor.
 */
InferSNOMEDCTRequestPrivate::InferSNOMEDCTRequestPrivate(
    const InferSNOMEDCTRequestPrivate &other, InferSNOMEDCTRequest * const q)
    : ComprehendMedicalRequestPrivate(other, q)
{

}

} // namespace ComprehendMedical
} // namespace QtAws
