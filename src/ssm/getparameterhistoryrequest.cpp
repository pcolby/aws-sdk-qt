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

#include "getparameterhistoryrequest.h"
#include "getparameterhistoryrequest_p.h"
#include "getparameterhistoryresponse.h"
#include "ssmrequest_p.h"

namespace AWS {
namespace SSM {

/**
 * @class  GetParameterHistoryRequest
 *
 * @brief  Implements SSM GetParameterHistory requests.
 *
 * @see    SSMClient::getParameterHistory
 */

/**
 * @brief  Constructs a new GetParameterHistoryResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetParameterHistoryResponse::GetParameterHistoryResponse(

/**
 * @brief  Constructs a new GetParameterHistoryRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetParameterHistoryRequest::GetParameterHistoryRequest(const GetParameterHistoryRequest &other)
    : SSMRequest(new GetParameterHistoryRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetParameterHistoryRequest object.
 */
GetParameterHistoryRequest::GetParameterHistoryRequest()
    : SSMRequest(new GetParameterHistoryRequestPrivate(SSMRequest::GetParameterHistoryAction, this))
{

}

bool GetParameterHistoryRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetParameterHistoryResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetParameterHistoryResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SSMClient::send
 */
AwsAbstractResponse * GetParameterHistoryRequest::response(QNetworkReply * const reply) const
{
    return new GetParameterHistoryResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetParameterHistoryRequestPrivate
 *
 * @brief  Private implementation for GetParameterHistoryRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetParameterHistoryRequestPrivate object.
 *
 * @param  action  SSM action being performed.
 * @param  q       Pointer to this object's public GetParameterHistoryRequest instance.
 */
GetParameterHistoryRequestPrivate::GetParameterHistoryRequestPrivate(
    const SSMRequest::Action action, GetParameterHistoryRequest * const q)
    : GetParameterHistoryPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetParameterHistoryRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetParameterHistoryRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetParameterHistoryRequest instance.
 */
GetParameterHistoryRequestPrivate::GetParameterHistoryRequestPrivate(
    const GetParameterHistoryRequestPrivate &other, GetParameterHistoryRequest * const q)
    : GetParameterHistoryPrivate(other, q)
{

}
