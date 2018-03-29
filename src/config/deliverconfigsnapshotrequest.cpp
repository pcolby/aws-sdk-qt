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

#include "deliverconfigsnapshotrequest.h"
#include "deliverconfigsnapshotrequest_p.h"
#include "deliverconfigsnapshotresponse.h"
#include "configservicerequest_p.h"

namespace QtAws {
namespace ConfigService {

/**
 * @class  DeliverConfigSnapshotRequest
 *
 * @brief  Implements ConfigService DeliverConfigSnapshot requests.
 *
 * @see    ConfigServiceClient::deliverConfigSnapshot
 */

/**
 * @brief  Constructs a new DeliverConfigSnapshotRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeliverConfigSnapshotRequest::DeliverConfigSnapshotRequest(const DeliverConfigSnapshotRequest &other)
    : ConfigServiceRequest(new DeliverConfigSnapshotRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeliverConfigSnapshotRequest object.
 */
DeliverConfigSnapshotRequest::DeliverConfigSnapshotRequest()
    : ConfigServiceRequest(new DeliverConfigSnapshotRequestPrivate(ConfigServiceRequest::DeliverConfigSnapshotAction, this))
{

}

bool DeliverConfigSnapshotRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeliverConfigSnapshotResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeliverConfigSnapshotResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ConfigServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * DeliverConfigSnapshotRequest::response(QNetworkReply * const reply) const
{
    return new DeliverConfigSnapshotResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeliverConfigSnapshotRequestPrivate
 *
 * @brief  Private implementation for DeliverConfigSnapshotRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeliverConfigSnapshotRequestPrivate object.
 *
 * @param  action  ConfigService action being performed.
 * @param  q       Pointer to this object's public DeliverConfigSnapshotRequest instance.
 */
DeliverConfigSnapshotRequestPrivate::DeliverConfigSnapshotRequestPrivate(
    const ConfigServiceRequest::Action action, DeliverConfigSnapshotRequest * const q)
    : DeliverConfigSnapshotPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeliverConfigSnapshotRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeliverConfigSnapshotRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeliverConfigSnapshotRequest instance.
 */
DeliverConfigSnapshotRequestPrivate::DeliverConfigSnapshotRequestPrivate(
    const DeliverConfigSnapshotRequestPrivate &other, DeliverConfigSnapshotRequest * const q)
    : DeliverConfigSnapshotPrivate(other, q)
{

}

} // namespace ConfigService
} // namespace QtAws
