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

#include "putattributesrequest.h"
#include "putattributesrequest_p.h"
#include "putattributesresponse.h"
#include "ecsrequest_p.h"

namespace AWS {
namespace ECS {

/**
 * @class  PutAttributesRequest
 *
 * @brief  Implements ECS PutAttributes requests.
 *
 * @see    ECSClient::putAttributes
 */

/**
 * @brief  Constructs a new PutAttributesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutAttributesRequest::PutAttributesRequest(const PutAttributesRequest &other)
    : ECSRequest(new PutAttributesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutAttributesRequest object.
 */
PutAttributesRequest::PutAttributesRequest()
    : ECSRequest(new PutAttributesRequestPrivate(ECSRequest::PutAttributesAction, this))
{

}

bool PutAttributesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutAttributesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutAttributesResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ECSClient::send
 */
AwsAbstractResponse * PutAttributesRequest::response(QNetworkReply * const reply) const
{
    return new PutAttributesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutAttributesRequestPrivate
 *
 * @brief  Private implementation for PutAttributesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutAttributesRequestPrivate object.
 *
 * @param  action  ECS action being performed.
 * @param  q       Pointer to this object's public PutAttributesRequest instance.
 */
PutAttributesRequestPrivate::PutAttributesRequestPrivate(
    const ECSRequest::Action action, PutAttributesRequest * const q)
    : PutAttributesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutAttributesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutAttributesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutAttributesRequest instance.
 */
PutAttributesRequestPrivate::PutAttributesRequestPrivate(
    const PutAttributesRequestPrivate &other, PutAttributesRequest * const q)
    : PutAttributesPrivate(other, q)
{

}

} // namespace ECS
} // namespace AWS
