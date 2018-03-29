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

#include "listschemaextensionsrequest.h"
#include "listschemaextensionsrequest_p.h"
#include "listschemaextensionsresponse.h"
#include "directoryservicerequest_p.h"

namespace QtAws {
namespace DirectoryService {

/**
 * @class  ListSchemaExtensionsRequest
 *
 * @brief  Implements DirectoryService ListSchemaExtensions requests.
 *
 * @see    DirectoryServiceClient::listSchemaExtensions
 */

/**
 * @brief  Constructs a new ListSchemaExtensionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListSchemaExtensionsRequest::ListSchemaExtensionsRequest(const ListSchemaExtensionsRequest &other)
    : DirectoryServiceRequest(new ListSchemaExtensionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListSchemaExtensionsRequest object.
 */
ListSchemaExtensionsRequest::ListSchemaExtensionsRequest()
    : DirectoryServiceRequest(new ListSchemaExtensionsRequestPrivate(DirectoryServiceRequest::ListSchemaExtensionsAction, this))
{

}

bool ListSchemaExtensionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListSchemaExtensionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListSchemaExtensionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  DirectoryServiceClient::send
 */
AwsAbstractResponse * ListSchemaExtensionsRequest::response(QNetworkReply * const reply) const
{
    return new ListSchemaExtensionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListSchemaExtensionsRequestPrivate
 *
 * @brief  Private implementation for ListSchemaExtensionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListSchemaExtensionsRequestPrivate object.
 *
 * @param  action  DirectoryService action being performed.
 * @param  q       Pointer to this object's public ListSchemaExtensionsRequest instance.
 */
ListSchemaExtensionsRequestPrivate::ListSchemaExtensionsRequestPrivate(
    const DirectoryServiceRequest::Action action, ListSchemaExtensionsRequest * const q)
    : ListSchemaExtensionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListSchemaExtensionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListSchemaExtensionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListSchemaExtensionsRequest instance.
 */
ListSchemaExtensionsRequestPrivate::ListSchemaExtensionsRequestPrivate(
    const ListSchemaExtensionsRequestPrivate &other, ListSchemaExtensionsRequest * const q)
    : ListSchemaExtensionsPrivate(other, q)
{

}

} // namespace DirectoryService
} // namespace QtAws
