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
 *  <fullname>AWS Shield Advanced</fullname>
 * 
 *  This is the <i>AWS Shield Advanced API Reference</i>. This guide is for developers who need detailed information about
 *  the AWS Shield Advanced API actions, data types, and errors. For detailed information about AWS WAF and AWS Shield
 *  Advanced features and an overview of how to use the AWS WAF and AWS Shield Advanced APIs, see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF and AWS Shield Developer
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
