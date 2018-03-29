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

#include "getintentsrequest.h"
#include "getintentsrequest_p.h"
#include "getintentsresponse.h"
#include "lexmodelbuildingservicerequest_p.h"

namespace QtAws {
namespace LexModelBuildingService {

/**
 * @class  GetIntentsRequest
 *
 * @brief  Implements LexModelBuildingService GetIntents requests.
 *
 * @see    LexModelBuildingServiceClient::getIntents
 */

/**
 * @brief  Constructs a new GetIntentsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetIntentsRequest::GetIntentsRequest(const GetIntentsRequest &other)
    : LexModelBuildingServiceRequest(new GetIntentsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetIntentsRequest object.
 */
GetIntentsRequest::GetIntentsRequest()
    : LexModelBuildingServiceRequest(new GetIntentsRequestPrivate(LexModelBuildingServiceRequest::GetIntentsAction, this))
{

}

bool GetIntentsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetIntentsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetIntentsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LexModelBuildingServiceClient::send
 */
AwsAbstractResponse * GetIntentsRequest::response(QNetworkReply * const reply) const
{
    return new GetIntentsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetIntentsRequestPrivate
 *
 * @brief  Private implementation for GetIntentsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetIntentsRequestPrivate object.
 *
 * @param  action  LexModelBuildingService action being performed.
 * @param  q       Pointer to this object's public GetIntentsRequest instance.
 */
GetIntentsRequestPrivate::GetIntentsRequestPrivate(
    const LexModelBuildingServiceRequest::Action action, GetIntentsRequest * const q)
    : GetIntentsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetIntentsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetIntentsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetIntentsRequest instance.
 */
GetIntentsRequestPrivate::GetIntentsRequestPrivate(
    const GetIntentsRequestPrivate &other, GetIntentsRequest * const q)
    : GetIntentsPrivate(other, q)
{

}

} // namespace LexModelBuildingService
} // namespace QtAws
