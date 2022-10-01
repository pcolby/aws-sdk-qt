// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
