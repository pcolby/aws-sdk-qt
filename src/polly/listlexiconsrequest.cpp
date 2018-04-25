/*
    Copyright 2013-2018 Paul Colby

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

#include "listlexiconsrequest.h"
#include "listlexiconsrequest_p.h"
#include "listlexiconsresponse.h"
#include "pollyrequest_p.h"

namespace QtAws {
namespace Polly {

/*!
 * \class QtAws::Polly::ListLexiconsRequest
 * \brief The ListLexiconsRequest class provides an interface for Polly ListLexicons requests.
 *
 * \inmodule QtAwsPolly
 *
 *  Amazon Polly is a web service that makes it easy to synthesize speech from
 * 
 *  text>
 * 
 *  The Amazon Polly service provides API operations for synthesizing high-quality speech from plain text and Speech
 *  Synthesis Markup Language (SSML), along with managing pronunciations lexicons that enable you to get the best results
 *  for your application
 *
 * \sa PollyClient::listLexicons
 */

/*!
 * Constructs a copy of \a other.
 */
ListLexiconsRequest::ListLexiconsRequest(const ListLexiconsRequest &other)
    : PollyRequest(new ListLexiconsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListLexiconsRequest object.
 */
ListLexiconsRequest::ListLexiconsRequest()
    : PollyRequest(new ListLexiconsRequestPrivate(PollyRequest::ListLexiconsAction, this))
{

}

/*!
 * \reimp
 */
bool ListLexiconsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListLexiconsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListLexiconsRequest::response(QNetworkReply * const reply) const
{
    return new ListLexiconsResponse(*this, reply);
}

/*!
 * \class QtAws::Polly::ListLexiconsRequestPrivate
 * \brief The ListLexiconsRequestPrivate class provides private implementation for ListLexiconsRequest.
 * \internal
 *
 * \inmodule QtAwsPolly
 */

/*!
 * Constructs a ListLexiconsRequestPrivate object for Polly \a action,
 * with public implementation \a q.
 */
ListLexiconsRequestPrivate::ListLexiconsRequestPrivate(
    const PollyRequest::Action action, ListLexiconsRequest * const q)
    : PollyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListLexiconsRequest
 * class' copy constructor.
 */
ListLexiconsRequestPrivate::ListLexiconsRequestPrivate(
    const ListLexiconsRequestPrivate &other, ListLexiconsRequest * const q)
    : PollyRequestPrivate(other, q)
{

}

} // namespace Polly
} // namespace QtAws
