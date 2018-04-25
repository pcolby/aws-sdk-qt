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
