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

#include "deletelexiconrequest.h"
#include "deletelexiconrequest_p.h"
#include "deletelexiconresponse.h"
#include "pollyrequest_p.h"

namespace QtAws {
namespace Polly {

/*!
 * \class QtAws::Polly::DeleteLexiconRequest
 * \brief The DeleteLexiconRequest class provides an interface for Polly DeleteLexicon requests.
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
 * \sa PollyClient::deleteLexicon
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteLexiconRequest::DeleteLexiconRequest(const DeleteLexiconRequest &other)
    : PollyRequest(new DeleteLexiconRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteLexiconRequest object.
 */
DeleteLexiconRequest::DeleteLexiconRequest()
    : PollyRequest(new DeleteLexiconRequestPrivate(PollyRequest::DeleteLexiconAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteLexiconRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteLexiconResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteLexiconRequest::response(QNetworkReply * const reply) const
{
    return new DeleteLexiconResponse(*this, reply);
}

/*!
 * \class QtAws::Polly::DeleteLexiconRequestPrivate
 * \brief The DeleteLexiconRequestPrivate class provides private implementation for DeleteLexiconRequest.
 * \internal
 *
 * \inmodule QtAwsPolly
 */

/*!
 * Constructs a DeleteLexiconRequestPrivate object for Polly \a action,
 * with public implementation \a q.
 */
DeleteLexiconRequestPrivate::DeleteLexiconRequestPrivate(
    const PollyRequest::Action action, DeleteLexiconRequest * const q)
    : PollyRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteLexiconRequest
 * class' copy constructor.
 */
DeleteLexiconRequestPrivate::DeleteLexiconRequestPrivate(
    const DeleteLexiconRequestPrivate &other, DeleteLexiconRequest * const q)
    : PollyRequestPrivate(other, q)
{

}

} // namespace Polly
} // namespace QtAws
