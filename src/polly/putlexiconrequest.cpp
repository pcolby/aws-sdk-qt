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

#include "putlexiconrequest.h"
#include "putlexiconrequest_p.h"
#include "putlexiconresponse.h"
#include "pollyrequest_p.h"

namespace QtAws {
namespace Polly {

/*!
 * \class QtAws::Polly::PutLexiconRequest
 * \brief The PutLexiconRequest class provides an interface for Polly PutLexicon requests.
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
 * \sa PollyClient::putLexicon
 */

/*!
 * Constructs a copy of \a other.
 */
PutLexiconRequest::PutLexiconRequest(const PutLexiconRequest &other)
    : PollyRequest(new PutLexiconRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutLexiconRequest object.
 */
PutLexiconRequest::PutLexiconRequest()
    : PollyRequest(new PutLexiconRequestPrivate(PollyRequest::PutLexiconAction, this))
{

}

/*!
 * \reimp
 */
bool PutLexiconRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutLexiconResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutLexiconRequest::response(QNetworkReply * const reply) const
{
    return new PutLexiconResponse(*this, reply);
}

/*!
 * \class QtAws::Polly::PutLexiconRequestPrivate
 * \brief The PutLexiconRequestPrivate class provides private implementation for PutLexiconRequest.
 * \internal
 *
 * \inmodule QtAwsPolly
 */

/*!
 * Constructs a PutLexiconRequestPrivate object for Polly \a action,
 * with public implementation \a q.
 */
PutLexiconRequestPrivate::PutLexiconRequestPrivate(
    const PollyRequest::Action action, PutLexiconRequest * const q)
    : PollyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutLexiconRequest
 * class' copy constructor.
 */
PutLexiconRequestPrivate::PutLexiconRequestPrivate(
    const PutLexiconRequestPrivate &other, PutLexiconRequest * const q)
    : PollyRequestPrivate(other, q)
{

}

} // namespace Polly
} // namespace QtAws
