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

#include "recognizetextrequest.h"
#include "recognizetextrequest_p.h"
#include "recognizetextresponse.h"
#include "lexruntimev2request_p.h"

namespace QtAws {
namespace LexRuntimeV2 {

/*!
 * \class QtAws::LexRuntimeV2::RecognizeTextRequest
 * \brief The RecognizeTextRequest class provides an interface for LexRuntimeV2 RecognizeText requests.
 *
 * \inmodule QtAwsLexRuntimeV2
 *
 *
 * \sa LexRuntimeV2Client::recognizeText
 */

/*!
 * Constructs a copy of \a other.
 */
RecognizeTextRequest::RecognizeTextRequest(const RecognizeTextRequest &other)
    : LexRuntimeV2Request(new RecognizeTextRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RecognizeTextRequest object.
 */
RecognizeTextRequest::RecognizeTextRequest()
    : LexRuntimeV2Request(new RecognizeTextRequestPrivate(LexRuntimeV2Request::RecognizeTextAction, this))
{

}

/*!
 * \reimp
 */
bool RecognizeTextRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RecognizeTextResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RecognizeTextRequest::response(QNetworkReply * const reply) const
{
    return new RecognizeTextResponse(*this, reply);
}

/*!
 * \class QtAws::LexRuntimeV2::RecognizeTextRequestPrivate
 * \brief The RecognizeTextRequestPrivate class provides private implementation for RecognizeTextRequest.
 * \internal
 *
 * \inmodule QtAwsLexRuntimeV2
 */

/*!
 * Constructs a RecognizeTextRequestPrivate object for LexRuntimeV2 \a action,
 * with public implementation \a q.
 */
RecognizeTextRequestPrivate::RecognizeTextRequestPrivate(
    const LexRuntimeV2Request::Action action, RecognizeTextRequest * const q)
    : LexRuntimeV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RecognizeTextRequest
 * class' copy constructor.
 */
RecognizeTextRequestPrivate::RecognizeTextRequestPrivate(
    const RecognizeTextRequestPrivate &other, RecognizeTextRequest * const q)
    : LexRuntimeV2RequestPrivate(other, q)
{

}

} // namespace LexRuntimeV2
} // namespace QtAws
