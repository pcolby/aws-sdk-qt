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

#include "createreusabledelegationsetrequest.h"
#include "createreusabledelegationsetrequest_p.h"
#include "createreusabledelegationsetresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/**
 * @class  CreateReusableDelegationSetRequest
 *
 * @brief  Implements Route53 CreateReusableDelegationSet requests.
 *
 * @see    Route53Client::createReusableDelegationSet
 */

/**
 * @brief  Constructs a new CreateReusableDelegationSetRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateReusableDelegationSetRequest::CreateReusableDelegationSetRequest(const CreateReusableDelegationSetRequest &other)
    : Route53Request(new CreateReusableDelegationSetRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateReusableDelegationSetRequest object.
 */
CreateReusableDelegationSetRequest::CreateReusableDelegationSetRequest()
    : Route53Request(new CreateReusableDelegationSetRequestPrivate(Route53Request::CreateReusableDelegationSetAction, this))
{

}

bool CreateReusableDelegationSetRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateReusableDelegationSetResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateReusableDelegationSetResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  Route53Client::send
 */
AwsAbstractResponse * CreateReusableDelegationSetRequest::response(QNetworkReply * const reply) const
{
    return new CreateReusableDelegationSetResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateReusableDelegationSetRequestPrivate
 *
 * @brief  Private implementation for CreateReusableDelegationSetRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateReusableDelegationSetRequestPrivate object.
 *
 * @param  action  Route53 action being performed.
 * @param  q       Pointer to this object's public CreateReusableDelegationSetRequest instance.
 */
CreateReusableDelegationSetRequestPrivate::CreateReusableDelegationSetRequestPrivate(
    const Route53Request::Action action, CreateReusableDelegationSetRequest * const q)
    : CreateReusableDelegationSetPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateReusableDelegationSetRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateReusableDelegationSetRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateReusableDelegationSetRequest instance.
 */
CreateReusableDelegationSetRequestPrivate::CreateReusableDelegationSetRequestPrivate(
    const CreateReusableDelegationSetRequestPrivate &other, CreateReusableDelegationSetRequest * const q)
    : CreateReusableDelegationSetPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
