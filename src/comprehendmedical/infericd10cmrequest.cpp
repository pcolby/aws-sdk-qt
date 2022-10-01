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

#include "infericd10cmrequest.h"
#include "infericd10cmrequest_p.h"
#include "infericd10cmresponse.h"
#include "comprehendmedicalrequest_p.h"

namespace QtAws {
namespace ComprehendMedical {

/*!
 * \class QtAws::ComprehendMedical::InferICD10CMRequest
 * \brief The InferICD10CMRequest class provides an interface for ComprehendMedical InferICD10CM requests.
 *
 * \inmodule QtAwsComprehendMedical
 *
 *  Comprehend Medical; extracts structured information from unstructured clinical text. Use these actions to gain insight
 *  in your documents.
 *
 * \sa ComprehendMedicalClient::inferICD10CM
 */

/*!
 * Constructs a copy of \a other.
 */
InferICD10CMRequest::InferICD10CMRequest(const InferICD10CMRequest &other)
    : ComprehendMedicalRequest(new InferICD10CMRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a InferICD10CMRequest object.
 */
InferICD10CMRequest::InferICD10CMRequest()
    : ComprehendMedicalRequest(new InferICD10CMRequestPrivate(ComprehendMedicalRequest::InferICD10CMAction, this))
{

}

/*!
 * \reimp
 */
bool InferICD10CMRequest::isValid() const
{
    return false;
}


/*!
 * Returns a InferICD10CMResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * InferICD10CMRequest::response(QNetworkReply * const reply) const
{
    return new InferICD10CMResponse(*this, reply);
}

/*!
 * \class QtAws::ComprehendMedical::InferICD10CMRequestPrivate
 * \brief The InferICD10CMRequestPrivate class provides private implementation for InferICD10CMRequest.
 * \internal
 *
 * \inmodule QtAwsComprehendMedical
 */

/*!
 * Constructs a InferICD10CMRequestPrivate object for ComprehendMedical \a action,
 * with public implementation \a q.
 */
InferICD10CMRequestPrivate::InferICD10CMRequestPrivate(
    const ComprehendMedicalRequest::Action action, InferICD10CMRequest * const q)
    : ComprehendMedicalRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the InferICD10CMRequest
 * class' copy constructor.
 */
InferICD10CMRequestPrivate::InferICD10CMRequestPrivate(
    const InferICD10CMRequestPrivate &other, InferICD10CMRequest * const q)
    : ComprehendMedicalRequestPrivate(other, q)
{

}

} // namespace ComprehendMedical
} // namespace QtAws
