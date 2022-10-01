// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociatedrtrolerequest.h"
#include "disassociatedrtrolerequest_p.h"
#include "disassociatedrtroleresponse.h"
#include "shieldrequest_p.h"

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::DisassociateDRTRoleRequest
 * \brief The DisassociateDRTRoleRequest class provides an interface for Shield DisassociateDRTRole requests.
 *
 * \inmodule QtAwsShield
 *
 *  <fullname>Shield Advanced</fullname>
 * 
 *  This is the <i>Shield Advanced API Reference</i>. This guide is for developers who need detailed information about the
 *  Shield Advanced API actions, data types, and errors. For detailed information about WAF and Shield Advanced features and
 *  an overview of how to use the WAF and Shield Advanced APIs, see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/">WAF and Shield Developer
 *
 * \sa ShieldClient::disassociateDRTRole
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateDRTRoleRequest::DisassociateDRTRoleRequest(const DisassociateDRTRoleRequest &other)
    : ShieldRequest(new DisassociateDRTRoleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateDRTRoleRequest object.
 */
DisassociateDRTRoleRequest::DisassociateDRTRoleRequest()
    : ShieldRequest(new DisassociateDRTRoleRequestPrivate(ShieldRequest::DisassociateDRTRoleAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateDRTRoleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateDRTRoleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateDRTRoleRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateDRTRoleResponse(*this, reply);
}

/*!
 * \class QtAws::Shield::DisassociateDRTRoleRequestPrivate
 * \brief The DisassociateDRTRoleRequestPrivate class provides private implementation for DisassociateDRTRoleRequest.
 * \internal
 *
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a DisassociateDRTRoleRequestPrivate object for Shield \a action,
 * with public implementation \a q.
 */
DisassociateDRTRoleRequestPrivate::DisassociateDRTRoleRequestPrivate(
    const ShieldRequest::Action action, DisassociateDRTRoleRequest * const q)
    : ShieldRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateDRTRoleRequest
 * class' copy constructor.
 */
DisassociateDRTRoleRequestPrivate::DisassociateDRTRoleRequestPrivate(
    const DisassociateDRTRoleRequestPrivate &other, DisassociateDRTRoleRequest * const q)
    : ShieldRequestPrivate(other, q)
{

}

} // namespace Shield
} // namespace QtAws
