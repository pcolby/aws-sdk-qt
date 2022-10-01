// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletecidrcollectionrequest.h"
#include "deletecidrcollectionrequest_p.h"
#include "deletecidrcollectionresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::DeleteCidrCollectionRequest
 * \brief The DeleteCidrCollectionRequest class provides an interface for Route53 DeleteCidrCollection requests.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::deleteCidrCollection
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteCidrCollectionRequest::DeleteCidrCollectionRequest(const DeleteCidrCollectionRequest &other)
    : Route53Request(new DeleteCidrCollectionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteCidrCollectionRequest object.
 */
DeleteCidrCollectionRequest::DeleteCidrCollectionRequest()
    : Route53Request(new DeleteCidrCollectionRequestPrivate(Route53Request::DeleteCidrCollectionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteCidrCollectionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteCidrCollectionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteCidrCollectionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteCidrCollectionResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::DeleteCidrCollectionRequestPrivate
 * \brief The DeleteCidrCollectionRequestPrivate class provides private implementation for DeleteCidrCollectionRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a DeleteCidrCollectionRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
DeleteCidrCollectionRequestPrivate::DeleteCidrCollectionRequestPrivate(
    const Route53Request::Action action, DeleteCidrCollectionRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteCidrCollectionRequest
 * class' copy constructor.
 */
DeleteCidrCollectionRequestPrivate::DeleteCidrCollectionRequestPrivate(
    const DeleteCidrCollectionRequestPrivate &other, DeleteCidrCollectionRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
