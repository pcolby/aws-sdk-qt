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

#include "listlanguagesrequest.h"
#include "listlanguagesrequest_p.h"
#include "listlanguagesresponse.h"
#include "translaterequest_p.h"

namespace QtAws {
namespace Translate {

/*!
 * \class QtAws::Translate::ListLanguagesRequest
 * \brief The ListLanguagesRequest class provides an interface for Translate ListLanguages requests.
 *
 * \inmodule QtAwsTranslate
 *
 *  Provides translation between one source language and another of the same set of
 *
 * \sa TranslateClient::listLanguages
 */

/*!
 * Constructs a copy of \a other.
 */
ListLanguagesRequest::ListLanguagesRequest(const ListLanguagesRequest &other)
    : TranslateRequest(new ListLanguagesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListLanguagesRequest object.
 */
ListLanguagesRequest::ListLanguagesRequest()
    : TranslateRequest(new ListLanguagesRequestPrivate(TranslateRequest::ListLanguagesAction, this))
{

}

/*!
 * \reimp
 */
bool ListLanguagesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListLanguagesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListLanguagesRequest::response(QNetworkReply * const reply) const
{
    return new ListLanguagesResponse(*this, reply);
}

/*!
 * \class QtAws::Translate::ListLanguagesRequestPrivate
 * \brief The ListLanguagesRequestPrivate class provides private implementation for ListLanguagesRequest.
 * \internal
 *
 * \inmodule QtAwsTranslate
 */

/*!
 * Constructs a ListLanguagesRequestPrivate object for Translate \a action,
 * with public implementation \a q.
 */
ListLanguagesRequestPrivate::ListLanguagesRequestPrivate(
    const TranslateRequest::Action action, ListLanguagesRequest * const q)
    : TranslateRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListLanguagesRequest
 * class' copy constructor.
 */
ListLanguagesRequestPrivate::ListLanguagesRequestPrivate(
    const ListLanguagesRequestPrivate &other, ListLanguagesRequest * const q)
    : TranslateRequestPrivate(other, q)
{

}

} // namespace Translate
} // namespace QtAws
