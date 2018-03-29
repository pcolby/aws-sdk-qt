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

#include "applyschemarequest.h"
#include "applyschemarequest_p.h"
#include "applyschemaresponse.h"
#include "clouddirectoryrequest_p.h"

namespace QtAws {
namespace CloudDirectory {

/**
 * @class  ApplySchemaRequest
 *
 * @brief  Implements CloudDirectory ApplySchema requests.
 *
 * @see    CloudDirectoryClient::applySchema
 */

/**
 * @brief  Constructs a new ApplySchemaRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ApplySchemaRequest::ApplySchemaRequest(const ApplySchemaRequest &other)
    : CloudDirectoryRequest(new ApplySchemaRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ApplySchemaRequest object.
 */
ApplySchemaRequest::ApplySchemaRequest()
    : CloudDirectoryRequest(new ApplySchemaRequestPrivate(CloudDirectoryRequest::ApplySchemaAction, this))
{

}

bool ApplySchemaRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ApplySchemaResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ApplySchemaResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudDirectoryClient::send
 */
QtAws::Core::AwsAbstractResponse * ApplySchemaRequest::response(QNetworkReply * const reply) const
{
    return new ApplySchemaResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ApplySchemaRequestPrivate
 *
 * @brief  Private implementation for ApplySchemaRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ApplySchemaRequestPrivate object.
 *
 * @param  action  CloudDirectory action being performed.
 * @param  q       Pointer to this object's public ApplySchemaRequest instance.
 */
ApplySchemaRequestPrivate::ApplySchemaRequestPrivate(
    const CloudDirectoryRequest::Action action, ApplySchemaRequest * const q)
    : ApplySchemaPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ApplySchemaRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ApplySchemaRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ApplySchemaRequest instance.
 */
ApplySchemaRequestPrivate::ApplySchemaRequestPrivate(
    const ApplySchemaRequestPrivate &other, ApplySchemaRequest * const q)
    : ApplySchemaPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace QtAws
