// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletetrafficpolicyinstancerequest.h"
#include "deletetrafficpolicyinstancerequest_p.h"
#include "deletetrafficpolicyinstanceresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::DeleteTrafficPolicyInstanceRequest
 * \brief The DeleteTrafficPolicyInstanceRequest class provides an interface for Route53 DeleteTrafficPolicyInstance requests.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::deleteTrafficPolicyInstance
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteTrafficPolicyInstanceRequest::DeleteTrafficPolicyInstanceRequest(const DeleteTrafficPolicyInstanceRequest &other)
    : Route53Request(new DeleteTrafficPolicyInstanceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteTrafficPolicyInstanceRequest object.
 */
DeleteTrafficPolicyInstanceRequest::DeleteTrafficPolicyInstanceRequest()
    : Route53Request(new DeleteTrafficPolicyInstanceRequestPrivate(Route53Request::DeleteTrafficPolicyInstanceAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteTrafficPolicyInstanceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteTrafficPolicyInstanceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteTrafficPolicyInstanceRequest::response(QNetworkReply * const reply) const
{
    return new DeleteTrafficPolicyInstanceResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::DeleteTrafficPolicyInstanceRequestPrivate
 * \brief The DeleteTrafficPolicyInstanceRequestPrivate class provides private implementation for DeleteTrafficPolicyInstanceRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a DeleteTrafficPolicyInstanceRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
DeleteTrafficPolicyInstanceRequestPrivate::DeleteTrafficPolicyInstanceRequestPrivate(
    const Route53Request::Action action, DeleteTrafficPolicyInstanceRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteTrafficPolicyInstanceRequest
 * class' copy constructor.
 */
DeleteTrafficPolicyInstanceRequestPrivate::DeleteTrafficPolicyInstanceRequestPrivate(
    const DeleteTrafficPolicyInstanceRequestPrivate &other, DeleteTrafficPolicyInstanceRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
