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
 *  <fullname>AWS Shield Advanced</fullname>
 * 
 *  This is the <i>AWS Shield Advanced API Reference</i>. This guide is for developers who need detailed information about
 *  the AWS Shield Advanced API actions, data types, and errors. For detailed information about AWS WAF and AWS Shield
 *  Advanced features and an overview of how to use the AWS WAF and AWS Shield Advanced APIs, see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF and AWS Shield Developer
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
