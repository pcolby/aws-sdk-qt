// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getadminaccountrequest.h"
#include "getadminaccountrequest_p.h"
#include "getadminaccountresponse.h"
#include "fmsrequest_p.h"

namespace QtAws {
namespace Fms {

/*!
 * \class QtAws::Fms::GetAdminAccountRequest
 * \brief The GetAdminAccountRequest class provides an interface for Fms GetAdminAccount requests.
 *
 * \inmodule QtAwsFms
 *
 *  This is the <i>Firewall Manager API Reference</i>. This guide is for developers who need detailed information about the
 *  Firewall Manager API actions, data types, and errors. For detailed information about Firewall Manager features, see the
 *  <a href="https://docs.aws.amazon.com/waf/latest/developerguide/fms-chapter.html">Firewall Manager Developer
 * 
 *  Guide</a>>
 * 
 *  Some API actions require explicit resource permissions. For information, see the developer guide topic <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/fms-api-permissions-ref.html">Firewall Manager required
 *  permissions for API actions</a>.
 *
 * \sa FmsClient::getAdminAccount
 */

/*!
 * Constructs a copy of \a other.
 */
GetAdminAccountRequest::GetAdminAccountRequest(const GetAdminAccountRequest &other)
    : FmsRequest(new GetAdminAccountRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAdminAccountRequest object.
 */
GetAdminAccountRequest::GetAdminAccountRequest()
    : FmsRequest(new GetAdminAccountRequestPrivate(FmsRequest::GetAdminAccountAction, this))
{

}

/*!
 * \reimp
 */
bool GetAdminAccountRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAdminAccountResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAdminAccountRequest::response(QNetworkReply * const reply) const
{
    return new GetAdminAccountResponse(*this, reply);
}

/*!
 * \class QtAws::Fms::GetAdminAccountRequestPrivate
 * \brief The GetAdminAccountRequestPrivate class provides private implementation for GetAdminAccountRequest.
 * \internal
 *
 * \inmodule QtAwsFms
 */

/*!
 * Constructs a GetAdminAccountRequestPrivate object for Fms \a action,
 * with public implementation \a q.
 */
GetAdminAccountRequestPrivate::GetAdminAccountRequestPrivate(
    const FmsRequest::Action action, GetAdminAccountRequest * const q)
    : FmsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAdminAccountRequest
 * class' copy constructor.
 */
GetAdminAccountRequestPrivate::GetAdminAccountRequestPrivate(
    const GetAdminAccountRequestPrivate &other, GetAdminAccountRequest * const q)
    : FmsRequestPrivate(other, q)
{

}

} // namespace Fms
} // namespace QtAws
