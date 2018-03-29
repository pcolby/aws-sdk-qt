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

#include "getdirectorylimitsrequest.h"
#include "getdirectorylimitsrequest_p.h"
#include "getdirectorylimitsresponse.h"
#include "directoryservicerequest_p.h"

namespace QtAws {
namespace DirectoryService {

/**
 * @class  GetDirectoryLimitsRequest
 *
 * @brief  Implements DirectoryService GetDirectoryLimits requests.
 *
 * @see    DirectoryServiceClient::getDirectoryLimits
 */

/**
 * @brief  Constructs a new GetDirectoryLimitsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetDirectoryLimitsRequest::GetDirectoryLimitsRequest(const GetDirectoryLimitsRequest &other)
    : DirectoryServiceRequest(new GetDirectoryLimitsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetDirectoryLimitsRequest object.
 */
GetDirectoryLimitsRequest::GetDirectoryLimitsRequest()
    : DirectoryServiceRequest(new GetDirectoryLimitsRequestPrivate(DirectoryServiceRequest::GetDirectoryLimitsAction, this))
{

}

bool GetDirectoryLimitsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetDirectoryLimitsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetDirectoryLimitsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DirectoryServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDirectoryLimitsRequest::response(QNetworkReply * const reply) const
{
    return new GetDirectoryLimitsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetDirectoryLimitsRequestPrivate
 *
 * @brief  Private implementation for GetDirectoryLimitsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDirectoryLimitsRequestPrivate object.
 *
 * @param  action  DirectoryService action being performed.
 * @param  q       Pointer to this object's public GetDirectoryLimitsRequest instance.
 */
GetDirectoryLimitsRequestPrivate::GetDirectoryLimitsRequestPrivate(
    const DirectoryServiceRequest::Action action, GetDirectoryLimitsRequest * const q)
    : GetDirectoryLimitsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetDirectoryLimitsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetDirectoryLimitsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetDirectoryLimitsRequest instance.
 */
GetDirectoryLimitsRequestPrivate::GetDirectoryLimitsRequestPrivate(
    const GetDirectoryLimitsRequestPrivate &other, GetDirectoryLimitsRequest * const q)
    : GetDirectoryLimitsPrivate(other, q)
{

}

} // namespace DirectoryService
} // namespace QtAws
