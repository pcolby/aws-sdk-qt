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

#include "getaccountauthorizationdetailsrequest.h"
#include "getaccountauthorizationdetailsrequest_p.h"
#include "getaccountauthorizationdetailsresponse.h"
#include "iamrequest_p.h"

namespace QtAws {
namespace IAM {

/**
 * @class  GetAccountAuthorizationDetailsRequest
 *
 * @brief  Implements IAM GetAccountAuthorizationDetails requests.
 *
 * @see    IAMClient::getAccountAuthorizationDetails
 */

/**
 * @brief  Constructs a new GetAccountAuthorizationDetailsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetAccountAuthorizationDetailsRequest::GetAccountAuthorizationDetailsRequest(const GetAccountAuthorizationDetailsRequest &other)
    : IAMRequest(new GetAccountAuthorizationDetailsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetAccountAuthorizationDetailsRequest object.
 */
GetAccountAuthorizationDetailsRequest::GetAccountAuthorizationDetailsRequest()
    : IAMRequest(new GetAccountAuthorizationDetailsRequestPrivate(IAMRequest::GetAccountAuthorizationDetailsAction, this))
{

}

bool GetAccountAuthorizationDetailsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetAccountAuthorizationDetailsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetAccountAuthorizationDetailsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  IAMClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAccountAuthorizationDetailsRequest::response(QNetworkReply * const reply) const
{
    return new GetAccountAuthorizationDetailsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetAccountAuthorizationDetailsRequestPrivate
 *
 * @brief  Private implementation for GetAccountAuthorizationDetailsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetAccountAuthorizationDetailsRequestPrivate object.
 *
 * @param  action  IAM action being performed.
 * @param  q       Pointer to this object's public GetAccountAuthorizationDetailsRequest instance.
 */
GetAccountAuthorizationDetailsRequestPrivate::GetAccountAuthorizationDetailsRequestPrivate(
    const IAMRequest::Action action, GetAccountAuthorizationDetailsRequest * const q)
    : IAMRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetAccountAuthorizationDetailsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetAccountAuthorizationDetailsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetAccountAuthorizationDetailsRequest instance.
 */
GetAccountAuthorizationDetailsRequestPrivate::GetAccountAuthorizationDetailsRequestPrivate(
    const GetAccountAuthorizationDetailsRequestPrivate &other, GetAccountAuthorizationDetailsRequest * const q)
    : IAMRequestPrivate(other, q)
{

}

} // namespace IAM
} // namespace QtAws
