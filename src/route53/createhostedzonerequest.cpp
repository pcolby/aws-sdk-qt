/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createhostedzonerequest.h"
#include "createhostedzonerequest_p.h"
#include "createhostedzoneresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::CreateHostedZoneRequest
 * \brief The CreateHostedZoneRequest class provides an interface for Route53 CreateHostedZone requests.
 *
 * \inmodule QtAwsRoute53
 *
 *
 * \sa Route53Client::createHostedZone
 */

/*!
 * Constructs a copy of \a other.
 */
CreateHostedZoneRequest::CreateHostedZoneRequest(const CreateHostedZoneRequest &other)
    : Route53Request(new CreateHostedZoneRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateHostedZoneRequest object.
 */
CreateHostedZoneRequest::CreateHostedZoneRequest()
    : Route53Request(new CreateHostedZoneRequestPrivate(Route53Request::CreateHostedZoneAction, this))
{

}

/*!
 * \reimp
 */
bool CreateHostedZoneRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateHostedZoneResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateHostedZoneRequest::response(QNetworkReply * const reply) const
{
    return new CreateHostedZoneResponse(*this, reply);
}

/*!
 * \class QtAws::Route53::CreateHostedZoneRequestPrivate
 * \brief The CreateHostedZoneRequestPrivate class provides private implementation for CreateHostedZoneRequest.
 * \internal
 *
 * \inmodule QtAwsRoute53
 */

/*!
 * Constructs a CreateHostedZoneRequestPrivate object for Route53 \a action,
 * with public implementation \a q.
 */
CreateHostedZoneRequestPrivate::CreateHostedZoneRequestPrivate(
    const Route53Request::Action action, CreateHostedZoneRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateHostedZoneRequest
 * class' copy constructor.
 */
CreateHostedZoneRequestPrivate::CreateHostedZoneRequestPrivate(
    const CreateHostedZoneRequestPrivate &other, CreateHostedZoneRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
