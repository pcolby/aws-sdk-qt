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

#include "getobjectattributesrequest.h"
#include "getobjectattributesrequest_p.h"
#include "getobjectattributesresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/**
 * @class  GetObjectAttributesRequest
 *
 * @brief  Implements CloudDirectory GetObjectAttributes requests.
 *
 * @see    CloudDirectoryClient::getObjectAttributes
 */

/**
 * @brief  Constructs a new GetObjectAttributesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetObjectAttributesRequest::GetObjectAttributesRequest(const GetObjectAttributesRequest &other)
    : CloudDirectoryRequest(new GetObjectAttributesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetObjectAttributesRequest object.
 */
GetObjectAttributesRequest::GetObjectAttributesRequest()
    : CloudDirectoryRequest(new GetObjectAttributesRequestPrivate(CloudDirectoryRequest::GetObjectAttributesAction, this))
{

}

bool GetObjectAttributesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetObjectAttributesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetObjectAttributesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudDirectoryClient::send
 */
QtAws::Core::AwsAbstractResponse * GetObjectAttributesRequest::response(QNetworkReply * const reply) const
{
    return new GetObjectAttributesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetObjectAttributesRequestPrivate
 *
 * @brief  Private implementation for GetObjectAttributesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetObjectAttributesRequestPrivate object.
 *
 * @param  action  CloudDirectory action being performed.
 * @param  q       Pointer to this object's public GetObjectAttributesRequest instance.
 */
GetObjectAttributesRequestPrivate::GetObjectAttributesRequestPrivate(
    const CloudDirectoryRequest::Action action, GetObjectAttributesRequest * const q)
    : CloudDirectoryRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetObjectAttributesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetObjectAttributesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetObjectAttributesRequest instance.
 */
GetObjectAttributesRequestPrivate::GetObjectAttributesRequestPrivate(
    const GetObjectAttributesRequestPrivate &other, GetObjectAttributesRequest * const q)
    : CloudDirectoryRequestPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
