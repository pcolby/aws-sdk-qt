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

#include "createdistributionwithtagsrequest.h"
#include "createdistributionwithtagsrequest_p.h"
#include "createdistributionwithtagsresponse.h"
#include "cloudfrontrequest_p.h"

namespace AWS {
namespace CloudFront {

/**
 * @class  CreateDistributionWithTagsRequest
 *
 * @brief  Implements CloudFront CreateDistributionWithTags requests.
 *
 * @see    CloudFrontClient::createDistributionWithTags
 */

/**
 * @brief  Constructs a new CreateDistributionWithTagsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateDistributionWithTagsRequest::CreateDistributionWithTagsRequest(const CreateDistributionWithTagsRequest &other)
    : CloudFrontRequest(new CreateDistributionWithTagsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateDistributionWithTagsRequest object.
 */
CreateDistributionWithTagsRequest::CreateDistributionWithTagsRequest()
    : CloudFrontRequest(new CreateDistributionWithTagsRequestPrivate(CloudFrontRequest::CreateDistributionWithTagsAction, this))
{

}

bool CreateDistributionWithTagsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateDistributionWithTagsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateDistributionWithTagsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudFrontClient::send
 */
AwsAbstractResponse * CreateDistributionWithTagsRequest::response(QNetworkReply * const reply) const
{
    return new CreateDistributionWithTagsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateDistributionWithTagsRequestPrivate
 *
 * @brief  Private implementation for CreateDistributionWithTagsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDistributionWithTagsRequestPrivate object.
 *
 * @param  action  CloudFront action being performed.
 * @param  q       Pointer to this object's public CreateDistributionWithTagsRequest instance.
 */
CreateDistributionWithTagsRequestPrivate::CreateDistributionWithTagsRequestPrivate(
    const CloudFrontRequest::Action action, CreateDistributionWithTagsRequest * const q)
    : CreateDistributionWithTagsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateDistributionWithTagsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateDistributionWithTagsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateDistributionWithTagsRequest instance.
 */
CreateDistributionWithTagsRequestPrivate::CreateDistributionWithTagsRequestPrivate(
    const CreateDistributionWithTagsRequestPrivate &other, CreateDistributionWithTagsRequest * const q)
    : CreateDistributionWithTagsPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace AWS
