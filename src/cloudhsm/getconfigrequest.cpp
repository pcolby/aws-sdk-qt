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

#include "getconfigrequest.h"
#include "getconfigrequest_p.h"
#include "getconfigresponse.h"
#include "cloudhsmrequest_p.h"

namespace QtAws {
namespace CloudHSM {

/**
 * @class  GetConfigRequest
 *
 * @brief  Implements CloudHSM GetConfig requests.
 *
 * @see    CloudHSMClient::getConfig
 */

/**
 * @brief  Constructs a new GetConfigRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetConfigRequest::GetConfigRequest(const GetConfigRequest &other)
    : CloudHSMRequest(new GetConfigRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetConfigRequest object.
 */
GetConfigRequest::GetConfigRequest()
    : CloudHSMRequest(new GetConfigRequestPrivate(CloudHSMRequest::GetConfigAction, this))
{

}

bool GetConfigRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetConfigResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetConfigResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudHSMClient::send
 */
QtAws::Core::AwsAbstractResponse * GetConfigRequest::response(QNetworkReply * const reply) const
{
    return new GetConfigResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetConfigRequestPrivate
 *
 * @brief  Private implementation for GetConfigRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetConfigRequestPrivate object.
 *
 * @param  action  CloudHSM action being performed.
 * @param  q       Pointer to this object's public GetConfigRequest instance.
 */
GetConfigRequestPrivate::GetConfigRequestPrivate(
    const CloudHSMRequest::Action action, GetConfigRequest * const q)
    : GetConfigPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetConfigRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetConfigRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetConfigRequest instance.
 */
GetConfigRequestPrivate::GetConfigRequestPrivate(
    const GetConfigRequestPrivate &other, GetConfigRequest * const q)
    : GetConfigPrivate(other, q)
{

}

} // namespace CloudHSM
} // namespace QtAws
