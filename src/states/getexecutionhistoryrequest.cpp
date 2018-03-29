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

#include "getexecutionhistoryrequest.h"
#include "getexecutionhistoryrequest_p.h"
#include "getexecutionhistoryresponse.h"
#include "sfnrequest_p.h"

namespace AWS {
namespace SFN {

/**
 * @class  GetExecutionHistoryRequest
 *
 * @brief  Implements SFN GetExecutionHistory requests.
 *
 * @see    SFNClient::getExecutionHistory
 */

/**
 * @brief  Constructs a new GetExecutionHistoryRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetExecutionHistoryRequest::GetExecutionHistoryRequest(const GetExecutionHistoryRequest &other)
    : SFNRequest(new GetExecutionHistoryRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetExecutionHistoryRequest object.
 */
GetExecutionHistoryRequest::GetExecutionHistoryRequest()
    : SFNRequest(new GetExecutionHistoryRequestPrivate(SFNRequest::GetExecutionHistoryAction, this))
{

}

bool GetExecutionHistoryRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetExecutionHistoryResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetExecutionHistoryResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  SFNClient::send
 */
AwsAbstractResponse * GetExecutionHistoryRequest::response(QNetworkReply * const reply) const
{
    return new GetExecutionHistoryResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetExecutionHistoryRequestPrivate
 *
 * @brief  Private implementation for GetExecutionHistoryRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetExecutionHistoryRequestPrivate object.
 *
 * @param  action  SFN action being performed.
 * @param  q       Pointer to this object's public GetExecutionHistoryRequest instance.
 */
GetExecutionHistoryRequestPrivate::GetExecutionHistoryRequestPrivate(
    const SFNRequest::Action action, GetExecutionHistoryRequest * const q)
    : GetExecutionHistoryPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetExecutionHistoryRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetExecutionHistoryRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetExecutionHistoryRequest instance.
 */
GetExecutionHistoryRequestPrivate::GetExecutionHistoryRequestPrivate(
    const GetExecutionHistoryRequestPrivate &other, GetExecutionHistoryRequest * const q)
    : GetExecutionHistoryPrivate(other, q)
{

}

} // namespace SFN
} // namespace AWS
