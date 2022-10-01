// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "sendbonusrequest.h"
#include "sendbonusrequest_p.h"
#include "sendbonusresponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::SendBonusRequest
 * \brief The SendBonusRequest class provides an interface for MTurk SendBonus requests.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::sendBonus
 */

/*!
 * Constructs a copy of \a other.
 */
SendBonusRequest::SendBonusRequest(const SendBonusRequest &other)
    : MTurkRequest(new SendBonusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SendBonusRequest object.
 */
SendBonusRequest::SendBonusRequest()
    : MTurkRequest(new SendBonusRequestPrivate(MTurkRequest::SendBonusAction, this))
{

}

/*!
 * \reimp
 */
bool SendBonusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SendBonusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SendBonusRequest::response(QNetworkReply * const reply) const
{
    return new SendBonusResponse(*this, reply);
}

/*!
 * \class QtAws::MTurk::SendBonusRequestPrivate
 * \brief The SendBonusRequestPrivate class provides private implementation for SendBonusRequest.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 * Constructs a SendBonusRequestPrivate object for MTurk \a action,
 * with public implementation \a q.
 */
SendBonusRequestPrivate::SendBonusRequestPrivate(
    const MTurkRequest::Action action, SendBonusRequest * const q)
    : MTurkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SendBonusRequest
 * class' copy constructor.
 */
SendBonusRequestPrivate::SendBonusRequestPrivate(
    const SendBonusRequestPrivate &other, SendBonusRequest * const q)
    : MTurkRequestPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
