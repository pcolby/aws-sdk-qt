// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
