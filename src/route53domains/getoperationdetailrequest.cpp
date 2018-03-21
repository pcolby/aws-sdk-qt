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

#include "getoperationdetailrequest.h"
#include "getoperationdetailrequest_p.h"
#include "getoperationdetailresponse.h"
#include "route53domainsrequest_p.h"

namespace AWS {
namespace Route53Domains {

/**
 * @class  GetOperationDetailRequest
 *
 * @brief  Implements Route53Domains GetOperationDetail requests.
 *
 * @see    Route53DomainsClient::getOperationDetail
 */

/**
 * @brief  Constructs a new GetOperationDetailResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetOperationDetailResponse::GetOperationDetailResponse(

/**
 * @brief  Constructs a new GetOperationDetailRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetOperationDetailRequest::GetOperationDetailRequest(const GetOperationDetailRequest &other)
    : Route53DomainsRequest(new GetOperationDetailRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetOperationDetailRequest object.
 */
GetOperationDetailRequest::GetOperationDetailRequest()
    : Route53DomainsRequest(new GetOperationDetailRequestPrivate(Route53DomainsRequest::GetOperationDetailAction, this))
{

}

bool GetOperationDetailRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetOperationDetailResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetOperationDetailResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  Route53DomainsClient::send
 */
AwsAbstractResponse * GetOperationDetailRequest::response(QNetworkReply * const reply) const
{
    return new GetOperationDetailResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetOperationDetailRequestPrivate
 *
 * @brief  Private implementation for GetOperationDetailRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetOperationDetailRequestPrivate object.
 *
 * @param  action  Route53Domains action being performed.
 * @param  q       Pointer to this object's public GetOperationDetailRequest instance.
 */
GetOperationDetailRequestPrivate::GetOperationDetailRequestPrivate(
    const Route53DomainsRequest::Action action, GetOperationDetailRequest * const q)
    : GetOperationDetailPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetOperationDetailRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetOperationDetailRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetOperationDetailRequest instance.
 */
GetOperationDetailRequestPrivate::GetOperationDetailRequestPrivate(
    const GetOperationDetailRequestPrivate &other, GetOperationDetailRequest * const q)
    : GetOperationDetailPrivate(other, q)
{

}

} // namespace Route53Domains
} // namespace AWS
