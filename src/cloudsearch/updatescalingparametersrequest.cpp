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

#include "updatescalingparametersrequest.h"
#include "updatescalingparametersrequest_p.h"
#include "updatescalingparametersresponse.h"
#include "cloudsearchrequest_p.h"

namespace QtAws {
namespace CloudSearch {

/**
 * @class  UpdateScalingParametersRequest
 *
 * @brief  Implements CloudSearch UpdateScalingParameters requests.
 *
 * @see    CloudSearchClient::updateScalingParameters
 */

/**
 * @brief  Constructs a new UpdateScalingParametersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateScalingParametersRequest::UpdateScalingParametersRequest(const UpdateScalingParametersRequest &other)
    : CloudSearchRequest(new UpdateScalingParametersRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateScalingParametersRequest object.
 */
UpdateScalingParametersRequest::UpdateScalingParametersRequest()
    : CloudSearchRequest(new UpdateScalingParametersRequestPrivate(CloudSearchRequest::UpdateScalingParametersAction, this))
{

}

bool UpdateScalingParametersRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateScalingParametersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateScalingParametersResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudSearchClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateScalingParametersRequest::response(QNetworkReply * const reply) const
{
    return new UpdateScalingParametersResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateScalingParametersRequestPrivate
 *
 * @brief  Private implementation for UpdateScalingParametersRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateScalingParametersRequestPrivate object.
 *
 * @param  action  CloudSearch action being performed.
 * @param  q       Pointer to this object's public UpdateScalingParametersRequest instance.
 */
UpdateScalingParametersRequestPrivate::UpdateScalingParametersRequestPrivate(
    const CloudSearchRequest::Action action, UpdateScalingParametersRequest * const q)
    : CloudSearchRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateScalingParametersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateScalingParametersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateScalingParametersRequest instance.
 */
UpdateScalingParametersRequestPrivate::UpdateScalingParametersRequestPrivate(
    const UpdateScalingParametersRequestPrivate &other, UpdateScalingParametersRequest * const q)
    : CloudSearchRequestPrivate(other, q)
{

}

} // namespace CloudSearch
} // namespace QtAws
