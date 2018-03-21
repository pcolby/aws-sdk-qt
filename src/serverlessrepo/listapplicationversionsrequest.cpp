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

#include "listapplicationversionsrequest.h"
#include "listapplicationversionsrequest_p.h"
#include "listapplicationversionsresponse.h"
#include "serverlessapplicationrepositoryrequest_p.h"

namespace AWS {
namespace ServerlessApplicationRepository {

/**
 * @class  ListApplicationVersionsRequest
 *
 * @brief  Implements ServerlessApplicationRepository ListApplicationVersions requests.
 *
 * @see    ServerlessApplicationRepositoryClient::listApplicationVersions
 */

/**
 * @brief  Constructs a new ListApplicationVersionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListApplicationVersionsResponse::ListApplicationVersionsResponse(

/**
 * @brief  Constructs a new ListApplicationVersionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListApplicationVersionsRequest::ListApplicationVersionsRequest(const ListApplicationVersionsRequest &other)
    : ServerlessApplicationRepositoryRequest(new ListApplicationVersionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListApplicationVersionsRequest object.
 */
ListApplicationVersionsRequest::ListApplicationVersionsRequest()
    : ServerlessApplicationRepositoryRequest(new ListApplicationVersionsRequestPrivate(ServerlessApplicationRepositoryRequest::ListApplicationVersionsAction, this))
{

}

bool ListApplicationVersionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListApplicationVersionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListApplicationVersionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  ServerlessApplicationRepositoryClient::send
 */
AwsAbstractResponse * ListApplicationVersionsRequest::response(QNetworkReply * const reply) const
{
    return new ListApplicationVersionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListApplicationVersionsRequestPrivate
 *
 * @brief  Private implementation for ListApplicationVersionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListApplicationVersionsRequestPrivate object.
 *
 * @param  action  ServerlessApplicationRepository action being performed.
 * @param  q       Pointer to this object's public ListApplicationVersionsRequest instance.
 */
ListApplicationVersionsRequestPrivate::ListApplicationVersionsRequestPrivate(
    const ServerlessApplicationRepositoryRequest::Action action, ListApplicationVersionsRequest * const q)
    : ListApplicationVersionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListApplicationVersionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListApplicationVersionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListApplicationVersionsRequest instance.
 */
ListApplicationVersionsRequestPrivate::ListApplicationVersionsRequestPrivate(
    const ListApplicationVersionsRequestPrivate &other, ListApplicationVersionsRequest * const q)
    : ListApplicationVersionsPrivate(other, q)
{

}
