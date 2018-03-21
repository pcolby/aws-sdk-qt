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

#include "getutterancesviewrequest.h"
#include "getutterancesviewrequest_p.h"
#include "getutterancesviewresponse.h"
#include "lexmodelbuildingservicerequest_p.h"

namespace AWS {
namespace LexModelBuildingService {

/**
 * @class  GetUtterancesViewRequest
 *
 * @brief  Implements LexModelBuildingService GetUtterancesView requests.
 *
 * @see    LexModelBuildingServiceClient::getUtterancesView
 */

/**
 * @brief  Constructs a new GetUtterancesViewResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetUtterancesViewResponse::GetUtterancesViewResponse(

/**
 * @brief  Constructs a new GetUtterancesViewRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetUtterancesViewRequest::GetUtterancesViewRequest(const GetUtterancesViewRequest &other)
    : LexModelBuildingServiceRequest(new GetUtterancesViewRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetUtterancesViewRequest object.
 */
GetUtterancesViewRequest::GetUtterancesViewRequest()
    : LexModelBuildingServiceRequest(new GetUtterancesViewRequestPrivate(LexModelBuildingServiceRequest::GetUtterancesViewAction, this))
{

}

bool GetUtterancesViewRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetUtterancesViewResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetUtterancesViewResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  LexModelBuildingServiceClient::send
 */
AwsAbstractResponse * GetUtterancesViewRequest::response(QNetworkReply * const reply) const
{
    return new GetUtterancesViewResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetUtterancesViewRequestPrivate
 *
 * @brief  Private implementation for GetUtterancesViewRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetUtterancesViewRequestPrivate object.
 *
 * @param  action  LexModelBuildingService action being performed.
 * @param  q       Pointer to this object's public GetUtterancesViewRequest instance.
 */
GetUtterancesViewRequestPrivate::GetUtterancesViewRequestPrivate(
    const LexModelBuildingServiceRequest::Action action, GetUtterancesViewRequest * const q)
    : GetUtterancesViewPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetUtterancesViewRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetUtterancesViewRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetUtterancesViewRequest instance.
 */
GetUtterancesViewRequestPrivate::GetUtterancesViewRequestPrivate(
    const GetUtterancesViewRequestPrivate &other, GetUtterancesViewRequest * const q)
    : GetUtterancesViewPrivate(other, q)
{

}
