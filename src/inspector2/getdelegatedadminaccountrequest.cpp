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

#include "getdelegatedadminaccountrequest.h"
#include "getdelegatedadminaccountrequest_p.h"
#include "getdelegatedadminaccountresponse.h"
#include "inspector2request_p.h"

namespace QtAws {
namespace Inspector2 {

/*!
 * \class QtAws::Inspector2::GetDelegatedAdminAccountRequest
 * \brief The GetDelegatedAdminAccountRequest class provides an interface for Inspector2 GetDelegatedAdminAccount requests.
 *
 * \inmodule QtAwsInspector2
 *
 *  Amazon Inspector is a vulnerability discovery service that automates continuous scanning for security vulnerabilities
 *  within your Amazon EC2 and Amazon ECR
 *
 * \sa Inspector2Client::getDelegatedAdminAccount
 */

/*!
 * Constructs a copy of \a other.
 */
GetDelegatedAdminAccountRequest::GetDelegatedAdminAccountRequest(const GetDelegatedAdminAccountRequest &other)
    : Inspector2Request(new GetDelegatedAdminAccountRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDelegatedAdminAccountRequest object.
 */
GetDelegatedAdminAccountRequest::GetDelegatedAdminAccountRequest()
    : Inspector2Request(new GetDelegatedAdminAccountRequestPrivate(Inspector2Request::GetDelegatedAdminAccountAction, this))
{

}

/*!
 * \reimp
 */
bool GetDelegatedAdminAccountRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDelegatedAdminAccountResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDelegatedAdminAccountRequest::response(QNetworkReply * const reply) const
{
    return new GetDelegatedAdminAccountResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector2::GetDelegatedAdminAccountRequestPrivate
 * \brief The GetDelegatedAdminAccountRequestPrivate class provides private implementation for GetDelegatedAdminAccountRequest.
 * \internal
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a GetDelegatedAdminAccountRequestPrivate object for Inspector2 \a action,
 * with public implementation \a q.
 */
GetDelegatedAdminAccountRequestPrivate::GetDelegatedAdminAccountRequestPrivate(
    const Inspector2Request::Action action, GetDelegatedAdminAccountRequest * const q)
    : Inspector2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDelegatedAdminAccountRequest
 * class' copy constructor.
 */
GetDelegatedAdminAccountRequestPrivate::GetDelegatedAdminAccountRequestPrivate(
    const GetDelegatedAdminAccountRequestPrivate &other, GetDelegatedAdminAccountRequest * const q)
    : Inspector2RequestPrivate(other, q)
{

}

} // namespace Inspector2
} // namespace QtAws
