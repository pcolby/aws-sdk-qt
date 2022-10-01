// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsessionrequest.h"
#include "getsessionrequest_p.h"
#include "getsessionresponse.h"
#include "wisdomrequest_p.h"

namespace QtAws {
namespace Wisdom {

/*!
 * \class QtAws::Wisdom::GetSessionRequest
 * \brief The GetSessionRequest class provides an interface for Wisdom GetSession requests.
 *
 * \inmodule QtAwsWisdom
 *
 *  Amazon Connect Wisdom delivers agents the information they need to solve customer issues as they're actively speaking
 *  with customers. Agents can search across connected repositories from within their agent desktop to find answers quickly.
 *  Use the Amazon Connect Wisdom APIs to create an assistant and a knowledge base, for example, or manage content by
 *  uploading custom
 *
 * \sa WisdomClient::getSession
 */

/*!
 * Constructs a copy of \a other.
 */
GetSessionRequest::GetSessionRequest(const GetSessionRequest &other)
    : WisdomRequest(new GetSessionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSessionRequest object.
 */
GetSessionRequest::GetSessionRequest()
    : WisdomRequest(new GetSessionRequestPrivate(WisdomRequest::GetSessionAction, this))
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
 * \class QtAws::Wisdom::GetSessionRequestPrivate
 * \brief The GetSessionRequestPrivate class provides private implementation for GetSessionRequest.
 * \internal
 *
 * \inmodule QtAwsWisdom
 */

/*!
 * Constructs a GetSessionRequestPrivate object for Wisdom \a action,
 * with public implementation \a q.
 */
GetSessionRequestPrivate::GetSessionRequestPrivate(
    const WisdomRequest::Action action, GetSessionRequest * const q)
    : WisdomRequestPrivate(action, q)
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
    : WisdomRequestPrivate(other, q)
{

}

} // namespace Wisdom
} // namespace QtAws
