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

#include "createtrailrequest.h"
#include "createtrailrequest_p.h"
#include "createtrailresponse.h"
#include "cloudtrailrequest_p.h"

namespace QtAws {
namespace CloudTrail {

/**
 * @class  CreateTrailRequest
 *
 * @brief  Implements CloudTrail CreateTrail requests.
 *
 * @see    CloudTrailClient::createTrail
 */

/**
 * @brief  Constructs a new CreateTrailRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateTrailRequest::CreateTrailRequest(const CreateTrailRequest &other)
    : CloudTrailRequest(new CreateTrailRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateTrailRequest object.
 */
CreateTrailRequest::CreateTrailRequest()
    : CloudTrailRequest(new CreateTrailRequestPrivate(CloudTrailRequest::CreateTrailAction, this))
{

}

bool CreateTrailRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateTrailResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateTrailResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudTrailClient::send
 */
AwsAbstractResponse * CreateTrailRequest::response(QNetworkReply * const reply) const
{
    return new CreateTrailResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateTrailRequestPrivate
 *
 * @brief  Private implementation for CreateTrailRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateTrailRequestPrivate object.
 *
 * @param  action  CloudTrail action being performed.
 * @param  q       Pointer to this object's public CreateTrailRequest instance.
 */
CreateTrailRequestPrivate::CreateTrailRequestPrivate(
    const CloudTrailRequest::Action action, CreateTrailRequest * const q)
    : CreateTrailPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateTrailRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateTrailRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateTrailRequest instance.
 */
CreateTrailRequestPrivate::CreateTrailRequestPrivate(
    const CreateTrailRequestPrivate &other, CreateTrailRequest * const q)
    : CreateTrailPrivate(other, q)
{

}

} // namespace CloudTrail
} // namespace QtAws
