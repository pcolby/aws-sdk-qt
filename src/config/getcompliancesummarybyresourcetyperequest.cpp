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

#include "getcompliancesummarybyresourcetyperequest.h"
#include "getcompliancesummarybyresourcetyperequest_p.h"
#include "getcompliancesummarybyresourcetyperesponse.h"
#include "configservicerequest_p.h"

namespace AWS {
namespace ConfigService {

/**
 * @class  GetComplianceSummaryByResourceTypeRequest
 *
 * @brief  Implements ConfigService GetComplianceSummaryByResourceType requests.
 *
 * @see    ConfigServiceClient::getComplianceSummaryByResourceType
 */

/**
 * @brief  Constructs a new GetComplianceSummaryByResourceTypeRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetComplianceSummaryByResourceTypeRequest::GetComplianceSummaryByResourceTypeRequest(const GetComplianceSummaryByResourceTypeRequest &other)
    : ConfigServiceRequest(new GetComplianceSummaryByResourceTypeRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetComplianceSummaryByResourceTypeRequest object.
 */
GetComplianceSummaryByResourceTypeRequest::GetComplianceSummaryByResourceTypeRequest()
    : ConfigServiceRequest(new GetComplianceSummaryByResourceTypeRequestPrivate(ConfigServiceRequest::GetComplianceSummaryByResourceTypeAction, this))
{

}

bool GetComplianceSummaryByResourceTypeRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetComplianceSummaryByResourceTypeResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetComplianceSummaryByResourceTypeResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ConfigServiceClient::send
 */
AwsAbstractResponse * GetComplianceSummaryByResourceTypeRequest::response(QNetworkReply * const reply) const
{
    return new GetComplianceSummaryByResourceTypeResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetComplianceSummaryByResourceTypeRequestPrivate
 *
 * @brief  Private implementation for GetComplianceSummaryByResourceTypeRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetComplianceSummaryByResourceTypeRequestPrivate object.
 *
 * @param  action  ConfigService action being performed.
 * @param  q       Pointer to this object's public GetComplianceSummaryByResourceTypeRequest instance.
 */
GetComplianceSummaryByResourceTypeRequestPrivate::GetComplianceSummaryByResourceTypeRequestPrivate(
    const ConfigServiceRequest::Action action, GetComplianceSummaryByResourceTypeRequest * const q)
    : GetComplianceSummaryByResourceTypePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetComplianceSummaryByResourceTypeRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetComplianceSummaryByResourceTypeRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetComplianceSummaryByResourceTypeRequest instance.
 */
GetComplianceSummaryByResourceTypeRequestPrivate::GetComplianceSummaryByResourceTypeRequestPrivate(
    const GetComplianceSummaryByResourceTypeRequestPrivate &other, GetComplianceSummaryByResourceTypeRequest * const q)
    : GetComplianceSummaryByResourceTypePrivate(other, q)
{

}

} // namespace ConfigService
} // namespace AWS
