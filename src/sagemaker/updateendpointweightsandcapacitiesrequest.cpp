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

#include "updateendpointweightsandcapacitiesrequest.h"
#include "updateendpointweightsandcapacitiesrequest_p.h"
#include "updateendpointweightsandcapacitiesresponse.h"
#include "sagemakerrequest_p.h"

namespace QtAws {
namespace SageMaker {

/*!
 * \class QtAws::SageMaker::UpdateEndpointWeightsAndCapacitiesRequest
 *
 * \brief The UpdateEndpointWeightsAndCapacitiesRequest class provides an interface for SageMaker UpdateEndpointWeightsAndCapacities requests.
 *
 * \ingroup SageMaker
 *
 *
 * \sa SageMakerClient::updateEndpointWeightsAndCapacities
 */

/*!
 * @brief  Constructs a new UpdateEndpointWeightsAndCapacitiesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateEndpointWeightsAndCapacitiesRequest::UpdateEndpointWeightsAndCapacitiesRequest(const UpdateEndpointWeightsAndCapacitiesRequest &other)
    : SageMakerRequest(new UpdateEndpointWeightsAndCapacitiesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new UpdateEndpointWeightsAndCapacitiesRequest object.
 */
UpdateEndpointWeightsAndCapacitiesRequest::UpdateEndpointWeightsAndCapacitiesRequest()
    : SageMakerRequest(new UpdateEndpointWeightsAndCapacitiesRequestPrivate(SageMakerRequest::UpdateEndpointWeightsAndCapacitiesAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateEndpointWeightsAndCapacitiesRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an UpdateEndpointWeightsAndCapacitiesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateEndpointWeightsAndCapacitiesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SageMakerClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateEndpointWeightsAndCapacitiesRequest::response(QNetworkReply * const reply) const
{
    return new UpdateEndpointWeightsAndCapacitiesResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  UpdateEndpointWeightsAndCapacitiesRequestPrivate
 *
 * @brief  Private implementation for UpdateEndpointWeightsAndCapacitiesRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateEndpointWeightsAndCapacitiesRequestPrivate object.
 *
 * @param  action  SageMaker action being performed.
 * @param  q       Pointer to this object's public UpdateEndpointWeightsAndCapacitiesRequest instance.
 */
UpdateEndpointWeightsAndCapacitiesRequestPrivate::UpdateEndpointWeightsAndCapacitiesRequestPrivate(
    const SageMakerRequest::Action action, UpdateEndpointWeightsAndCapacitiesRequest * const q)
    : SageMakerRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateEndpointWeightsAndCapacitiesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateEndpointWeightsAndCapacitiesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateEndpointWeightsAndCapacitiesRequest instance.
 */
UpdateEndpointWeightsAndCapacitiesRequestPrivate::UpdateEndpointWeightsAndCapacitiesRequestPrivate(
    const UpdateEndpointWeightsAndCapacitiesRequestPrivate &other, UpdateEndpointWeightsAndCapacitiesRequest * const q)
    : SageMakerRequestPrivate(other, q)
{

}

} // namespace SageMaker
} // namespace QtAws
