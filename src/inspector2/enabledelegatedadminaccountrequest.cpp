// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
