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

#include "putschemafromjsonrequest.h"
#include "putschemafromjsonrequest_p.h"
#include "putschemafromjsonresponse.h"
#include "clouddirectoryrequest_p.h"

namespace AWS {
namespace CloudDirectory {

/**
 * @class  PutSchemaFromJsonRequest
 *
 * @brief  Implements CloudDirectory PutSchemaFromJson requests.
 *
 * @see    CloudDirectoryClient::putSchemaFromJson
 */

/**
 * @brief  Constructs a new PutSchemaFromJsonResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutSchemaFromJsonResponse::PutSchemaFromJsonResponse(

/**
 * @brief  Constructs a new PutSchemaFromJsonRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
PutSchemaFromJsonRequest::PutSchemaFromJsonRequest(const PutSchemaFromJsonRequest &other)
    : CloudDirectoryRequest(new PutSchemaFromJsonRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new PutSchemaFromJsonRequest object.
 */
PutSchemaFromJsonRequest::PutSchemaFromJsonRequest()
    : CloudDirectoryRequest(new PutSchemaFromJsonRequestPrivate(CloudDirectoryRequest::PutSchemaFromJsonAction, this))
{

}

bool PutSchemaFromJsonRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an PutSchemaFromJsonResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An PutSchemaFromJsonResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudDirectoryClient::send
 */
AwsAbstractResponse * PutSchemaFromJsonRequest::response(QNetworkReply * const reply) const
{
    return new PutSchemaFromJsonResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  PutSchemaFromJsonRequestPrivate
 *
 * @brief  Private implementation for PutSchemaFromJsonRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutSchemaFromJsonRequestPrivate object.
 *
 * @param  action  CloudDirectory action being performed.
 * @param  q       Pointer to this object's public PutSchemaFromJsonRequest instance.
 */
PutSchemaFromJsonRequestPrivate::PutSchemaFromJsonRequestPrivate(
    const CloudDirectoryRequest::Action action, PutSchemaFromJsonRequest * const q)
    : PutSchemaFromJsonPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new PutSchemaFromJsonRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the PutSchemaFromJsonRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public PutSchemaFromJsonRequest instance.
 */
PutSchemaFromJsonRequestPrivate::PutSchemaFromJsonRequestPrivate(
    const PutSchemaFromJsonRequestPrivate &other, PutSchemaFromJsonRequest * const q)
    : PutSchemaFromJsonPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace AWS
