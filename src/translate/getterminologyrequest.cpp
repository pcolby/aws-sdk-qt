/*
    Copyright 2013-2019 Paul Colby

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

#include "getterminologyrequest.h"
#include "getterminologyrequest_p.h"
#include "getterminologyresponse.h"
#include "translaterequest_p.h"

namespace QtAws {
namespace Translate {

/*!
 * \class QtAws::Translate::GetTerminologyRequest
 * \brief The GetTerminologyRequest class provides an interface for Translate GetTerminology requests.
 *
 * \inmodule QtAwsTranslate
 *
 *  Provides translation between one source language and another of the same set of
 *
 * \sa TranslateClient::getTerminology
 */

/*!
 * Constructs a copy of \a other.
 */
GetTerminologyRequest::GetTerminologyRequest(const GetTerminologyRequest &other)
    : TranslateRequest(new GetTerminologyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetTerminologyRequest object.
 */
GetTerminologyRequest::GetTerminologyRequest()
    : TranslateRequest(new GetTerminologyRequestPrivate(TranslateRequest::GetTerminologyAction, this))
{

}

/*!
 * \reimp
 */
bool GetTerminologyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetTerminologyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetTerminologyRequest::response(QNetworkReply * const reply) const
{
    return new GetTerminologyResponse(*this, reply);
}

/*!
 * \class QtAws::Translate::GetTerminologyRequestPrivate
 * \brief The GetTerminologyRequestPrivate class provides private implementation for GetTerminologyRequest.
 * \internal
 *
 * \inmodule QtAwsTranslate
 */

/*!
 * Constructs a GetTerminologyRequestPrivate object for Translate \a action,
 * with public implementation \a q.
 */
GetTerminologyRequestPrivate::GetTerminologyRequestPrivate(
    const TranslateRequest::Action action, GetTerminologyRequest * const q)
    : TranslateRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetTerminologyRequest
 * class' copy constructor.
 */
GetTerminologyRequestPrivate::GetTerminologyRequestPrivate(
    const GetTerminologyRequestPrivate &other, GetTerminologyRequest * const q)
    : TranslateRequestPrivate(other, q)
{

}

} // namespace Translate
} // namespace QtAws
