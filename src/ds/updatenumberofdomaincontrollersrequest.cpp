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

#include "updatenumberofdomaincontrollersrequest.h"
#include "updatenumberofdomaincontrollersrequest_p.h"
#include "updatenumberofdomaincontrollersresponse.h"
#include "directoryservicerequest_p.h"

namespace AWS {
namespace DirectoryService {

/**
 * @class  UpdateNumberOfDomainControllersRequest
 *
 * @brief  Implements DirectoryService UpdateNumberOfDomainControllers requests.
 *
 * @see    DirectoryServiceClient::updateNumberOfDomainControllers
 */

/**
 * @brief  Constructs a new UpdateNumberOfDomainControllersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateNumberOfDomainControllersResponse::UpdateNumberOfDomainControllersResponse(

/**
 * @brief  Constructs a new UpdateNumberOfDomainControllersRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
UpdateNumberOfDomainControllersRequest::UpdateNumberOfDomainControllersRequest(const UpdateNumberOfDomainControllersRequest &other)
    : DirectoryServiceRequest(new UpdateNumberOfDomainControllersRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new UpdateNumberOfDomainControllersRequest object.
 */
UpdateNumberOfDomainControllersRequest::UpdateNumberOfDomainControllersRequest()
    : DirectoryServiceRequest(new UpdateNumberOfDomainControllersRequestPrivate(DirectoryServiceRequest::UpdateNumberOfDomainControllersAction, this))
{

}

bool UpdateNumberOfDomainControllersRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an UpdateNumberOfDomainControllersResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An UpdateNumberOfDomainControllersResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DirectoryServiceClient::send
 */
AwsAbstractResponse * UpdateNumberOfDomainControllersRequest::response(QNetworkReply * const reply) const
{
    return new UpdateNumberOfDomainControllersResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  UpdateNumberOfDomainControllersRequestPrivate
 *
 * @brief  Private implementation for UpdateNumberOfDomainControllersRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateNumberOfDomainControllersRequestPrivate object.
 *
 * @param  action  DirectoryService action being performed.
 * @param  q       Pointer to this object's public UpdateNumberOfDomainControllersRequest instance.
 */
UpdateNumberOfDomainControllersRequestPrivate::UpdateNumberOfDomainControllersRequestPrivate(
    const DirectoryServiceRequest::Action action, UpdateNumberOfDomainControllersRequest * const q)
    : UpdateNumberOfDomainControllersPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new UpdateNumberOfDomainControllersRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the UpdateNumberOfDomainControllersRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public UpdateNumberOfDomainControllersRequest instance.
 */
UpdateNumberOfDomainControllersRequestPrivate::UpdateNumberOfDomainControllersRequestPrivate(
    const UpdateNumberOfDomainControllersRequestPrivate &other, UpdateNumberOfDomainControllersRequest * const q)
    : UpdateNumberOfDomainControllersPrivate(other, q)
{

}
