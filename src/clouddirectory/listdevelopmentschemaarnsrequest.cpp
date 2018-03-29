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

#include "listdevelopmentschemaarnsrequest.h"
#include "listdevelopmentschemaarnsrequest_p.h"
#include "listdevelopmentschemaarnsresponse.h"
#include "clouddirectoryrequest_p.h"

namespace AWS {
namespace CloudDirectory {

/**
 * @class  ListDevelopmentSchemaArnsRequest
 *
 * @brief  Implements CloudDirectory ListDevelopmentSchemaArns requests.
 *
 * @see    CloudDirectoryClient::listDevelopmentSchemaArns
 */

/**
 * @brief  Constructs a new ListDevelopmentSchemaArnsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListDevelopmentSchemaArnsRequest::ListDevelopmentSchemaArnsRequest(const ListDevelopmentSchemaArnsRequest &other)
    : CloudDirectoryRequest(new ListDevelopmentSchemaArnsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListDevelopmentSchemaArnsRequest object.
 */
ListDevelopmentSchemaArnsRequest::ListDevelopmentSchemaArnsRequest()
    : CloudDirectoryRequest(new ListDevelopmentSchemaArnsRequestPrivate(CloudDirectoryRequest::ListDevelopmentSchemaArnsAction, this))
{

}

bool ListDevelopmentSchemaArnsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListDevelopmentSchemaArnsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListDevelopmentSchemaArnsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CloudDirectoryClient::send
 */
AwsAbstractResponse * ListDevelopmentSchemaArnsRequest::response(QNetworkReply * const reply) const
{
    return new ListDevelopmentSchemaArnsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListDevelopmentSchemaArnsRequestPrivate
 *
 * @brief  Private implementation for ListDevelopmentSchemaArnsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListDevelopmentSchemaArnsRequestPrivate object.
 *
 * @param  action  CloudDirectory action being performed.
 * @param  q       Pointer to this object's public ListDevelopmentSchemaArnsRequest instance.
 */
ListDevelopmentSchemaArnsRequestPrivate::ListDevelopmentSchemaArnsRequestPrivate(
    const CloudDirectoryRequest::Action action, ListDevelopmentSchemaArnsRequest * const q)
    : ListDevelopmentSchemaArnsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListDevelopmentSchemaArnsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListDevelopmentSchemaArnsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListDevelopmentSchemaArnsRequest instance.
 */
ListDevelopmentSchemaArnsRequestPrivate::ListDevelopmentSchemaArnsRequestPrivate(
    const ListDevelopmentSchemaArnsRequestPrivate &other, ListDevelopmentSchemaArnsRequest * const q)
    : ListDevelopmentSchemaArnsPrivate(other, q)
{

}

} // namespace CloudDirectory
} // namespace AWS
