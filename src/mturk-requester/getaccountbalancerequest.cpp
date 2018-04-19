/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getaccountbalancerequest.h"
#include "getaccountbalancerequest_p.h"
#include "getaccountbalanceresponse.h"
#include "mturkrequest_p.h"

namespace QtAws {
namespace MTurk {

/*!
 * \class QtAws::MTurk::GetAccountBalanceRequest
 * \brief The GetAccountBalanceRequest class provides an interface for MTurk GetAccountBalance requests.
 *
 * \inmodule QtAwsMTurk
 *
 *
 * \sa MTurkClient::getAccountBalance
 */

/*!
 * Constructs a copy of \a other.
 */
GetAccountBalanceRequest::GetAccountBalanceRequest(const GetAccountBalanceRequest &other)
    : MTurkRequest(new GetAccountBalanceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAccountBalanceRequest object.
 */
GetAccountBalanceRequest::GetAccountBalanceRequest()
    : MTurkRequest(new GetAccountBalanceRequestPrivate(MTurkRequest::GetAccountBalanceAction, this))
{

}

/*!
 * \reimp
 */
bool GetAccountBalanceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAccountBalanceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAccountBalanceRequest::response(QNetworkReply * const reply) const
{
    return new GetAccountBalanceResponse(*this, reply);
}

/*!
 * \class QtAws::MTurk::GetAccountBalanceRequestPrivate
 * \brief The GetAccountBalanceRequestPrivate class provides private implementation for GetAccountBalanceRequest.
 * \internal
 *
 * \inmodule QtAwsMTurk
 */

/*!
 *
 * Constructs a GetAccountBalanceRequestPrivate object for MTurk \a action with,
 * public implementation \a q.
 */
GetAccountBalanceRequestPrivate::GetAccountBalanceRequestPrivate(
    const MTurkRequest::Action action, GetAccountBalanceRequest * const q)
    : MTurkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAccountBalanceRequest
 * class' copy constructor.
 */
GetAccountBalanceRequestPrivate::GetAccountBalanceRequestPrivate(
    const GetAccountBalanceRequestPrivate &other, GetAccountBalanceRequest * const q)
    : MTurkRequestPrivate(other, q)
{

}

} // namespace MTurk
} // namespace QtAws
