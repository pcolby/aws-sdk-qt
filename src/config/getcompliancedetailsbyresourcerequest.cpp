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

#include "getcompliancedetailsbyresourcerequest.h"
#include "getcompliancedetailsbyresourcerequest_p.h"
#include "getcompliancedetailsbyresourceresponse.h"
#include "configservicerequest_p.h"

namespace AWS {
namespace ConfigService {

/**
 * @class  GetComplianceDetailsByResourceRequest
 *
 * @brief  Implements ConfigService GetComplianceDetailsByResource requests.
 *
 * @see    ConfigServiceClient::getComplianceDetailsByResource
 */

/**
 * @brief  Constructs a new GetComplianceDetailsByResourceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetComplianceDetailsByResourceResponse::GetComplianceDetailsByResourceResponse(

/**
 * @brief  Constructs a new GetComplianceDetailsByResourceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetComplianceDetailsByResourceRequest::GetComplianceDetailsByResourceRequest(const GetComplianceDetailsByResourceRequest &other)
    : ConfigServiceRequest(new GetComplianceDetailsByResourceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetComplianceDetailsByResourceRequest object.
 */
GetComplianceDetailsByResourceRequest::GetComplianceDetailsByResourceRequest()
    : ConfigServiceRequest(new GetComplianceDetailsByResourceRequestPrivate(ConfigServiceRequest::GetComplianceDetailsByResourceAction, this))
{

}

bool GetComplianceDetailsByResourceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetComplianceDetailsByResourceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetComplianceDetailsByResourceResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ConfigServiceClient::send
 */
AwsAbstractResponse * GetComplianceDetailsByResourceRequest::response(QNetworkReply * const reply) const
{
    return new GetComplianceDetailsByResourceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetComplianceDetailsByResourceRequestPrivate
 *
 * @brief  Private implementation for GetComplianceDetailsByResourceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetComplianceDetailsByResourceRequestPrivate object.
 *
 * @param  action  ConfigService action being performed.
 * @param  q       Pointer to this object's public GetComplianceDetailsByResourceRequest instance.
 */
GetComplianceDetailsByResourceRequestPrivate::GetComplianceDetailsByResourceRequestPrivate(
    const ConfigServiceRequest::Action action, GetComplianceDetailsByResourceRequest * const q)
    : GetComplianceDetailsByResourcePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetComplianceDetailsByResourceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetComplianceDetailsByResourceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetComplianceDetailsByResourceRequest instance.
 */
GetComplianceDetailsByResourceRequestPrivate::GetComplianceDetailsByResourceRequestPrivate(
    const GetComplianceDetailsByResourceRequestPrivate &other, GetComplianceDetailsByResourceRequest * const q)
    : GetComplianceDetailsByResourcePrivate(other, q)
{

}
