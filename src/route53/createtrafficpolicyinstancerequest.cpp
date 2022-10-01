// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createtrafficpolicyinstancerequest.h"
#include "createtrafficpolicyinstancerequest_p.h"
#include "createtrafficpolicyinstanceresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::CreateTrafficPolicyInstanceRequest
 * \brief The CreateTrafficPolicyInstanceRequest class provides an interface for Route53 CreateTrafficPolicyInstance requests.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::createTrafficPolicyInstance
 */

/*!
 * Constructs a copy of \a other.
 */
CreateTrafficPolicyInstanceRequest::CreateTrafficPolicyInstanceRequest(const CreateTrafficPolicyInstanceRequest &other)
    : Route53Request(new CreateTrafficPolicyInstanceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateTrafficPolicyInstanceRequest object.
 */
CreateTrafficPolicyInstanceRequest::CreateTrafficPolicyInstanceRequest()
    : Route53Request(new CreateTrafficPolicyInstanceRequestPrivate(Route53Request::CreateTrafficPolicyInstanceAction, this))
{

}

/*!
 * \reimp
 */
bool CreateTrafficPolicyInstanceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateTrafficPolicyInstanceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateTrafficPolicyInstanceRequest::response(QNetworkReply * const reply) const
{
    return new CreateTrafficPolicyInstanceResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::CreateTrafficPolicyInstanceRequestPrivate
 * \brief The CreateTrafficPolicyInstanceRequestPrivate class provides private implementation for CreateTrafficPolicyInstanceRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a CreateTrafficPolicyInstanceRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
CreateTrafficPolicyInstanceRequestPrivate::CreateTrafficPolicyInstanceRequestPrivate(
    const Route53Request::Action action, CreateTrafficPolicyInstanceRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateTrafficPolicyInstanceRequest
 * class' copy constructor.
 */
CreateTrafficPolicyInstanceRequestPrivate::CreateTrafficPolicyInstanceRequestPrivate(
    const CreateTrafficPolicyInstanceRequestPrivate &other, CreateTrafficPolicyInstanceRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
