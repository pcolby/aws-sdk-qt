// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createtrafficpolicyversionrequest.h"
#include "createtrafficpolicyversionrequest_p.h"
#include "createtrafficpolicyversionresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::CreateTrafficPolicyVersionRequest
 * \brief The CreateTrafficPolicyVersionRequest class provides an interface for Route53 CreateTrafficPolicyVersion requests.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::createTrafficPolicyVersion
 */

/*!
 * Constructs a copy of \a other.
 */
CreateTrafficPolicyVersionRequest::CreateTrafficPolicyVersionRequest(const CreateTrafficPolicyVersionRequest &other)
    : Route53Request(new CreateTrafficPolicyVersionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateTrafficPolicyVersionRequest object.
 */
CreateTrafficPolicyVersionRequest::CreateTrafficPolicyVersionRequest()
    : Route53Request(new CreateTrafficPolicyVersionRequestPrivate(Route53Request::CreateTrafficPolicyVersionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateTrafficPolicyVersionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateTrafficPolicyVersionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateTrafficPolicyVersionRequest::response(QNetworkReply * const reply) const
{
    return new CreateTrafficPolicyVersionResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::CreateTrafficPolicyVersionRequestPrivate
 * \brief The CreateTrafficPolicyVersionRequestPrivate class provides private implementation for CreateTrafficPolicyVersionRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a CreateTrafficPolicyVersionRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
CreateTrafficPolicyVersionRequestPrivate::CreateTrafficPolicyVersionRequestPrivate(
    const Route53Request::Action action, CreateTrafficPolicyVersionRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateTrafficPolicyVersionRequest
 * class' copy constructor.
 */
CreateTrafficPolicyVersionRequestPrivate::CreateTrafficPolicyVersionRequestPrivate(
    const CreateTrafficPolicyVersionRequestPrivate &other, CreateTrafficPolicyVersionRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
