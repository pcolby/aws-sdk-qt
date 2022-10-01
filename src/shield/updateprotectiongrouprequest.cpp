// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateprotectiongrouprequest.h"
#include "updateprotectiongrouprequest_p.h"
#include "updateprotectiongroupresponse.h"
#include "shieldrequest_p.h"

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::UpdateProtectionGroupRequest
 * \brief The UpdateProtectionGroupRequest class provides an interface for Shield UpdateProtectionGroup requests.
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
 * \sa ShieldClient::updateProtectionGroup
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateProtectionGroupRequest::UpdateProtectionGroupRequest(const UpdateProtectionGroupRequest &other)
    : ShieldRequest(new UpdateProtectionGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateProtectionGroupRequest object.
 */
UpdateProtectionGroupRequest::UpdateProtectionGroupRequest()
    : ShieldRequest(new UpdateProtectionGroupRequestPrivate(ShieldRequest::UpdateProtectionGroupAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateProtectionGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateProtectionGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateProtectionGroupRequest::response(QNetworkReply * const reply) const
{
    return new UpdateProtectionGroupResponse(*this, reply);
}

/*!
 * \class QtAws::Shield::UpdateProtectionGroupRequestPrivate
 * \brief The UpdateProtectionGroupRequestPrivate class provides private implementation for UpdateProtectionGroupRequest.
 * \internal
 *
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a UpdateProtectionGroupRequestPrivate object for Shield \a action,
 * with public implementation \a q.
 */
UpdateProtectionGroupRequestPrivate::UpdateProtectionGroupRequestPrivate(
    const ShieldRequest::Action action, UpdateProtectionGroupRequest * const q)
    : ShieldRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateProtectionGroupRequest
 * class' copy constructor.
 */
UpdateProtectionGroupRequestPrivate::UpdateProtectionGroupRequestPrivate(
    const UpdateProtectionGroupRequestPrivate &other, UpdateProtectionGroupRequest * const q)
    : ShieldRequestPrivate(other, q)
{

}

} // namespace Shield
} // namespace QtAws
