/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "createstreamingdistributionwithtagsrequest.h"
#include "createstreamingdistributionwithtagsrequest_p.h"
#include "createstreamingdistributionwithtagsresponse.h"
#include "cloudfrontrequest_p.h"

namespace AWS {
namespace CloudFront {

/**
 * @class  CreateStreamingDistributionWithTagsRequest
 *
 * @brief  Implements CloudFront CreateStreamingDistributionWithTags requests.
 *
 * @see    CloudFrontClient::createStreamingDistributionWithTags
 */

/**
 * @brief  Constructs a new CreateStreamingDistributionWithTagsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateStreamingDistributionWithTagsResponse::CreateStreamingDistributionWithTagsResponse(

/**
 * @brief  Constructs a new CreateStreamingDistributionWithTagsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
CreateStreamingDistributionWithTagsRequest::CreateStreamingDistributionWithTagsRequest(const CreateStreamingDistributionWithTagsRequest &other)
    : CloudFrontRequest(new CreateStreamingDistributionWithTagsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new CreateStreamingDistributionWithTagsRequest object.
 */
CreateStreamingDistributionWithTagsRequest::CreateStreamingDistributionWithTagsRequest()
    : CloudFrontRequest(new CreateStreamingDistributionWithTagsRequestPrivate(CloudFrontRequest::CreateStreamingDistributionWithTagsAction, this))
{

}

bool CreateStreamingDistributionWithTagsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an CreateStreamingDistributionWithTagsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An CreateStreamingDistributionWithTagsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudFrontClient::send
 */
AwsAbstractResponse * CreateStreamingDistributionWithTagsRequest::response(QNetworkReply * const reply) const
{
    return new CreateStreamingDistributionWithTagsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  CreateStreamingDistributionWithTagsRequestPrivate
 *
 * @brief  Private implementation for CreateStreamingDistributionWithTagsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateStreamingDistributionWithTagsRequestPrivate object.
 *
 * @param  action  CloudFront action being performed.
 * @param  q       Pointer to this object's public CreateStreamingDistributionWithTagsRequest instance.
 */
CreateStreamingDistributionWithTagsRequestPrivate::CreateStreamingDistributionWithTagsRequestPrivate(
    const CloudFrontRequest::Action action, CreateStreamingDistributionWithTagsRequest * const q)
    : CreateStreamingDistributionWithTagsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new CreateStreamingDistributionWithTagsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the CreateStreamingDistributionWithTagsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public CreateStreamingDistributionWithTagsRequest instance.
 */
CreateStreamingDistributionWithTagsRequestPrivate::CreateStreamingDistributionWithTagsRequestPrivate(
    const CreateStreamingDistributionWithTagsRequestPrivate &other, CreateStreamingDistributionWithTagsRequest * const q)
    : CreateStreamingDistributionWithTagsPrivate(other, q)
{

}
