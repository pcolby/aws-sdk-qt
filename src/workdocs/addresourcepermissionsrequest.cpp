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

#include "addresourcepermissionsrequest.h"
#include "addresourcepermissionsrequest_p.h"
#include "addresourcepermissionsresponse.h"
#include "workdocsrequest_p.h"

namespace AWS {
namespace WorkDocs {

/**
 * @class  AddResourcePermissionsRequest
 *
 * @brief  Implements WorkDocs AddResourcePermissions requests.
 *
 * @see    WorkDocsClient::addResourcePermissions
 */

/**
 * @brief  Constructs a new AddResourcePermissionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AddResourcePermissionsResponse::AddResourcePermissionsResponse(

/**
 * @brief  Constructs a new AddResourcePermissionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AddResourcePermissionsRequest::AddResourcePermissionsRequest(const AddResourcePermissionsRequest &other)
    : WorkDocsRequest(new AddResourcePermissionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AddResourcePermissionsRequest object.
 */
AddResourcePermissionsRequest::AddResourcePermissionsRequest()
    : WorkDocsRequest(new AddResourcePermissionsRequestPrivate(WorkDocsRequest::AddResourcePermissionsAction, this))
{

}

bool AddResourcePermissionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AddResourcePermissionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AddResourcePermissionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  WorkDocsClient::send
 */
AwsAbstractResponse * AddResourcePermissionsRequest::response(QNetworkReply * const reply) const
{
    return new AddResourcePermissionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AddResourcePermissionsRequestPrivate
 *
 * @brief  Private implementation for AddResourcePermissionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AddResourcePermissionsRequestPrivate object.
 *
 * @param  action  WorkDocs action being performed.
 * @param  q       Pointer to this object's public AddResourcePermissionsRequest instance.
 */
AddResourcePermissionsRequestPrivate::AddResourcePermissionsRequestPrivate(
    const WorkDocsRequest::Action action, AddResourcePermissionsRequest * const q)
    : AddResourcePermissionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AddResourcePermissionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AddResourcePermissionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AddResourcePermissionsRequest instance.
 */
AddResourcePermissionsRequestPrivate::AddResourcePermissionsRequestPrivate(
    const AddResourcePermissionsRequestPrivate &other, AddResourcePermissionsRequest * const q)
    : AddResourcePermissionsPrivate(other, q)
{

}
