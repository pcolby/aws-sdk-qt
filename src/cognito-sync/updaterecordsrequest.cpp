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

#include "updaterecordsrequest.h"
#include "updaterecordsrequest_p.h"
#include "updaterecordsresponse.h"
#include "cognitosyncrequest_p.h"

namespace AWS {
namespace CognitoSync {

/**
 * @class  UpdateRecordsRequest
 *
 * @brief  Implements CognitoSync UpdateRecords requests.
 *
 * @see    CognitoSyncClient::updateRecords
 */

/**
 * @brief  Constructs a new UpdateRecordsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateRecordsResponse::UpdateRecordsResponse(

/**
 * @brief  Constructs a new UpdateRecordsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateRecordsRequest::UpdateRecordsRequest(const UpdateRecordsRequest &other)
    : CognitoSyncRequest(new UpdateRecordsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateRecordsRequest object.
 */
UpdateRecordsRequest::UpdateRecordsRequest()
    : CognitoSyncRequest(new UpdateRecordsRequestPrivate(CognitoSyncRequest::UpdateRecordsAction, this))
{

}

bool UpdateRecordsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateRecordsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateRecordsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CognitoSyncClient::send
 */
AwsAbstractResponse * UpdateRecordsRequest::response(QNetworkReply * const reply) const
{
    return new UpdateRecordsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateRecordsRequestPrivate
 *
 * @brief  Private implementation for UpdateRecordsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateRecordsRequestPrivate object.
 *
 * @param  action  CognitoSync action being performed.
 * @param  q       Pointer to this object's public UpdateRecordsRequest instance.
 */
UpdateRecordsRequestPrivate::UpdateRecordsRequestPrivate(
    const CognitoSyncRequest::Action action, UpdateRecordsRequest * const q)
    : UpdateRecordsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateRecordsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateRecordsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateRecordsRequest instance.
 */
UpdateRecordsRequestPrivate::UpdateRecordsRequestPrivate(
    const UpdateRecordsRequestPrivate &other, UpdateRecordsRequest * const q)
    : UpdateRecordsPrivate(other, q)
{

}
