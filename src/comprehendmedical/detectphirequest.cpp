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

#include "detectphirequest.h"
#include "detectphirequest_p.h"
#include "detectphiresponse.h"
#include "comprehendmedicalrequest_p.h"

namespace QtAws {
namespace ComprehendMedical {

/*!
 * \class QtAws::ComprehendMedical::DetectPHIRequest
 * \brief The DetectPHIRequest class provides an interface for ComprehendMedical DetectPHI requests.
 *
 * \inmodule QtAwsComprehendMedical
 *
 *  Comprehend Medical extracts structured information from unstructured clinical text. Use these actions to gain insight in
 *  your documents.
 *
 * \sa ComprehendMedicalClient::detectPHI
 */

/*!
 * Constructs a copy of \a other.
 */
DetectPHIRequest::DetectPHIRequest(const DetectPHIRequest &other)
    : ComprehendMedicalRequest(new DetectPHIRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DetectPHIRequest object.
 */
DetectPHIRequest::DetectPHIRequest()
    : ComprehendMedicalRequest(new DetectPHIRequestPrivate(ComprehendMedicalRequest::DetectPHIAction, this))
{

}

/*!
 * \reimp
 */
bool DetectPHIRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DetectPHIResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DetectPHIRequest::response(QNetworkReply * const reply) const
{
    return new DetectPHIResponse(*this, reply);
}

/*!
 * \class QtAws::ComprehendMedical::DetectPHIRequestPrivate
 * \brief The DetectPHIRequestPrivate class provides private implementation for DetectPHIRequest.
 * \internal
 *
 * \inmodule QtAwsComprehendMedical
 */

/*!
 * Constructs a DetectPHIRequestPrivate object for ComprehendMedical \a action,
 * with public implementation \a q.
 */
DetectPHIRequestPrivate::DetectPHIRequestPrivate(
    const ComprehendMedicalRequest::Action action, DetectPHIRequest * const q)
    : ComprehendMedicalRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DetectPHIRequest
 * class' copy constructor.
 */
DetectPHIRequestPrivate::DetectPHIRequestPrivate(
    const DetectPHIRequestPrivate &other, DetectPHIRequest * const q)
    : ComprehendMedicalRequestPrivate(other, q)
{

}

} // namespace ComprehendMedical
} // namespace QtAws
