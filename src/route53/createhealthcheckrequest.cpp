// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createhealthcheckrequest.h"
#include "createhealthcheckrequest_p.h"
#include "createhealthcheckresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::CreateHealthCheckRequest
 * \brief The CreateHealthCheckRequest class provides an interface for Route53 CreateHealthCheck requests.
 *
 * \inmodule QtAwsRoute53
 *
 *  Amazon Route 53 is a highly available and scalable Domain Name System (DNS) web
 *
 * \sa Route53Client::createHealthCheck
 */

/*!
 * Constructs a copy of \a other.
 */
CreateHealthCheckRequest::CreateHealthCheckRequest(const CreateHealthCheckRequest &other)
    : Route53Request(new CreateHealthCheckRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateHealthCheckRequest object.
 */
CreateHealthCheckRequest::CreateHealthCheckRequest()
    : Route53Request(new CreateHealthCheckRequestPrivate(Route53Request::CreateHealthCheckAction, this))
{

}

/*!
 * \reimp
 */
bool CreateHealthCheckRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateHealthCheckResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateHealthCheckRequest::response(QNetworkReply * const reply) const
{
    return new CreateHealthCheckResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::CreateHealthCheckRequestPrivate
 * \brief The CreateHealthCheckRequestPrivate class provides private implementation for CreateHealthCheckRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a CreateHealthCheckRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
CreateHealthCheckRequestPrivate::CreateHealthCheckRequestPrivate(
    const Route53Request::Action action, CreateHealthCheckRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateHealthCheckRequest
 * class' copy constructor.
 */
CreateHealthCheckRequestPrivate::CreateHealthCheckRequestPrivate(
    const CreateHealthCheckRequestPrivate &other, CreateHealthCheckRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
