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

#include "getaccountsettingsrequest.h"
#include "getaccountsettingsrequest_p.h"
#include "getaccountsettingsresponse.h"
#include "lambdarequest_p.h"

namespace AWS {
namespace Lambda {

/**
 * @class  GetAccountSettingsRequest
 *
 * @brief  Implements Lambda GetAccountSettings requests.
 *
 * @see    LambdaClient::getAccountSettings
 */

/**
 * @brief  Constructs a new GetAccountSettingsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetAccountSettingsResponse::GetAccountSettingsResponse(

/**
 * @brief  Constructs a new GetAccountSettingsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetAccountSettingsRequest::GetAccountSettingsRequest(const GetAccountSettingsRequest &other)
    : LambdaRequest(new GetAccountSettingsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetAccountSettingsRequest object.
 */
GetAccountSettingsRequest::GetAccountSettingsRequest()
    : LambdaRequest(new GetAccountSettingsRequestPrivate(LambdaRequest::GetAccountSettingsAction, this))
{

}

bool GetAccountSettingsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetAccountSettingsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetAccountSettingsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LambdaClient::send
 */
AwsAbstractResponse * GetAccountSettingsRequest::response(QNetworkReply * const reply) const
{
    return new GetAccountSettingsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetAccountSettingsRequestPrivate
 *
 * @brief  Private implementation for GetAccountSettingsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetAccountSettingsRequestPrivate object.
 *
 * @param  action  Lambda action being performed.
 * @param  q       Pointer to this object's public GetAccountSettingsRequest instance.
 */
GetAccountSettingsRequestPrivate::GetAccountSettingsRequestPrivate(
    const LambdaRequest::Action action, GetAccountSettingsRequest * const q)
    : GetAccountSettingsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetAccountSettingsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetAccountSettingsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetAccountSettingsRequest instance.
 */
GetAccountSettingsRequestPrivate::GetAccountSettingsRequestPrivate(
    const GetAccountSettingsRequestPrivate &other, GetAccountSettingsRequest * const q)
    : GetAccountSettingsPrivate(other, q)
{

}
