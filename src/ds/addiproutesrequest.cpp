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

#include "addiproutesrequest.h"
#include "addiproutesrequest_p.h"
#include "addiproutesresponse.h"
#include "directoryservicerequest_p.h"

namespace QtAws {
namespace DirectoryService {

/**
 * @class  AddIpRoutesRequest
 *
 * @brief  Implements DirectoryService AddIpRoutes requests.
 *
 * @see    DirectoryServiceClient::addIpRoutes
 */

/**
 * @brief  Constructs a new AddIpRoutesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AddIpRoutesRequest::AddIpRoutesRequest(const AddIpRoutesRequest &other)
    : DirectoryServiceRequest(new AddIpRoutesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AddIpRoutesRequest object.
 */
AddIpRoutesRequest::AddIpRoutesRequest()
    : DirectoryServiceRequest(new AddIpRoutesRequestPrivate(DirectoryServiceRequest::AddIpRoutesAction, this))
{

}

bool AddIpRoutesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AddIpRoutesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AddIpRoutesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DirectoryServiceClient::send
 */
QtAws::Core::AwsAbstractResponse * AddIpRoutesRequest::response(QNetworkReply * const reply) const
{
    return new AddIpRoutesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AddIpRoutesRequestPrivate
 *
 * @brief  Private implementation for AddIpRoutesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AddIpRoutesRequestPrivate object.
 *
 * @param  action  DirectoryService action being performed.
 * @param  q       Pointer to this object's public AddIpRoutesRequest instance.
 */
AddIpRoutesRequestPrivate::AddIpRoutesRequestPrivate(
    const DirectoryServiceRequest::Action action, AddIpRoutesRequest * const q)
    : AddIpRoutesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AddIpRoutesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AddIpRoutesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AddIpRoutesRequest instance.
 */
AddIpRoutesRequestPrivate::AddIpRoutesRequestPrivate(
    const AddIpRoutesRequestPrivate &other, AddIpRoutesRequest * const q)
    : AddIpRoutesPrivate(other, q)
{

}

} // namespace DirectoryService
} // namespace QtAws
