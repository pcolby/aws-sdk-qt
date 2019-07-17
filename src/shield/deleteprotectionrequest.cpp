/*
    Copyright 2013-2019 Paul Colby

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
 *  <fullname>AWS Shield Advanced</fullname>
 * 
 *  This is the <i>AWS Shield Advanced API Reference</i>. This guide is for developers who need detailed information about
 *  the AWS Shield Advanced API actions, data types, and errors. For detailed information about AWS WAF and AWS Shield
 *  Advanced features and an overview of how to use the AWS WAF and AWS Shield Advanced APIs, see the <a
 *  href="https://docs.aws.amazon.com/waf/latest/developerguide/">AWS WAF and AWS Shield Developer
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
