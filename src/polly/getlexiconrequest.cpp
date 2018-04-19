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

#include "getlexiconrequest.h"
#include "getlexiconrequest_p.h"
#include "getlexiconresponse.h"
#include "pollyrequest_p.h"

namespace QtAws {
namespace Polly {

/*!
 * \class QtAws::Polly::GetLexiconRequest
 * \brief The GetLexiconRequest class provides an interface for Polly GetLexicon requests.
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
 * \sa PollyClient::getLexicon
 */

/*!
 * Constructs a copy of \a other.
 */
GetLexiconRequest::GetLexiconRequest(const GetLexiconRequest &other)
    : PollyRequest(new GetLexiconRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetLexiconRequest object.
 */
GetLexiconRequest::GetLexiconRequest()
    : PollyRequest(new GetLexiconRequestPrivate(PollyRequest::GetLexiconAction, this))
{

}

/*!
 * \reimp
 */
bool GetLexiconRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetLexiconResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetLexiconRequest::response(QNetworkReply * const reply) const
{
    return new GetLexiconResponse(*this, reply);
}

/*!
 * \class QtAws::Polly::GetLexiconRequestPrivate
 * \brief The GetLexiconRequestPrivate class provides private implementation for GetLexiconRequest.
 * \internal
 *
 * \inmodule QtAwsPolly
 */

/*!
 * Constructs a GetLexiconRequestPrivate object for Polly \a action,
 * with public implementation \a q.
 */
GetLexiconRequestPrivate::GetLexiconRequestPrivate(
    const PollyRequest::Action action, GetLexiconRequest * const q)
    : PollyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetLexiconRequest
 * class' copy constructor.
 */
GetLexiconRequestPrivate::GetLexiconRequestPrivate(
    const GetLexiconRequestPrivate &other, GetLexiconRequest * const q)
    : PollyRequestPrivate(other, q)
{

}

} // namespace Polly
} // namespace QtAws
