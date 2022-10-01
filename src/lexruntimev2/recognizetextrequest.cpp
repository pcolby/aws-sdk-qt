// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
