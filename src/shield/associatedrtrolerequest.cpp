/*
    Copyright 2013-2020 Paul Colby

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
 *  <fullname>AWS Shield Advanced</fullname>
 * 
 *  This is the <i>AWS Shield Advanced API Reference</i>. This guide is for developers who need detailed information about
 *  the AWS Shield Advanced API actions, data types, and errors. For detailed information about AWS WAF and AWS Shield
 *  Advanced features and an overview of how to use the AWS WAF and AWS Shield Advanced APIs, see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF and AWS Shield Developer
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
