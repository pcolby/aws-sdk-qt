// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associatedrtrolerequest.h"
#include "associatedrtrolerequest_p.h"
#include "associatedrtroleresponse.h"
#include "shieldrequest_p.h"

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::AssociateDRTRoleRequest
 * \brief The AssociateDRTRoleRequest class provides an interface for Shield AssociateDRTRole requests.
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
 * \sa ShieldClient::associateDRTRole
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateDRTRoleRequest::AssociateDRTRoleRequest(const AssociateDRTRoleRequest &other)
    : ShieldRequest(new AssociateDRTRoleRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateDRTRoleRequest object.
 */
AssociateDRTRoleRequest::AssociateDRTRoleRequest()
    : ShieldRequest(new AssociateDRTRoleRequestPrivate(ShieldRequest::AssociateDRTRoleAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateDRTRoleRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateDRTRoleResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateDRTRoleRequest::response(QNetworkReply * const reply) const
{
    return new AssociateDRTRoleResponse(*this, reply);
}

/*!
 * \class QtAws::Shield::AssociateDRTRoleRequestPrivate
 * \brief The AssociateDRTRoleRequestPrivate class provides private implementation for AssociateDRTRoleRequest.
 * \internal
 *
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a AssociateDRTRoleRequestPrivate object for Shield \a action,
 * with public implementation \a q.
 */
AssociateDRTRoleRequestPrivate::AssociateDRTRoleRequestPrivate(
    const ShieldRequest::Action action, AssociateDRTRoleRequest * const q)
    : ShieldRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateDRTRoleRequest
 * class' copy constructor.
 */
AssociateDRTRoleRequestPrivate::AssociateDRTRoleRequestPrivate(
    const AssociateDRTRoleRequestPrivate &other, AssociateDRTRoleRequest * const q)
    : ShieldRequestPrivate(other, q)
{

}

} // namespace Shield
} // namespace QtAws
