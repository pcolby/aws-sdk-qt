// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "inferrxnormrequest.h"
#include "inferrxnormrequest_p.h"
#include "inferrxnormresponse.h"
#include "comprehendmedicalrequest_p.h"

namespace QtAws {
namespace ComprehendMedical {

/*!
 * \class QtAws::ComprehendMedical::InferRxNormRequest
 * \brief The InferRxNormRequest class provides an interface for ComprehendMedical InferRxNorm requests.
 *
 * \inmodule QtAwsComprehendMedical
 *
 *  Comprehend Medical; extracts structured information from unstructured clinical text. Use these actions to gain insight
 *  in your documents.
 *
 * \sa ComprehendMedicalClient::inferRxNorm
 */

/*!
 * Constructs a copy of \a other.
 */
InferRxNormRequest::InferRxNormRequest(const InferRxNormRequest &other)
    : ComprehendMedicalRequest(new InferRxNormRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a InferRxNormRequest object.
 */
InferRxNormRequest::InferRxNormRequest()
    : ComprehendMedicalRequest(new InferRxNormRequestPrivate(ComprehendMedicalRequest::InferRxNormAction, this))
{

}

/*!
 * \reimp
 */
bool InferRxNormRequest::isValid() const
{
    return false;
}


/*!
 * Returns a InferRxNormResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * InferRxNormRequest::response(QNetworkReply * const reply) const
{
    return new InferRxNormResponse(*this, reply);
}

/*!
 * \class QtAws::ComprehendMedical::InferRxNormRequestPrivate
 * \brief The InferRxNormRequestPrivate class provides private implementation for InferRxNormRequest.
 * \internal
 *
 * \inmodule QtAwsComprehendMedical
 */

/*!
 * Constructs a InferRxNormRequestPrivate object for ComprehendMedical \a action,
 * with public implementation \a q.
 */
InferRxNormRequestPrivate::InferRxNormRequestPrivate(
    const ComprehendMedicalRequest::Action action, InferRxNormRequest * const q)
    : ComprehendMedicalRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the InferRxNormRequest
 * class' copy constructor.
 */
InferRxNormRequestPrivate::InferRxNormRequestPrivate(
    const InferRxNormRequestPrivate &other, InferRxNormRequest * const q)
    : ComprehendMedicalRequestPrivate(other, q)
{

}

} // namespace ComprehendMedical
} // namespace QtAws
