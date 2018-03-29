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

#include "addtagstoresourcerequest.h"
#include "addtagstoresourcerequest_p.h"
#include "addtagstoresourceresponse.h"
#include "rdsrequest_p.h"

namespace QtAws {
namespace RDS {

/**
 * @class  AddTagsToResourceRequest
 *
 * @brief  Implements RDS AddTagsToResource requests.
 *
 * @see    RDSClient::addTagsToResource
 */

/**
 * @brief  Constructs a new AddTagsToResourceRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
AddTagsToResourceRequest::AddTagsToResourceRequest(const AddTagsToResourceRequest &other)
    : RDSRequest(new AddTagsToResourceRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new AddTagsToResourceRequest object.
 */
AddTagsToResourceRequest::AddTagsToResourceRequest()
    : RDSRequest(new AddTagsToResourceRequestPrivate(RDSRequest::AddTagsToResourceAction, this))
{

}

bool AddTagsToResourceRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an AddTagsToResourceResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An AddTagsToResourceResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  RDSClient::send
 */
QtAws::Core::AwsAbstractResponse * AddTagsToResourceRequest::response(QNetworkReply * const reply) const
{
    return new AddTagsToResourceResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  AddTagsToResourceRequestPrivate
 *
 * @brief  Private implementation for AddTagsToResourceRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AddTagsToResourceRequestPrivate object.
 *
 * @param  action  RDS action being performed.
 * @param  q       Pointer to this object's public AddTagsToResourceRequest instance.
 */
AddTagsToResourceRequestPrivate::AddTagsToResourceRequestPrivate(
    const RDSRequest::Action action, AddTagsToResourceRequest * const q)
    : AddTagsToResourcePrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new AddTagsToResourceRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the AddTagsToResourceRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public AddTagsToResourceRequest instance.
 */
AddTagsToResourceRequestPrivate::AddTagsToResourceRequestPrivate(
    const AddTagsToResourceRequestPrivate &other, AddTagsToResourceRequest * const q)
    : AddTagsToResourcePrivate(other, q)
{

}

} // namespace RDS
} // namespace QtAws
