// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createprotectiongrouprequest.h"
#include "createprotectiongrouprequest_p.h"
#include "createprotectiongroupresponse.h"
#include "shieldrequest_p.h"

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::CreateProtectionGroupRequest
 * \brief The CreateProtectionGroupRequest class provides an interface for Shield CreateProtectionGroup requests.
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
 * \sa ShieldClient::createProtectionGroup
 */

/*!
 * Constructs a copy of \a other.
 */
CreateProtectionGroupRequest::CreateProtectionGroupRequest(const CreateProtectionGroupRequest &other)
    : ShieldRequest(new CreateProtectionGroupRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateProtectionGroupRequest object.
 */
CreateProtectionGroupRequest::CreateProtectionGroupRequest()
    : ShieldRequest(new CreateProtectionGroupRequestPrivate(ShieldRequest::CreateProtectionGroupAction, this))
{

}

/*!
 * \reimp
 */
bool CreateProtectionGroupRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateProtectionGroupResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateProtectionGroupRequest::response(QNetworkReply * const reply) const
{
    return new CreateProtectionGroupResponse(*this, reply);
}

/*!
 * \class QtAws::Shield::CreateProtectionGroupRequestPrivate
 * \brief The CreateProtectionGroupRequestPrivate class provides private implementation for CreateProtectionGroupRequest.
 * \internal
 *
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a CreateProtectionGroupRequestPrivate object for Shield \a action,
 * with public implementation \a q.
 */
CreateProtectionGroupRequestPrivate::CreateProtectionGroupRequestPrivate(
    const ShieldRequest::Action action, CreateProtectionGroupRequest * const q)
    : ShieldRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateProtectionGroupRequest
 * class' copy constructor.
 */
CreateProtectionGroupRequestPrivate::CreateProtectionGroupRequestPrivate(
    const CreateProtectionGroupRequestPrivate &other, CreateProtectionGroupRequest * const q)
    : ShieldRequestPrivate(other, q)
{

}

} // namespace Shield
} // namespace QtAws
