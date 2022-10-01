// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociateadminaccountrequest.h"
#include "disassociateadminaccountrequest_p.h"
#include "disassociateadminaccountresponse.h"
#include "fmsrequest_p.h"

namespace QtAws {
namespace Fms {

/*!
 * \class QtAws::Fms::DisassociateAdminAccountRequest
 * \brief The DisassociateAdminAccountRequest class provides an interface for Fms DisassociateAdminAccount requests.
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
 * \sa FmsClient::disassociateAdminAccount
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateAdminAccountRequest::DisassociateAdminAccountRequest(const DisassociateAdminAccountRequest &other)
    : FmsRequest(new DisassociateAdminAccountRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateAdminAccountRequest object.
 */
DisassociateAdminAccountRequest::DisassociateAdminAccountRequest()
    : FmsRequest(new DisassociateAdminAccountRequestPrivate(FmsRequest::DisassociateAdminAccountAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateAdminAccountRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateAdminAccountResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateAdminAccountRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateAdminAccountResponse(*this, reply);
}

/*!
 * \class QtAws::Fms::DisassociateAdminAccountRequestPrivate
 * \brief The DisassociateAdminAccountRequestPrivate class provides private implementation for DisassociateAdminAccountRequest.
 * \internal
 *
 * \inmodule QtAwsFms
 */

/*!
 * Constructs a DisassociateAdminAccountRequestPrivate object for Fms \a action,
 * with public implementation \a q.
 */
DisassociateAdminAccountRequestPrivate::DisassociateAdminAccountRequestPrivate(
    const FmsRequest::Action action, DisassociateAdminAccountRequest * const q)
    : FmsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateAdminAccountRequest
 * class' copy constructor.
 */
DisassociateAdminAccountRequestPrivate::DisassociateAdminAccountRequestPrivate(
    const DisassociateAdminAccountRequestPrivate &other, DisassociateAdminAccountRequest * const q)
    : FmsRequestPrivate(other, q)
{

}

} // namespace Fms
} // namespace QtAws
