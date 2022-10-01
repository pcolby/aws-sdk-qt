// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatetrafficpolicyinstancerequest.h"
#include "updatetrafficpolicyinstancerequest_p.h"
#include "updatetrafficpolicyinstanceresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::UpdateTrafficPolicyInstanceRequest
 * \brief The UpdateTrafficPolicyInstanceRequest class provides an interface for Route53 UpdateTrafficPolicyInstance requests.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::updateTrafficPolicyInstance
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateTrafficPolicyInstanceRequest::UpdateTrafficPolicyInstanceRequest(const UpdateTrafficPolicyInstanceRequest &other)
    : Route53Request(new UpdateTrafficPolicyInstanceRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateTrafficPolicyInstanceRequest object.
 */
UpdateTrafficPolicyInstanceRequest::UpdateTrafficPolicyInstanceRequest()
    : Route53Request(new UpdateTrafficPolicyInstanceRequestPrivate(Route53Request::UpdateTrafficPolicyInstanceAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateTrafficPolicyInstanceRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateTrafficPolicyInstanceResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateTrafficPolicyInstanceRequest::response(QNetworkReply * const reply) const
{
    return new UpdateTrafficPolicyInstanceResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::UpdateTrafficPolicyInstanceRequestPrivate
 * \brief The UpdateTrafficPolicyInstanceRequestPrivate class provides private implementation for UpdateTrafficPolicyInstanceRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a UpdateTrafficPolicyInstanceRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
UpdateTrafficPolicyInstanceRequestPrivate::UpdateTrafficPolicyInstanceRequestPrivate(
    const Route53Request::Action action, UpdateTrafficPolicyInstanceRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateTrafficPolicyInstanceRequest
 * class' copy constructor.
 */
UpdateTrafficPolicyInstanceRequestPrivate::UpdateTrafficPolicyInstanceRequestPrivate(
    const UpdateTrafficPolicyInstanceRequestPrivate &other, UpdateTrafficPolicyInstanceRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
