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

#include "deleteprotectiongrouprequest.h"
#include "deleteprotectiongrouprequest_p.h"
#include "deleteprotectiongroupresponse.h"
#include "shieldrequest_p.h"

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::DeleteProtectionGroupRequest
 * \brief The DeleteProtectionGroupRequest class provides an interface for Shield DeleteProtectionGroup requests.
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
 * \sa ShieldClient::deleteProtectionGroup
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteProtectionGroupRequest::DeleteProtectionGroupRequest(const DeleteProtectionGroupRequest &other)
    : ShieldRequest(new DeleteProtectionGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteProtectionGroupRequest object.
 */
DeleteProtectionGroupRequest::DeleteProtectionGroupRequest()
    : ShieldRequest(new DeleteProtectionGroupRequestPrivate(ShieldRequest::DeleteProtectionGroupAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteProtectionGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteProtectionGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteProtectionGroupRequest::response(QNetworkReply * const reply) const
{
    return new DeleteProtectionGroupResponse(*this, reply);
}

/*!
 * \class QtAws::Shield::DeleteProtectionGroupRequestPrivate
 * \brief The DeleteProtectionGroupRequestPrivate class provides private implementation for DeleteProtectionGroupRequest.
 * \internal
 *
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a DeleteProtectionGroupRequestPrivate object for Shield \a action,
 * with public implementation \a q.
 */
DeleteProtectionGroupRequestPrivate::DeleteProtectionGroupRequestPrivate(
    const ShieldRequest::Action action, DeleteProtectionGroupRequest * const q)
    : ShieldRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteProtectionGroupRequest
 * class' copy constructor.
 */
DeleteProtectionGroupRequestPrivate::DeleteProtectionGroupRequestPrivate(
    const DeleteProtectionGroupRequestPrivate &other, DeleteProtectionGroupRequest * const q)
    : ShieldRequestPrivate(other, q)
{

}

} // namespace Shield
} // namespace QtAws
