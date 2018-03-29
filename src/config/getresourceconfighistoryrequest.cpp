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

#include "getresourceconfighistoryrequest.h"
#include "getresourceconfighistoryrequest_p.h"
#include "getresourceconfighistoryresponse.h"
#include "configservicerequest_p.h"

namespace QtAws {
namespace ConfigService {

/**
 * @class  GetResourceConfigHistoryRequest
 *
 * @brief  Implements ConfigService GetResourceConfigHistory requests.
 *
 * @see    ConfigServiceClient::getResourceConfigHistory
 */

/**
 * @brief  Constructs a new GetResourceConfigHistoryRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetResourceConfigHistoryRequest::GetResourceConfigHistoryRequest(const GetResourceConfigHistoryRequest &other)
    : ConfigServiceRequest(new GetResourceConfigHistoryRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetResourceConfigHistoryRequest object.
 */
GetResourceConfigHistoryRequest::GetResourceConfigHistoryRequest()
    : ConfigServiceRequest(new GetResourceConfigHistoryRequestPrivate(ConfigServiceRequest::GetResourceConfigHistoryAction, this))
{

}

bool GetResourceConfigHistoryRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetResourceConfigHistoryResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetResourceConfigHistoryResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ConfigServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * GetResourceConfigHistoryRequest::response(QNetworkReply * const reply) const
{
    return new GetResourceConfigHistoryResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetResourceConfigHistoryRequestPrivate
 *
 * @brief  Private implementation for GetResourceConfigHistoryRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetResourceConfigHistoryRequestPrivate object.
 *
 * @param  action  ConfigService action being performed.
 * @param  q       Pointer to this object's public GetResourceConfigHistoryRequest instance.
 */
GetResourceConfigHistoryRequestPrivate::GetResourceConfigHistoryRequestPrivate(
    const ConfigServiceRequest::Action action, GetResourceConfigHistoryRequest * const q)
    : GetResourceConfigHistoryPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetResourceConfigHistoryRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetResourceConfigHistoryRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetResourceConfigHistoryRequest instance.
 */
GetResourceConfigHistoryRequestPrivate::GetResourceConfigHistoryRequestPrivate(
    const GetResourceConfigHistoryRequestPrivate &other, GetResourceConfigHistoryRequest * const q)
    : GetResourceConfigHistoryPrivate(other, q)
{

}

} // namespace ConfigService
} // namespace QtAws
