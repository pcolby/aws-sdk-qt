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

#include "listactiontypesrequest.h"
#include "listactiontypesrequest_p.h"
#include "listactiontypesresponse.h"
#include "codepipelinerequest_p.h"

namespace QtAws {
namespace CodePipeline {

/**
 * @class  ListActionTypesRequest
 *
 * @brief  Implements CodePipeline ListActionTypes requests.
 *
 * @see    CodePipelineClient::listActionTypes
 */

/**
 * @brief  Constructs a new ListActionTypesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListActionTypesRequest::ListActionTypesRequest(const ListActionTypesRequest &other)
    : CodePipelineRequest(new ListActionTypesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListActionTypesRequest object.
 */
ListActionTypesRequest::ListActionTypesRequest()
    : CodePipelineRequest(new ListActionTypesRequestPrivate(CodePipelineRequest::ListActionTypesAction, this))
{

}

bool ListActionTypesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListActionTypesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListActionTypesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  CodePipelineClient::send
 */
QtAws::Core::AwsAbstractResponse * ListActionTypesRequest::response(QNetworkReply * const reply) const
{
    return new ListActionTypesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListActionTypesRequestPrivate
 *
 * @brief  Private implementation for ListActionTypesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListActionTypesRequestPrivate object.
 *
 * @param  action  CodePipeline action being performed.
 * @param  q       Pointer to this object's public ListActionTypesRequest instance.
 */
ListActionTypesRequestPrivate::ListActionTypesRequestPrivate(
    const CodePipelineRequest::Action action, ListActionTypesRequest * const q)
    : ListActionTypesPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListActionTypesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListActionTypesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListActionTypesRequest instance.
 */
ListActionTypesRequestPrivate::ListActionTypesRequestPrivate(
    const ListActionTypesRequestPrivate &other, ListActionTypesRequest * const q)
    : ListActionTypesPrivate(other, q)
{

}

} // namespace CodePipeline
} // namespace QtAws
