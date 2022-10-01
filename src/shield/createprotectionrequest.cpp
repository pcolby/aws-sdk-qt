// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createprotectionrequest.h"
#include "createprotectionrequest_p.h"
#include "createprotectionresponse.h"
#include "shieldrequest_p.h"

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::CreateProtectionRequest
 * \brief The CreateProtectionRequest class provides an interface for Shield CreateProtection requests.
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
 * \sa ShieldClient::createProtection
 */

/*!
 * Constructs a copy of \a other.
 */
CreateProtectionRequest::CreateProtectionRequest(const CreateProtectionRequest &other)
    : ShieldRequest(new CreateProtectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateProtectionRequest object.
 */
CreateProtectionRequest::CreateProtectionRequest()
    : ShieldRequest(new CreateProtectionRequestPrivate(ShieldRequest::CreateProtectionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateProtectionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateProtectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateProtectionRequest::response(QNetworkReply * const reply) const
{
    return new CreateProtectionResponse(*this, reply);
}

/*!
 * \class QtAws::Shield::CreateProtectionRequestPrivate
 * \brief The CreateProtectionRequestPrivate class provides private implementation for CreateProtectionRequest.
 * \internal
 *
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a CreateProtectionRequestPrivate object for Shield \a action,
 * with public implementation \a q.
 */
CreateProtectionRequestPrivate::CreateProtectionRequestPrivate(
    const ShieldRequest::Action action, CreateProtectionRequest * const q)
    : ShieldRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateProtectionRequest
 * class' copy constructor.
 */
CreateProtectionRequestPrivate::CreateProtectionRequestPrivate(
    const CreateProtectionRequestPrivate &other, CreateProtectionRequest * const q)
    : ShieldRequestPrivate(other, q)
{

}

} // namespace Shield
} // namespace QtAws
