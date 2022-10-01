// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteprotectionrequest.h"
#include "deleteprotectionrequest_p.h"
#include "deleteprotectionresponse.h"
#include "shieldrequest_p.h"

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::DeleteProtectionRequest
 * \brief The DeleteProtectionRequest class provides an interface for Shield DeleteProtection requests.
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
 * \sa ShieldClient::deleteProtection
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteProtectionRequest::DeleteProtectionRequest(const DeleteProtectionRequest &other)
    : ShieldRequest(new DeleteProtectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteProtectionRequest object.
 */
DeleteProtectionRequest::DeleteProtectionRequest()
    : ShieldRequest(new DeleteProtectionRequestPrivate(ShieldRequest::DeleteProtectionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteProtectionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteProtectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteProtectionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteProtectionResponse(*this, reply);
}

/*!
 * \class QtAws::Shield::DeleteProtectionRequestPrivate
 * \brief The DeleteProtectionRequestPrivate class provides private implementation for DeleteProtectionRequest.
 * \internal
 *
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a DeleteProtectionRequestPrivate object for Shield \a action,
 * with public implementation \a q.
 */
DeleteProtectionRequestPrivate::DeleteProtectionRequestPrivate(
    const ShieldRequest::Action action, DeleteProtectionRequest * const q)
    : ShieldRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteProtectionRequest
 * class' copy constructor.
 */
DeleteProtectionRequestPrivate::DeleteProtectionRequestPrivate(
    const DeleteProtectionRequestPrivate &other, DeleteProtectionRequest * const q)
    : ShieldRequestPrivate(other, q)
{

}

} // namespace Shield
} // namespace QtAws
