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

#include "activatekeysigningkeyrequest.h"
#include "activatekeysigningkeyrequest_p.h"
#include "activatekeysigningkeyresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::ActivateKeySigningKeyRequest
 * \brief The ActivateKeySigningKeyRequest class provides an interface for Route53 ActivateKeySigningKey requests.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::activateKeySigningKey
 */

/*!
 * Constructs a copy of \a other.
 */
ActivateKeySigningKeyRequest::ActivateKeySigningKeyRequest(const ActivateKeySigningKeyRequest &other)
    : Route53Request(new ActivateKeySigningKeyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ActivateKeySigningKeyRequest object.
 */
ActivateKeySigningKeyRequest::ActivateKeySigningKeyRequest()
    : Route53Request(new ActivateKeySigningKeyRequestPrivate(Route53Request::ActivateKeySigningKeyAction, this))
{

}

/*!
 * \reimp
 */
bool ActivateKeySigningKeyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ActivateKeySigningKeyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ActivateKeySigningKeyRequest::response(QNetworkReply * const reply) const
{
    return new ActivateKeySigningKeyResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::ActivateKeySigningKeyRequestPrivate
 * \brief The ActivateKeySigningKeyRequestPrivate class provides private implementation for ActivateKeySigningKeyRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a ActivateKeySigningKeyRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
ActivateKeySigningKeyRequestPrivate::ActivateKeySigningKeyRequestPrivate(
    const Route53Request::Action action, ActivateKeySigningKeyRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ActivateKeySigningKeyRequest
 * class' copy constructor.
 */
ActivateKeySigningKeyRequestPrivate::ActivateKeySigningKeyRequestPrivate(
    const ActivateKeySigningKeyRequestPrivate &other, ActivateKeySigningKeyRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
