// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associateadminaccountrequest.h"
#include "associateadminaccountrequest_p.h"
#include "associateadminaccountresponse.h"
#include "fmsrequest_p.h"

namespace QtAws {
namespace Fms {

/*!
 * \class QtAws::Fms::AssociateAdminAccountRequest
 * \brief The AssociateAdminAccountRequest class provides an interface for Fms AssociateAdminAccount requests.
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
 * \sa FmsClient::associateAdminAccount
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateAdminAccountRequest::AssociateAdminAccountRequest(const AssociateAdminAccountRequest &other)
    : FmsRequest(new AssociateAdminAccountRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateAdminAccountRequest object.
 */
AssociateAdminAccountRequest::AssociateAdminAccountRequest()
    : FmsRequest(new AssociateAdminAccountRequestPrivate(FmsRequest::AssociateAdminAccountAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateAdminAccountRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateAdminAccountResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateAdminAccountRequest::response(QNetworkReply * const reply) const
{
    return new AssociateAdminAccountResponse(*this, reply);
}

/*!
 * \class QtAws::Fms::AssociateAdminAccountRequestPrivate
 * \brief The AssociateAdminAccountRequestPrivate class provides private implementation for AssociateAdminAccountRequest.
 * \internal
 *
 * \inmodule QtAwsFms
 */

/*!
 * Constructs a AssociateAdminAccountRequestPrivate object for Fms \a action,
 * with public implementation \a q.
 */
AssociateAdminAccountRequestPrivate::AssociateAdminAccountRequestPrivate(
    const FmsRequest::Action action, AssociateAdminAccountRequest * const q)
    : FmsRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateAdminAccountRequest
 * class' copy constructor.
 */
AssociateAdminAccountRequestPrivate::AssociateAdminAccountRequestPrivate(
    const AssociateAdminAccountRequestPrivate &other, AssociateAdminAccountRequest * const q)
    : FmsRequestPrivate(other, q)
{

}

} // namespace Fms
} // namespace QtAws
