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

#include "getdownloadurlforlayerrequest.h"
#include "getdownloadurlforlayerrequest_p.h"
#include "getdownloadurlforlayerresponse.h"
#include "ecrrequest_p.h"

namespace QtAws {
namespace ECR {

/**
 * @class  GetDownloadUrlForLayerRequest
 *
 * @brief  Implements ECR GetDownloadUrlForLayer requests.
 *
 * @see    ECRClient::getDownloadUrlForLayer
 */

/**
 * @brief  Constructs a new GetDownloadUrlForLayerRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetDownloadUrlForLayerRequest::GetDownloadUrlForLayerRequest(const GetDownloadUrlForLayerRequest &other)
    : ECRRequest(new GetDownloadUrlForLayerRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetDownloadUrlForLayerRequest object.
 */
GetDownloadUrlForLayerRequest::GetDownloadUrlForLayerRequest()
    : ECRRequest(new GetDownloadUrlForLayerRequestPrivate(ECRRequest::GetDownloadUrlForLayerAction, this))
{

}

bool GetDownloadUrlForLayerRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetDownloadUrlForLayerResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetDownloadUrlForLayerResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ECRClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDownloadUrlForLayerRequest::response(QNetworkReply * const reply) const
{
    return new GetDownloadUrlForLayerResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetDownloadUrlForLayerRequestPrivate
 *
 * @brief  Private implementation for GetDownloadUrlForLayerRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDownloadUrlForLayerRequestPrivate object.
 *
 * @param  action  ECR action being performed.
 * @param  q       Pointer to this object's public GetDownloadUrlForLayerRequest instance.
 */
GetDownloadUrlForLayerRequestPrivate::GetDownloadUrlForLayerRequestPrivate(
    const ECRRequest::Action action, GetDownloadUrlForLayerRequest * const q)
    : ECRRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetDownloadUrlForLayerRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetDownloadUrlForLayerRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetDownloadUrlForLayerRequest instance.
 */
GetDownloadUrlForLayerRequestPrivate::GetDownloadUrlForLayerRequestPrivate(
    const GetDownloadUrlForLayerRequestPrivate &other, GetDownloadUrlForLayerRequest * const q)
    : ECRRequestPrivate(other, q)
{

}

} // namespace ECR
} // namespace QtAws
