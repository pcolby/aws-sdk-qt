// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createreusabledelegationsetrequest.h"
#include "createreusabledelegationsetrequest_p.h"
#include "createreusabledelegationsetresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::CreateReusableDelegationSetRequest
 * \brief The CreateReusableDelegationSetRequest class provides an interface for Route53 CreateReusableDelegationSet requests.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::createReusableDelegationSet
 */

/*!
 * Constructs a copy of \a other.
 */
CreateReusableDelegationSetRequest::CreateReusableDelegationSetRequest(const CreateReusableDelegationSetRequest &other)
    : Route53Request(new CreateReusableDelegationSetRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateReusableDelegationSetRequest object.
 */
CreateReusableDelegationSetRequest::CreateReusableDelegationSetRequest()
    : Route53Request(new CreateReusableDelegationSetRequestPrivate(Route53Request::CreateReusableDelegationSetAction, this))
{

}

/*!
 * \reimp
 */
bool CreateReusableDelegationSetRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateReusableDelegationSetResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateReusableDelegationSetRequest::response(QNetworkReply * const reply) const
{
    return new CreateReusableDelegationSetResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::CreateReusableDelegationSetRequestPrivate
 * \brief The CreateReusableDelegationSetRequestPrivate class provides private implementation for CreateReusableDelegationSetRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a CreateReusableDelegationSetRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
CreateReusableDelegationSetRequestPrivate::CreateReusableDelegationSetRequestPrivate(
    const Route53Request::Action action, CreateReusableDelegationSetRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateReusableDelegationSetRequest
 * class' copy constructor.
 */
CreateReusableDelegationSetRequestPrivate::CreateReusableDelegationSetRequestPrivate(
    const CreateReusableDelegationSetRequestPrivate &other, CreateReusableDelegationSetRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
