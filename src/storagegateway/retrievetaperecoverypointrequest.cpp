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

#include "retrievetaperecoverypointrequest.h"
#include "retrievetaperecoverypointrequest_p.h"
#include "retrievetaperecoverypointresponse.h"
#include "storagegatewayrequest_p.h"

namespace AWS {
namespace StorageGateway {

/**
 * @class  RetrieveTapeRecoveryPointRequest
 *
 * @brief  Implements StorageGateway RetrieveTapeRecoveryPoint requests.
 *
 * @see    StorageGatewayClient::retrieveTapeRecoveryPoint
 */

/**
 * @brief  Constructs a new RetrieveTapeRecoveryPointResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RetrieveTapeRecoveryPointResponse::RetrieveTapeRecoveryPointResponse(

/**
 * @brief  Constructs a new RetrieveTapeRecoveryPointRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
RetrieveTapeRecoveryPointRequest::RetrieveTapeRecoveryPointRequest(const RetrieveTapeRecoveryPointRequest &other)
    : StorageGatewayRequest(new RetrieveTapeRecoveryPointRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new RetrieveTapeRecoveryPointRequest object.
 */
RetrieveTapeRecoveryPointRequest::RetrieveTapeRecoveryPointRequest()
    : StorageGatewayRequest(new RetrieveTapeRecoveryPointRequestPrivate(StorageGatewayRequest::RetrieveTapeRecoveryPointAction, this))
{

}

bool RetrieveTapeRecoveryPointRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an RetrieveTapeRecoveryPointResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An RetrieveTapeRecoveryPointResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  StorageGatewayClient::send
 */
AwsAbstractResponse * RetrieveTapeRecoveryPointRequest::response(QNetworkReply * const reply) const
{
    return new RetrieveTapeRecoveryPointResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  RetrieveTapeRecoveryPointRequestPrivate
 *
 * @brief  Private implementation for RetrieveTapeRecoveryPointRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RetrieveTapeRecoveryPointRequestPrivate object.
 *
 * @param  action  StorageGateway action being performed.
 * @param  q       Pointer to this object's public RetrieveTapeRecoveryPointRequest instance.
 */
RetrieveTapeRecoveryPointRequestPrivate::RetrieveTapeRecoveryPointRequestPrivate(
    const StorageGatewayRequest::Action action, RetrieveTapeRecoveryPointRequest * const q)
    : RetrieveTapeRecoveryPointPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new RetrieveTapeRecoveryPointRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the RetrieveTapeRecoveryPointRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public RetrieveTapeRecoveryPointRequest instance.
 */
RetrieveTapeRecoveryPointRequestPrivate::RetrieveTapeRecoveryPointRequestPrivate(
    const RetrieveTapeRecoveryPointRequestPrivate &other, RetrieveTapeRecoveryPointRequest * const q)
    : RetrieveTapeRecoveryPointPrivate(other, q)
{

}
