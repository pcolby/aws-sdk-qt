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

#include "deletedistributionrequest.h"
#include "deletedistributionrequest_p.h"
#include "deletedistributionresponse.h"
#include "cloudfrontrequest_p.h"

namespace QtAws {
namespace CloudFront {

/**
 * @class  DeleteDistributionRequest
 *
 * @brief  Implements CloudFront DeleteDistribution requests.
 *
 * @see    CloudFrontClient::deleteDistribution
 */

/**
 * @brief  Constructs a new DeleteDistributionRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteDistributionRequest::DeleteDistributionRequest(const DeleteDistributionRequest &other)
    : CloudFrontRequest(new DeleteDistributionRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteDistributionRequest object.
 */
DeleteDistributionRequest::DeleteDistributionRequest()
    : CloudFrontRequest(new DeleteDistributionRequestPrivate(CloudFrontRequest::DeleteDistributionAction, this))
{

}

bool DeleteDistributionRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteDistributionResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteDistributionResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudFrontClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteDistributionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteDistributionResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteDistributionRequestPrivate
 *
 * @brief  Private implementation for DeleteDistributionRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDistributionRequestPrivate object.
 *
 * @param  action  CloudFront action being performed.
 * @param  q       Pointer to this object's public DeleteDistributionRequest instance.
 */
DeleteDistributionRequestPrivate::DeleteDistributionRequestPrivate(
    const CloudFrontRequest::Action action, DeleteDistributionRequest * const q)
    : CloudFrontRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteDistributionRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteDistributionRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteDistributionRequest instance.
 */
DeleteDistributionRequestPrivate::DeleteDistributionRequestPrivate(
    const DeleteDistributionRequestPrivate &other, DeleteDistributionRequest * const q)
    : CloudFrontRequestPrivate(other, q)
{

}

} // namespace CloudFront
} // namespace QtAws
