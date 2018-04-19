/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  Provides translation between English and one of six languages, or between one of the six languages and
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
 *
 * Constructs a TranslateTextRequestPrivate object for Translate \a action with,
 * public implementation \a q.
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
