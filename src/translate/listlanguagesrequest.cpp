// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
