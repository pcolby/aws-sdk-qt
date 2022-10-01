// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociatehealthcheckrequest.h"
#include "disassociatehealthcheckrequest_p.h"
#include "disassociatehealthcheckresponse.h"
#include "shieldrequest_p.h"

namespace QtAws {
namespace Shield {

/*!
 * \class QtAws::Shield::DisassociateHealthCheckRequest
 * \brief The DisassociateHealthCheckRequest class provides an interface for Shield DisassociateHealthCheck requests.
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
 * \sa ShieldClient::disassociateHealthCheck
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateHealthCheckRequest::DisassociateHealthCheckRequest(const DisassociateHealthCheckRequest &other)
    : ShieldRequest(new DisassociateHealthCheckRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateHealthCheckRequest object.
 */
DisassociateHealthCheckRequest::DisassociateHealthCheckRequest()
    : ShieldRequest(new DisassociateHealthCheckRequestPrivate(ShieldRequest::DisassociateHealthCheckAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateHealthCheckRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateHealthCheckResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateHealthCheckRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateHealthCheckResponse(*this, reply);
}

/*!
 * \class QtAws::Shield::DisassociateHealthCheckRequestPrivate
 * \brief The DisassociateHealthCheckRequestPrivate class provides private implementation for DisassociateHealthCheckRequest.
 * \internal
 *
 * \inmodule QtAwsShield
 */

/*!
 * Constructs a DisassociateHealthCheckRequestPrivate object for Shield \a action,
 * with public implementation \a q.
 */
DisassociateHealthCheckRequestPrivate::DisassociateHealthCheckRequestPrivate(
    const ShieldRequest::Action action, DisassociateHealthCheckRequest * const q)
    : ShieldRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateHealthCheckRequest
 * class' copy constructor.
 */
DisassociateHealthCheckRequestPrivate::DisassociateHealthCheckRequestPrivate(
    const DisassociateHealthCheckRequestPrivate &other, DisassociateHealthCheckRequest * const q)
    : ShieldRequestPrivate(other, q)
{

}

} // namespace Shield
} // namespace QtAws
