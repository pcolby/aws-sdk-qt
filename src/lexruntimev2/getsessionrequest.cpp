// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsessionrequest.h"
#include "getsessionrequest_p.h"
#include "getsessionresponse.h"
#include "lexruntimev2request_p.h"

namespace QtAws {
namespace LexRuntimeV2 {

/*!
 * \class QtAws::LexRuntimeV2::GetSessionRequest
 * \brief The GetSessionRequest class provides an interface for LexRuntimeV2 GetSession requests.
 *
 * \inmodule QtAwsLexRuntimeV2
 *
 *
 * \sa LexRuntimeV2Client::getSession
 */

/*!
 * Constructs a copy of \a other.
 */
GetSessionRequest::GetSessionRequest(const GetSessionRequest &other)
    : LexRuntimeV2Request(new GetSessionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSessionRequest object.
 */
GetSessionRequest::GetSessionRequest()
    : LexRuntimeV2Request(new GetSessionRequestPrivate(LexRuntimeV2Request::GetSessionAction, this))
{

}

/*!
 * \reimp
 */
bool GetSessionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSessionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSessionRequest::response(QNetworkReply * const reply) const
{
    return new GetSessionResponse(*this, reply);
}

/*!
 * \class QtAws::LexRuntimeV2::GetSessionRequestPrivate
 * \brief The GetSessionRequestPrivate class provides private implementation for GetSessionRequest.
 * \internal
 *
 * \inmodule QtAwsLexRuntimeV2
 */

/*!
 * Constructs a GetSessionRequestPrivate object for LexRuntimeV2 \a action,
 * with public implementation \a q.
 */
GetSessionRequestPrivate::GetSessionRequestPrivate(
    const LexRuntimeV2Request::Action action, GetSessionRequest * const q)
    : LexRuntimeV2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSessionRequest
 * class' copy constructor.
 */
GetSessionRequestPrivate::GetSessionRequestPrivate(
    const GetSessionRequestPrivate &other, GetSessionRequest * const q)
    : LexRuntimeV2RequestPrivate(other, q)
{

}

} // namespace LexRuntimeV2
} // namespace QtAws
