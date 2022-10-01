// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listresourcesinprotectiongrouprequest.h"
#include "listresourcesinprotectiongrouprequest_p.h"
#include "listresourcesinprotectiongroupresponse.h"
#include "shieldrequest_p.h"

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::ListResourcesInProtectionGroupRequest
 * \brief The ListResourcesInProtectionGroupRequest class provides an interface for Shield ListResourcesInProtectionGroup requests.
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
 * \sa ShieldClient::listResourcesInProtectionGroup
 */

/*!
 * Constructs a copy of \a other.
 */
ListResourcesInProtectionGroupRequest::ListResourcesInProtectionGroupRequest(const ListResourcesInProtectionGroupRequest &other)
    : ShieldRequest(new ListResourcesInProtectionGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListResourcesInProtectionGroupRequest object.
 */
ListResourcesInProtectionGroupRequest::ListResourcesInProtectionGroupRequest()
    : ShieldRequest(new ListResourcesInProtectionGroupRequestPrivate(ShieldRequest::ListResourcesInProtectionGroupAction, this))
{

}

/*!
 * \reimp
 */
bool ListResourcesInProtectionGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListResourcesInProtectionGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListResourcesInProtectionGroupRequest::response(QNetworkReply * const reply) const
{
    return new ListResourcesInProtectionGroupResponse(*this, reply);
}

/*!
 * \class QtAws::Shield::ListResourcesInProtectionGroupRequestPrivate
 * \brief The ListResourcesInProtectionGroupRequestPrivate class provides private implementation for ListResourcesInProtectionGroupRequest.
 * \internal
 *
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a ListResourcesInProtectionGroupRequestPrivate object for Shield \a action,
 * with public implementation \a q.
 */
ListResourcesInProtectionGroupRequestPrivate::ListResourcesInProtectionGroupRequestPrivate(
    const ShieldRequest::Action action, ListResourcesInProtectionGroupRequest * const q)
    : ShieldRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListResourcesInProtectionGroupRequest
 * class' copy constructor.
 */
ListResourcesInProtectionGroupRequestPrivate::ListResourcesInProtectionGroupRequestPrivate(
    const ListResourcesInProtectionGroupRequestPrivate &other, ListResourcesInProtectionGroupRequest * const q)
    : ShieldRequestPrivate(other, q)
{

}

} // namespace Shield
} // namespace QtAws
