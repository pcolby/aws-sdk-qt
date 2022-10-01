// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disabledelegatedadminaccountrequest.h"
#include "disabledelegatedadminaccountrequest_p.h"
#include "disabledelegatedadminaccountresponse.h"
#include "inspector2request_p.h"

namespace QtAws {
namespace Inspector2 {

/*!
 * \class QtAws::Inspector2::DisableDelegatedAdminAccountRequest
 * \brief The DisableDelegatedAdminAccountRequest class provides an interface for Inspector2 DisableDelegatedAdminAccount requests.
 *
 * \inmodule QtAwsInspector2
 *
 *  Amazon Inspector is a vulnerability discovery service that automates continuous scanning for security vulnerabilities
 *  within your Amazon EC2 and Amazon ECR
 *
 * \sa Inspector2Client::disableDelegatedAdminAccount
 */

/*!
 * Constructs a copy of \a other.
 */
DisableDelegatedAdminAccountRequest::DisableDelegatedAdminAccountRequest(const DisableDelegatedAdminAccountRequest &other)
    : Inspector2Request(new DisableDelegatedAdminAccountRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisableDelegatedAdminAccountRequest object.
 */
DisableDelegatedAdminAccountRequest::DisableDelegatedAdminAccountRequest()
    : Inspector2Request(new DisableDelegatedAdminAccountRequestPrivate(Inspector2Request::DisableDelegatedAdminAccountAction, this))
{

}

/*!
 * \reimp
 */
bool DisableDelegatedAdminAccountRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisableDelegatedAdminAccountResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisableDelegatedAdminAccountRequest::response(QNetworkReply * const reply) const
{
    return new DisableDelegatedAdminAccountResponse(*this, reply);
}

/*!
 * \class QtAws::Inspector2::DisableDelegatedAdminAccountRequestPrivate
 * \brief The DisableDelegatedAdminAccountRequestPrivate class provides private implementation for DisableDelegatedAdminAccountRequest.
 * \internal
 *
 * \inmodule QtAwsInspector2
 */

/*!
 * Constructs a DisableDelegatedAdminAccountRequestPrivate object for Inspector2 \a action,
 * with public implementation \a q.
 */
DisableDelegatedAdminAccountRequestPrivate::DisableDelegatedAdminAccountRequestPrivate(
    const Inspector2Request::Action action, DisableDelegatedAdminAccountRequest * const q)
    : Inspector2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisableDelegatedAdminAccountRequest
 * class' copy constructor.
 */
DisableDelegatedAdminAccountRequestPrivate::DisableDelegatedAdminAccountRequestPrivate(
    const DisableDelegatedAdminAccountRequestPrivate &other, DisableDelegatedAdminAccountRequest * const q)
    : Inspector2RequestPrivate(other, q)
{

}

} // namespace Inspector2
} // namespace QtAws
