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

#include "enabledelegatedadminaccountrequest.h"
#include "enabledelegatedadminaccountrequest_p.h"
#include "enabledelegatedadminaccountresponse.h"
#include "inspector2request_p.h"

namespace QtAws {
namespace Inspector2 {

/*!
 * \class QtAws::Inspector2::EnableDelegatedAdminAccountRequest
 * \brief The EnableDelegatedAdminAccountRequest class provides an interface for Inspector2 EnableDelegatedAdminAccount requests.
 *
 * \inmodule QtAwsInspector2
 *
 *  Amazon Inspector is a vulnerability discovery service that automates continuous scanning for security vulnerabilities
 *  within your Amazon EC2 and Amazon ECR
 *
 * \sa Inspector2Client::enableDelegatedAdminAccount
 */

/*!
 * Constructs a copy of \a other.
 */
EnableDelegatedAdminAccountRequest::EnableDelegatedAdminAccountRequest(const EnableDelegatedAdminAccountRequest &other)
    : Inspector2Request(new EnableDelegatedAdminAccountRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a EnableDelegatedAdminAccountRequest object.
 */
EnableDelegatedAdminAccountRequest::EnableDelegatedAdminAccountRequest()
    : Inspector2Request(new EnableDelegatedAdminAccountRequestPrivate(Inspector2Request::EnableDelegatedAdminAccountAction, this))
{

}

/*!
 * \reimp
 */
bool EnableDelegatedAdminAccountRequest::isValid() const
{
    return false;
}


/*!
 * Returns a EnableDelegatedAdminAccountResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * EnableDelegatedAdminAccountRequest::response(QNetworkReply * const reply) const
{
    return new EnableDelegatedAdminAccountResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector2::EnableDelegatedAdminAccountRequestPrivate
 * \brief The EnableDelegatedAdminAccountRequestPrivate class provides private implementation for EnableDelegatedAdminAccountRequest.
 * \internal
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a EnableDelegatedAdminAccountRequestPrivate object for Inspector2 \a action,
 * with public implementation \a q.
 */
EnableDelegatedAdminAccountRequestPrivate::EnableDelegatedAdminAccountRequestPrivate(
    const Inspector2Request::Action action, EnableDelegatedAdminAccountRequest * const q)
    : Inspector2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the EnableDelegatedAdminAccountRequest
 * class' copy constructor.
 */
EnableDelegatedAdminAccountRequestPrivate::EnableDelegatedAdminAccountRequestPrivate(
    const EnableDelegatedAdminAccountRequestPrivate &other, EnableDelegatedAdminAccountRequest * const q)
    : Inspector2RequestPrivate(other, q)
{

}

} // namespace Inspector2
} // namespace QtAws
