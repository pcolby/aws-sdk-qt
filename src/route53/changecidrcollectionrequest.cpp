// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
