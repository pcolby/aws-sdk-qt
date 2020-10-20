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

#include "deleteterminologyrequest.h"
#include "deleteterminologyrequest_p.h"
#include "deleteterminologyresponse.h"
#include "translaterequest_p.h"

namespace QtAws {
namespace Translate {

/*!
 * \class QtAws::Translate::DeleteTerminologyRequest
 * \brief The DeleteTerminologyRequest class provides an interface for Translate DeleteTerminology requests.
 *
 * \inmodule QtAwsTranslate
 *
 *  Provides translation between one source language and another of the same set of
 *
 * \sa TranslateClient::deleteTerminology
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteTerminologyRequest::DeleteTerminologyRequest(const DeleteTerminologyRequest &other)
    : TranslateRequest(new DeleteTerminologyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteTerminologyRequest object.
 */
DeleteTerminologyRequest::DeleteTerminologyRequest()
    : TranslateRequest(new DeleteTerminologyRequestPrivate(TranslateRequest::DeleteTerminologyAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteTerminologyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteTerminologyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteTerminologyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteTerminologyResponse(*this, reply);
}

/*!
 * \class QtAws::Translate::DeleteTerminologyRequestPrivate
 * \brief The DeleteTerminologyRequestPrivate class provides private implementation for DeleteTerminologyRequest.
 * \internal
 *
 * \inmodule QtAwsTranslate
 */

/*!
 * Constructs a DeleteTerminologyRequestPrivate object for Translate \a action,
 * with public implementation \a q.
 */
DeleteTerminologyRequestPrivate::DeleteTerminologyRequestPrivate(
    const TranslateRequest::Action action, DeleteTerminologyRequest * const q)
    : TranslateRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteTerminologyRequest
 * class' copy constructor.
 */
DeleteTerminologyRequestPrivate::DeleteTerminologyRequestPrivate(
    const DeleteTerminologyRequestPrivate &other, DeleteTerminologyRequest * const q)
    : TranslateRequestPrivate(other, q)
{

}

} // namespace Translate
} // namespace QtAws
