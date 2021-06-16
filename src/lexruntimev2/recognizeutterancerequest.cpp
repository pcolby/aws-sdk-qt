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

#include "recognizeutterancerequest.h"
#include "recognizeutterancerequest_p.h"
#include "recognizeutteranceresponse.h"
#include "lexruntimev2request_p.h"

namespace QtAws {
namespace LexRuntimeV2 {

/*!
 * \class QtAws::LexRuntimeV2::RecognizeUtteranceRequest
 * \brief The RecognizeUtteranceRequest class provides an interface for LexRuntimeV2 RecognizeUtterance requests.
 *
 * \inmodule QtAwsLexRuntimeV2
 *
 *
 * \sa LexRuntimeV2Client::recognizeUtterance
 */

/*!
 * Constructs a copy of \a other.
 */
RecognizeUtteranceRequest::RecognizeUtteranceRequest(const RecognizeUtteranceRequest &other)
    : LexRuntimeV2Request(new RecognizeUtteranceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RecognizeUtteranceRequest object.
 */
RecognizeUtteranceRequest::RecognizeUtteranceRequest()
    : LexRuntimeV2Request(new RecognizeUtteranceRequestPrivate(LexRuntimeV2Request::RecognizeUtteranceAction, this))
{

}

/*!
 * \reimp
 */
bool RecognizeUtteranceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RecognizeUtteranceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RecognizeUtteranceRequest::response(QNetworkReply * const reply) const
{
    return new RecognizeUtteranceResponse(*this, reply);
}

/*!
 * \class QtAws::LexRuntimeV2::RecognizeUtteranceRequestPrivate
 * \brief The RecognizeUtteranceRequestPrivate class provides private implementation for RecognizeUtteranceRequest.
 * \internal
 *
 * \inmodule QtAwsLexRuntimeV2
 */

/*!
 * Constructs a RecognizeUtteranceRequestPrivate object for LexRuntimeV2 \a action,
 * with public implementation \a q.
 */
RecognizeUtteranceRequestPrivate::RecognizeUtteranceRequestPrivate(
    const LexRuntimeV2Request::Action action, RecognizeUtteranceRequest * const q)
    : LexRuntimeV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RecognizeUtteranceRequest
 * class' copy constructor.
 */
RecognizeUtteranceRequestPrivate::RecognizeUtteranceRequestPrivate(
    const RecognizeUtteranceRequestPrivate &other, RecognizeUtteranceRequest * const q)
    : LexRuntimeV2RequestPrivate(other, q)
{

}

} // namespace LexRuntimeV2
} // namespace QtAws
