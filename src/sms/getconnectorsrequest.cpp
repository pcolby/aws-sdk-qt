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

#include "getconnectorsrequest.h"
#include "getconnectorsrequest_p.h"
#include "getconnectorsresponse.h"
#include "smsrequest_p.h"

namespace QtAws {
namespace SMS {

/**
 * @class  GetConnectorsRequest
 *
 * @brief  Implements SMS GetConnectors requests.
 *
 * @see    SMSClient::getConnectors
 */

/**
 * @brief  Constructs a new GetConnectorsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetConnectorsRequest::GetConnectorsRequest(const GetConnectorsRequest &other)
    : SMSRequest(new GetConnectorsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetConnectorsRequest object.
 */
GetConnectorsRequest::GetConnectorsRequest()
    : SMSRequest(new GetConnectorsRequestPrivate(SMSRequest::GetConnectorsAction, this))
{

}

bool GetConnectorsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetConnectorsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetConnectorsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  SMSClient::send
 */
QtAws::Core::AwsAbstractResponse * GetConnectorsRequest::response(QNetworkReply * const reply) const
{
    return new GetConnectorsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetConnectorsRequestPrivate
 *
 * @brief  Private implementation for GetConnectorsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetConnectorsRequestPrivate object.
 *
 * @param  action  SMS action being performed.
 * @param  q       Pointer to this object's public GetConnectorsRequest instance.
 */
GetConnectorsRequestPrivate::GetConnectorsRequestPrivate(
    const SMSRequest::Action action, GetConnectorsRequest * const q)
    : GetConnectorsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetConnectorsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetConnectorsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetConnectorsRequest instance.
 */
GetConnectorsRequestPrivate::GetConnectorsRequestPrivate(
    const GetConnectorsRequestPrivate &other, GetConnectorsRequest * const q)
    : GetConnectorsPrivate(other, q)
{

}

} // namespace SMS
} // namespace QtAws
