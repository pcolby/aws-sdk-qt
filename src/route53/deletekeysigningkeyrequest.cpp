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

#include "deletekeysigningkeyrequest.h"
#include "deletekeysigningkeyrequest_p.h"
#include "deletekeysigningkeyresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::DeleteKeySigningKeyRequest
 * \brief The DeleteKeySigningKeyRequest class provides an interface for Route53 DeleteKeySigningKey requests.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::deleteKeySigningKey
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteKeySigningKeyRequest::DeleteKeySigningKeyRequest(const DeleteKeySigningKeyRequest &other)
    : Route53Request(new DeleteKeySigningKeyRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteKeySigningKeyRequest object.
 */
DeleteKeySigningKeyRequest::DeleteKeySigningKeyRequest()
    : Route53Request(new DeleteKeySigningKeyRequestPrivate(Route53Request::DeleteKeySigningKeyAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteKeySigningKeyRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteKeySigningKeyResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteKeySigningKeyRequest::response(QNetworkReply * const reply) const
{
    return new DeleteKeySigningKeyResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::DeleteKeySigningKeyRequestPrivate
 * \brief The DeleteKeySigningKeyRequestPrivate class provides private implementation for DeleteKeySigningKeyRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a DeleteKeySigningKeyRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
DeleteKeySigningKeyRequestPrivate::DeleteKeySigningKeyRequestPrivate(
    const Route53Request::Action action, DeleteKeySigningKeyRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteKeySigningKeyRequest
 * class' copy constructor.
 */
DeleteKeySigningKeyRequestPrivate::DeleteKeySigningKeyRequestPrivate(
    const DeleteKeySigningKeyRequestPrivate &other, DeleteKeySigningKeyRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
