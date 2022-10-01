// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associatehealthcheckrequest.h"
#include "associatehealthcheckrequest_p.h"
#include "associatehealthcheckresponse.h"
#include "shieldrequest_p.h"

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::AssociateHealthCheckRequest
 * \brief The AssociateHealthCheckRequest class provides an interface for Shield AssociateHealthCheck requests.
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
 * \sa ShieldClient::associateHealthCheck
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateHealthCheckRequest::AssociateHealthCheckRequest(const AssociateHealthCheckRequest &other)
    : ShieldRequest(new AssociateHealthCheckRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateHealthCheckRequest object.
 */
AssociateHealthCheckRequest::AssociateHealthCheckRequest()
    : ShieldRequest(new AssociateHealthCheckRequestPrivate(ShieldRequest::AssociateHealthCheckAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateHealthCheckRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateHealthCheckResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateHealthCheckRequest::response(QNetworkReply * const reply) const
{
    return new AssociateHealthCheckResponse(*this, reply);
}

/*!
 * \class QtAws::Shield::AssociateHealthCheckRequestPrivate
 * \brief The AssociateHealthCheckRequestPrivate class provides private implementation for AssociateHealthCheckRequest.
 * \internal
 *
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a AssociateHealthCheckRequestPrivate object for Shield \a action,
 * with public implementation \a q.
 */
AssociateHealthCheckRequestPrivate::AssociateHealthCheckRequestPrivate(
    const ShieldRequest::Action action, AssociateHealthCheckRequest * const q)
    : ShieldRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateHealthCheckRequest
 * class' copy constructor.
 */
AssociateHealthCheckRequestPrivate::AssociateHealthCheckRequestPrivate(
    const AssociateHealthCheckRequestPrivate &other, AssociateHealthCheckRequest * const q)
    : ShieldRequestPrivate(other, q)
{

}

} // namespace Shield
} // namespace QtAws
