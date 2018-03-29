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

#include "createorupdatetagsrequest.h"
#include "createorupdatetagsrequest_p.h"
#include "createorupdatetagsresponse.h"
#include "autoscalingrequest_p.h"

namespace AWS {
namespace AutoScaling {

/**
 * @class  CreateOrUpdateTagsRequest
 *
 * @brief  Implements AutoScaling CreateOrUpdateTags requests.
 *
 * @see    AutoScalingClient::createOrUpdateTags
 */

/**
 * @brief  Constructs a new CreateOrUpdateTagsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateOrUpdateTagsRequest::CreateOrUpdateTagsRequest(const CreateOrUpdateTagsRequest &other)
    : AutoScalingRequest(new CreateOrUpdateTagsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateOrUpdateTagsRequest object.
 */
CreateOrUpdateTagsRequest::CreateOrUpdateTagsRequest()
    : AutoScalingRequest(new CreateOrUpdateTagsRequestPrivate(AutoScalingRequest::CreateOrUpdateTagsAction, this))
{

}

bool CreateOrUpdateTagsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateOrUpdateTagsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateOrUpdateTagsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  AutoScalingClient::send
 */
AwsAbstractResponse * CreateOrUpdateTagsRequest::response(QNetworkReply * const reply) const
{
    return new CreateOrUpdateTagsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateOrUpdateTagsRequestPrivate
 *
 * @brief  Private implementation for CreateOrUpdateTagsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateOrUpdateTagsRequestPrivate object.
 *
 * @param  action  AutoScaling action being performed.
 * @param  q       Pointer to this object's public CreateOrUpdateTagsRequest instance.
 */
CreateOrUpdateTagsRequestPrivate::CreateOrUpdateTagsRequestPrivate(
    const AutoScalingRequest::Action action, CreateOrUpdateTagsRequest * const q)
    : CreateOrUpdateTagsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateOrUpdateTagsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateOrUpdateTagsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateOrUpdateTagsRequest instance.
 */
CreateOrUpdateTagsRequestPrivate::CreateOrUpdateTagsRequestPrivate(
    const CreateOrUpdateTagsRequestPrivate &other, CreateOrUpdateTagsRequest * const q)
    : CreateOrUpdateTagsPrivate(other, q)
{

}

} // namespace AutoScaling
} // namespace AWS
