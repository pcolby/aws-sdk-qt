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

#include "deactivatekeysigningkeyrequest.h"
#include "deactivatekeysigningkeyrequest_p.h"
#include "deactivatekeysigningkeyresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::DeactivateKeySigningKeyRequest
 * \brief The DeactivateKeySigningKeyRequest class provides an interface for Route53 DeactivateKeySigningKey requests.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::deactivateKeySigningKey
 */

/*!
 * Constructs a copy of \a other.
 */
DeactivateKeySigningKeyRequest::DeactivateKeySigningKeyRequest(const DeactivateKeySigningKeyRequest &other)
    : Route53Request(new DeactivateKeySigningKeyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeactivateKeySigningKeyRequest object.
 */
DeactivateKeySigningKeyRequest::DeactivateKeySigningKeyRequest()
    : Route53Request(new DeactivateKeySigningKeyRequestPrivate(Route53Request::DeactivateKeySigningKeyAction, this))
{

}

/*!
 * \reimp
 */
bool DeactivateKeySigningKeyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeactivateKeySigningKeyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeactivateKeySigningKeyRequest::response(QNetworkReply * const reply) const
{
    return new DeactivateKeySigningKeyResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::DeactivateKeySigningKeyRequestPrivate
 * \brief The DeactivateKeySigningKeyRequestPrivate class provides private implementation for DeactivateKeySigningKeyRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a DeactivateKeySigningKeyRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
DeactivateKeySigningKeyRequestPrivate::DeactivateKeySigningKeyRequestPrivate(
    const Route53Request::Action action, DeactivateKeySigningKeyRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeactivateKeySigningKeyRequest
 * class' copy constructor.
 */
DeactivateKeySigningKeyRequestPrivate::DeactivateKeySigningKeyRequestPrivate(
    const DeactivateKeySigningKeyRequestPrivate &other, DeactivateKeySigningKeyRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
