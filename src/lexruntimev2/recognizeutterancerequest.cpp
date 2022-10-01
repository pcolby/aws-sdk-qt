// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
