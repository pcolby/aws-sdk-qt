// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
