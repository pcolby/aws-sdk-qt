// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gethitrequest.h"
#include "gethitrequest_p.h"
#include "gethitresponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::GetHITRequest
 * \brief The GetHITRequest class provides an interface for MTurk GetHIT requests.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::getHIT
 */

/*!
 * Constructs a copy of \a other.
 */
GetHITRequest::GetHITRequest(const GetHITRequest &other)
    : MTurkRequest(new GetHITRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetHITRequest object.
 */
GetHITRequest::GetHITRequest()
    : MTurkRequest(new GetHITRequestPrivate(MTurkRequest::GetHITAction, this))
{

}

/*!
 * \reimp
 */
bool GetHITRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetHITResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetHITRequest::response(QNetworkReply * const reply) const
{
    return new GetHITResponse(*this, reply);
}

/*!
 * \class QtAws::MTurk::GetHITRequestPrivate
 * \brief The GetHITRequestPrivate class provides private implementation for GetHITRequest.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a GetHITRequestPrivate object for MTurk \a action,
 * with public implementation \a q.
 */
GetHITRequestPrivate::GetHITRequestPrivate(
    const MTurkRequest::Action action, GetHITRequest * const q)
    : MTurkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetHITRequest
 * class' copy constructor.
 */
GetHITRequestPrivate::GetHITRequestPrivate(
    const GetHITRequestPrivate &other, GetHITRequest * const q)
    : MTurkRequestPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
