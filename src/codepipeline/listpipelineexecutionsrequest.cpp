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

#include "listpipelineexecutionsrequest.h"
#include "listpipelineexecutionsrequest_p.h"
#include "listpipelineexecutionsresponse.h"
#include "codepipelinerequest_p.h"

namespace AWS {
namespace CodePipeline {

/**
 * @class  ListPipelineExecutionsRequest
 *
 * @brief  Implements CodePipeline ListPipelineExecutions requests.
 *
 * @see    CodePipelineClient::listPipelineExecutions
 */

/**
 * @brief  Constructs a new ListPipelineExecutionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListPipelineExecutionsRequest::ListPipelineExecutionsRequest(const ListPipelineExecutionsRequest &other)
    : CodePipelineRequest(new ListPipelineExecutionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListPipelineExecutionsRequest object.
 */
ListPipelineExecutionsRequest::ListPipelineExecutionsRequest()
    : CodePipelineRequest(new ListPipelineExecutionsRequestPrivate(CodePipelineRequest::ListPipelineExecutionsAction, this))
{

}

bool ListPipelineExecutionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListPipelineExecutionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListPipelineExecutionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  CodePipelineClient::send
 */
AwsAbstractResponse * ListPipelineExecutionsRequest::response(QNetworkReply * const reply) const
{
    return new ListPipelineExecutionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListPipelineExecutionsRequestPrivate
 *
 * @brief  Private implementation for ListPipelineExecutionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListPipelineExecutionsRequestPrivate object.
 *
 * @param  action  CodePipeline action being performed.
 * @param  q       Pointer to this object's public ListPipelineExecutionsRequest instance.
 */
ListPipelineExecutionsRequestPrivate::ListPipelineExecutionsRequestPrivate(
    const CodePipelineRequest::Action action, ListPipelineExecutionsRequest * const q)
    : ListPipelineExecutionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListPipelineExecutionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListPipelineExecutionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListPipelineExecutionsRequest instance.
 */
ListPipelineExecutionsRequestPrivate::ListPipelineExecutionsRequestPrivate(
    const ListPipelineExecutionsRequestPrivate &other, ListPipelineExecutionsRequest * const q)
    : ListPipelineExecutionsPrivate(other, q)
{

}

} // namespace CodePipeline
} // namespace AWS
