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

#include "deleteeventsourcemappingrequest.h"
#include "deleteeventsourcemappingrequest_p.h"
#include "deleteeventsourcemappingresponse.h"
#include "lambdarequest_p.h"

namespace AWS {
namespace Lambda {

/**
 * @class  DeleteEventSourceMappingRequest
 *
 * @brief  Implements Lambda DeleteEventSourceMapping requests.
 *
 * @see    LambdaClient::deleteEventSourceMapping
 */

/**
 * @brief  Constructs a new DeleteEventSourceMappingResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteEventSourceMappingResponse::DeleteEventSourceMappingResponse(

/**
 * @brief  Constructs a new DeleteEventSourceMappingRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteEventSourceMappingRequest::DeleteEventSourceMappingRequest(const DeleteEventSourceMappingRequest &other)
    : LambdaRequest(new DeleteEventSourceMappingRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new DeleteEventSourceMappingRequest object.
 */
DeleteEventSourceMappingRequest::DeleteEventSourceMappingRequest()
    : LambdaRequest(new DeleteEventSourceMappingRequestPrivate(LambdaRequest::DeleteEventSourceMappingAction, this))
{

}

bool DeleteEventSourceMappingRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an DeleteEventSourceMappingResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteEventSourceMappingResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LambdaClient::send
 */
AwsAbstractResponse * DeleteEventSourceMappingRequest::response(QNetworkReply * const reply) const
{
    return new DeleteEventSourceMappingResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  DeleteEventSourceMappingRequestPrivate
 *
 * @brief  Private implementation for DeleteEventSourceMappingRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteEventSourceMappingRequestPrivate object.
 *
 * @param  action  Lambda action being performed.
 * @param  q       Pointer to this object's public DeleteEventSourceMappingRequest instance.
 */
DeleteEventSourceMappingRequestPrivate::DeleteEventSourceMappingRequestPrivate(
    const LambdaRequest::Action action, DeleteEventSourceMappingRequest * const q)
    : DeleteEventSourceMappingPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new DeleteEventSourceMappingRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteEventSourceMappingRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteEventSourceMappingRequest instance.
 */
DeleteEventSourceMappingRequestPrivate::DeleteEventSourceMappingRequestPrivate(
    const DeleteEventSourceMappingRequestPrivate &other, DeleteEventSourceMappingRequest * const q)
    : DeleteEventSourceMappingPrivate(other, q)
{

}
