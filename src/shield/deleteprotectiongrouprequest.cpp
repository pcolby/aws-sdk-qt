// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Shield Advanced</fullname>
 * 
 *  This is the <i>Shield Advanced API Reference</i>. This guide is for developers who need detailed information about the
 *  Shield Advanced API actions, data types, and errors. For detailed information about WAF and Shield Advanced features and
 *  an overview of how to use the WAF and Shield Advanced APIs, see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/">WAF and Shield Developer
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
