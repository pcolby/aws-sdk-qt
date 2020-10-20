/*
    Copyright 2013-2020 Paul Colby

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

#include "importterminologyrequest.h"
#include "importterminologyrequest_p.h"
#include "importterminologyresponse.h"
#include "translaterequest_p.h"

namespace QtAws {
namespace Translate {

/*!
 * \class QtAws::Translate::ImportTerminologyRequest
 * \brief The ImportTerminologyRequest class provides an interface for Translate ImportTerminology requests.
 *
 * \inmodule QtAwsTranslate
 *
 *  Provides translation between one source language and another of the same set of
 *
 * \sa TranslateClient::importTerminology
 */

/*!
 * Constructs a copy of \a other.
 */
ImportTerminologyRequest::ImportTerminologyRequest(const ImportTerminologyRequest &other)
    : TranslateRequest(new ImportTerminologyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ImportTerminologyRequest object.
 */
ImportTerminologyRequest::ImportTerminologyRequest()
    : TranslateRequest(new ImportTerminologyRequestPrivate(TranslateRequest::ImportTerminologyAction, this))
{

}

/*!
 * \reimp
 */
bool ImportTerminologyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ImportTerminologyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ImportTerminologyRequest::response(QNetworkReply * const reply) const
{
    return new ImportTerminologyResponse(*this, reply);
}

/*!
 * \class QtAws::Translate::ImportTerminologyRequestPrivate
 * \brief The ImportTerminologyRequestPrivate class provides private implementation for ImportTerminologyRequest.
 * \internal
 *
 * \inmodule QtAwsTranslate
 */

/*!
 * Constructs a ImportTerminologyRequestPrivate object for Translate \a action,
 * with public implementation \a q.
 */
ImportTerminologyRequestPrivate::ImportTerminologyRequestPrivate(
    const TranslateRequest::Action action, ImportTerminologyRequest * const q)
    : TranslateRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ImportTerminologyRequest
 * class' copy constructor.
 */
ImportTerminologyRequestPrivate::ImportTerminologyRequestPrivate(
    const ImportTerminologyRequestPrivate &other, ImportTerminologyRequest * const q)
    : TranslateRequestPrivate(other, q)
{

}

} // namespace Translate
} // namespace QtAws
