// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "translatetextrequest.h"
#include "translatetextrequest_p.h"
#include "translatetextresponse.h"
#include "translaterequest_p.h"

namespace QtAws {
namespace Translate {

/*!
 * \class QtAws::Translate::TranslateTextRequest
 * \brief The TranslateTextRequest class provides an interface for Translate TranslateText requests.
 *
 * \inmodule QtAwsTranslate
 *
 *  Provides translation between one source language and another of the same set of
 *
 * \sa TranslateClient::translateText
 */

/*!
 * Constructs a copy of \a other.
 */
TranslateTextRequest::TranslateTextRequest(const TranslateTextRequest &other)
    : TranslateRequest(new TranslateTextRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a TranslateTextRequest object.
 */
TranslateTextRequest::TranslateTextRequest()
    : TranslateRequest(new TranslateTextRequestPrivate(TranslateRequest::TranslateTextAction, this))
{

}

/*!
 * \reimp
 */
bool TranslateTextRequest::isValid() const
{
    return false;
}


/*!
 * Returns a TranslateTextResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * TranslateTextRequest::response(QNetworkReply * const reply) const
{
    return new TranslateTextResponse(*this, reply);
}

/*!
 * \class QtAws::Translate::TranslateTextRequestPrivate
 * \brief The TranslateTextRequestPrivate class provides private implementation for TranslateTextRequest.
 * \internal
 *
 * \inmodule QtAwsTranslate
 */

/*!
 * Constructs a TranslateTextRequestPrivate object for Translate \a action,
 * with public implementation \a q.
 */
TranslateTextRequestPrivate::TranslateTextRequestPrivate(
    const TranslateRequest::Action action, TranslateTextRequest * const q)
    : TranslateRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the TranslateTextRequest
 * class' copy constructor.
 */
TranslateTextRequestPrivate::TranslateTextRequestPrivate(
    const TranslateTextRequestPrivate &other, TranslateTextRequest * const q)
    : TranslateRequestPrivate(other, q)
{

}

} // namespace Translate
} // namespace QtAws
