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

/**
 * @class  CreateHostedZoneRequest
 *
 * @brief  Implements Route53 CreateHostedZone requests.
 *
 * @see    Route53Client::createHostedZone
 */

/**
 * @brief  Constructs a new CreateHostedZoneRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateHostedZoneRequest::CreateHostedZoneRequest(const CreateHostedZoneRequest &other)
    : Route53Request(new CreateHostedZoneRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateHostedZoneRequest object.
 */
CreateHostedZoneRequest::CreateHostedZoneRequest()
    : Route53Request(new CreateHostedZoneRequestPrivate(Route53Request::CreateHostedZoneAction, this))
{

}

bool CreateHostedZoneRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateHostedZoneResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateHostedZoneResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  Route53Client::send
 */
QtAws::Core::AwsAbstractResponse * CreateHostedZoneRequest::response(QNetworkReply * const reply) const
{
    return new CreateHostedZoneResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateHostedZoneRequestPrivate
 *
 * @brief  Private implementation for CreateHostedZoneRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateHostedZoneRequestPrivate object.
 *
 * @param  action  Route53 action being performed.
 * @param  q       Pointer to this object's public CreateHostedZoneRequest instance.
 */
CreateHostedZoneRequestPrivate::CreateHostedZoneRequestPrivate(
    const Route53Request::Action action, CreateHostedZoneRequest * const q)
    : CreateHostedZonePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateHostedZoneRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateHostedZoneRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateHostedZoneRequest instance.
 */
CreateHostedZoneRequestPrivate::CreateHostedZoneRequestPrivate(
    const CreateHostedZoneRequestPrivate &other, CreateHostedZoneRequest * const q)
    : CreateHostedZonePrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
