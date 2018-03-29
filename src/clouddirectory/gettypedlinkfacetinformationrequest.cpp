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

#include "gettypedlinkfacetinformationrequest.h"
#include "gettypedlinkfacetinformationrequest_p.h"
#include "gettypedlinkfacetinformationresponse.h"
#include "clouddirectoryrequest_p.h"

namespace AWS {
namespace CloudDirectory {

/**
 * @class  GetTypedLinkFacetInformationRequest
 *
 * @brief  Implements CloudDirectory GetTypedLinkFacetInformation requests.
 *
 * @see    CloudDirectoryClient::getTypedLinkFacetInformation
 */

/**
 * @brief  Constructs a new GetTypedLinkFacetInformationRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetTypedLinkFacetInformationRequest::GetTypedLinkFacetInformationRequest(const GetTypedLinkFacetInformationRequest &other)
    : CloudDirectoryRequest(new GetTypedLinkFacetInformationRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new GetTypedLinkFacetInformationRequest object.
 */
GetTypedLinkFacetInformationRequest::GetTypedLinkFacetInformationRequest()
    : CloudDirectoryRequest(new GetTypedLinkFacetInformationRequestPrivate(CloudDirectoryRequest::GetTypedLinkFacetInformationAction, this))
{

}

bool GetTypedLinkFacetInformationRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an GetTypedLinkFacetInformationResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetTypedLinkFacetInformationResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudDirectoryClient::send
 */
AwsAbstractResponse * GetTypedLinkFacetInformationRequest::response(QNetworkReply * const reply) const
{
    return new GetTypedLinkFacetInformationResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  GetTypedLinkFacetInformationRequestPrivate
 *
 * @brief  Private implementation for GetTypedLinkFacetInformationRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetTypedLinkFacetInformationRequestPrivate object.
 *
 * @param  action  CloudDirectory action being performed.
 * @param  q       Pointer to this object's public GetTypedLinkFacetInformationRequest instance.
 */
GetTypedLinkFacetInformationRequestPrivate::GetTypedLinkFacetInformationRequestPrivate(
    const CloudDirectoryRequest::Action action, GetTypedLinkFacetInformationRequest * const q)
    : GetTypedLinkFacetInformationPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new GetTypedLinkFacetInformationRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetTypedLinkFacetInformationRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetTypedLinkFacetInformationRequest instance.
 */
GetTypedLinkFacetInformationRequestPrivate::GetTypedLinkFacetInformationRequestPrivate(
    const GetTypedLinkFacetInformationRequestPrivate &other, GetTypedLinkFacetInformationRequest * const q)
    : GetTypedLinkFacetInformationPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace AWS
