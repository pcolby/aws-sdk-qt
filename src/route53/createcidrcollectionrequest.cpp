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

#include "createcidrcollectionrequest.h"
#include "createcidrcollectionrequest_p.h"
#include "createcidrcollectionresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::CreateCidrCollectionRequest
 * \brief The CreateCidrCollectionRequest class provides an interface for Route53 CreateCidrCollection requests.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::createCidrCollection
 */

/*!
 * Constructs a copy of \a other.
 */
CreateCidrCollectionRequest::CreateCidrCollectionRequest(const CreateCidrCollectionRequest &other)
    : Route53Request(new CreateCidrCollectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateCidrCollectionRequest object.
 */
CreateCidrCollectionRequest::CreateCidrCollectionRequest()
    : Route53Request(new CreateCidrCollectionRequestPrivate(Route53Request::CreateCidrCollectionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateCidrCollectionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateCidrCollectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateCidrCollectionRequest::response(QNetworkReply * const reply) const
{
    return new CreateCidrCollectionResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::CreateCidrCollectionRequestPrivate
 * \brief The CreateCidrCollectionRequestPrivate class provides private implementation for CreateCidrCollectionRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a CreateCidrCollectionRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
CreateCidrCollectionRequestPrivate::CreateCidrCollectionRequestPrivate(
    const Route53Request::Action action, CreateCidrCollectionRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateCidrCollectionRequest
 * class' copy constructor.
 */
CreateCidrCollectionRequestPrivate::CreateCidrCollectionRequestPrivate(
    const CreateCidrCollectionRequestPrivate &other, CreateCidrCollectionRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
