/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
