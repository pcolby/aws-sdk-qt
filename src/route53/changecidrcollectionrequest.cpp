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

#include "changecidrcollectionrequest.h"
#include "changecidrcollectionrequest_p.h"
#include "changecidrcollectionresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::ChangeCidrCollectionRequest
 * \brief The ChangeCidrCollectionRequest class provides an interface for Route53 ChangeCidrCollection requests.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::changeCidrCollection
 */

/*!
 * Constructs a copy of \a other.
 */
ChangeCidrCollectionRequest::ChangeCidrCollectionRequest(const ChangeCidrCollectionRequest &other)
    : Route53Request(new ChangeCidrCollectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ChangeCidrCollectionRequest object.
 */
ChangeCidrCollectionRequest::ChangeCidrCollectionRequest()
    : Route53Request(new ChangeCidrCollectionRequestPrivate(Route53Request::ChangeCidrCollectionAction, this))
{

}

/*!
 * \reimp
 */
bool ChangeCidrCollectionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ChangeCidrCollectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ChangeCidrCollectionRequest::response(QNetworkReply * const reply) const
{
    return new ChangeCidrCollectionResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::ChangeCidrCollectionRequestPrivate
 * \brief The ChangeCidrCollectionRequestPrivate class provides private implementation for ChangeCidrCollectionRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a ChangeCidrCollectionRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
ChangeCidrCollectionRequestPrivate::ChangeCidrCollectionRequestPrivate(
    const Route53Request::Action action, ChangeCidrCollectionRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ChangeCidrCollectionRequest
 * class' copy constructor.
 */
ChangeCidrCollectionRequestPrivate::ChangeCidrCollectionRequestPrivate(
    const ChangeCidrCollectionRequestPrivate &other, ChangeCidrCollectionRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
