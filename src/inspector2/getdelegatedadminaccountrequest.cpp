// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
