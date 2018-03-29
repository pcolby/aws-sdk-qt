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

#include "listimportsrequest.h"
#include "listimportsrequest_p.h"
#include "listimportsresponse.h"
#include "cloudformationrequest_p.h"

namespace QtAws {
namespace CloudFormation {

/**
 * @class  ListImportsRequest
 *
 * @brief  Implements CloudFormation ListImports requests.
 *
 * @see    CloudFormationClient::listImports
 */

/**
 * @brief  Constructs a new ListImportsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListImportsRequest::ListImportsRequest(const ListImportsRequest &other)
    : CloudFormationRequest(new ListImportsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListImportsRequest object.
 */
ListImportsRequest::ListImportsRequest()
    : CloudFormationRequest(new ListImportsRequestPrivate(CloudFormationRequest::ListImportsAction, this))
{

}

bool ListImportsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListImportsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListImportsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CloudFormationClient::send
 */
QtAws::Core::AwsAbstractResponse * ListImportsRequest::response(QNetworkReply * const reply) const
{
    return new ListImportsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListImportsRequestPrivate
 *
 * @brief  Private implementation for ListImportsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListImportsRequestPrivate object.
 *
 * @param  action  CloudFormation action being performed.
 * @param  q       Pointer to this object's public ListImportsRequest instance.
 */
ListImportsRequestPrivate::ListImportsRequestPrivate(
    const CloudFormationRequest::Action action, ListImportsRequest * const q)
    : ListImportsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListImportsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListImportsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListImportsRequest instance.
 */
ListImportsRequestPrivate::ListImportsRequestPrivate(
    const ListImportsRequestPrivate &other, ListImportsRequest * const q)
    : ListImportsPrivate(other, q)
{

}

} // namespace CloudFormation
} // namespace QtAws
