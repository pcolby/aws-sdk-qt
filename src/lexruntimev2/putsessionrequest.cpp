// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putsessionrequest.h"
#include "putsessionrequest_p.h"
#include "putsessionresponse.h"
#include "lexruntimev2request_p.h"

namespace QtAws {
namespace LexRuntimeV2 {

/*!
 * \class QtAws::LexRuntimeV2::PutSessionRequest
 * \brief The PutSessionRequest class provides an interface for LexRuntimeV2 PutSession requests.
 *
 * \inmodule QtAwsLexRuntimeV2
 *
 *
 * \sa LexRuntimeV2Client::putSession
 */

/*!
 * Constructs a copy of \a other.
 */
PutSessionRequest::PutSessionRequest(const PutSessionRequest &other)
    : LexRuntimeV2Request(new PutSessionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutSessionRequest object.
 */
PutSessionRequest::PutSessionRequest()
    : LexRuntimeV2Request(new PutSessionRequestPrivate(LexRuntimeV2Request::PutSessionAction, this))
{

}

/*!
 * \reimp
 */
bool PutSessionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutSessionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutSessionRequest::response(QNetworkReply * const reply) const
{
    return new PutSessionResponse(*this, reply);
}

/*!
 * \class QtAws::LexRuntimeV2::PutSessionRequestPrivate
 * \brief The PutSessionRequestPrivate class provides private implementation for PutSessionRequest.
 * \internal
 *
 * \inmodule QtAwsLexRuntimeV2
 */

/*!
 * Constructs a PutSessionRequestPrivate object for LexRuntimeV2 \a action,
 * with public implementation \a q.
 */
PutSessionRequestPrivate::PutSessionRequestPrivate(
    const LexRuntimeV2Request::Action action, PutSessionRequest * const q)
    : LexRuntimeV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutSessionRequest
 * class' copy constructor.
 */
PutSessionRequestPrivate::PutSessionRequestPrivate(
    const PutSessionRequestPrivate &other, PutSessionRequest * const q)
    : LexRuntimeV2RequestPrivate(other, q)
{

}

} // namespace LexRuntimeV2
} // namespace QtAws
