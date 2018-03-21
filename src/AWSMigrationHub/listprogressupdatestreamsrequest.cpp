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

#include "listprogressupdatestreamsrequest.h"
#include "listprogressupdatestreamsrequest_p.h"
#include "listprogressupdatestreamsresponse.h"
#include "migrationhubrequest_p.h"

namespace AWS {
namespace MigrationHub {

/**
 * @class  ListProgressUpdateStreamsRequest
 *
 * @brief  Implements MigrationHub ListProgressUpdateStreams requests.
 *
 * @see    MigrationHubClient::listProgressUpdateStreams
 */

/**
 * @brief  Constructs a new ListProgressUpdateStreamsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListProgressUpdateStreamsResponse::ListProgressUpdateStreamsResponse(

/**
 * @brief  Constructs a new ListProgressUpdateStreamsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListProgressUpdateStreamsRequest::ListProgressUpdateStreamsRequest(const ListProgressUpdateStreamsRequest &other)
    : MigrationHubRequest(new ListProgressUpdateStreamsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListProgressUpdateStreamsRequest object.
 */
ListProgressUpdateStreamsRequest::ListProgressUpdateStreamsRequest()
    : MigrationHubRequest(new ListProgressUpdateStreamsRequestPrivate(MigrationHubRequest::ListProgressUpdateStreamsAction, this))
{

}

bool ListProgressUpdateStreamsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListProgressUpdateStreamsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListProgressUpdateStreamsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MigrationHubClient::send
 */
AwsAbstractResponse * ListProgressUpdateStreamsRequest::response(QNetworkReply * const reply) const
{
    return new ListProgressUpdateStreamsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListProgressUpdateStreamsRequestPrivate
 *
 * @brief  Private implementation for ListProgressUpdateStreamsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListProgressUpdateStreamsRequestPrivate object.
 *
 * @param  action  MigrationHub action being performed.
 * @param  q       Pointer to this object's public ListProgressUpdateStreamsRequest instance.
 */
ListProgressUpdateStreamsRequestPrivate::ListProgressUpdateStreamsRequestPrivate(
    const MigrationHubRequest::Action action, ListProgressUpdateStreamsRequest * const q)
    : ListProgressUpdateStreamsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListProgressUpdateStreamsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListProgressUpdateStreamsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListProgressUpdateStreamsRequest instance.
 */
ListProgressUpdateStreamsRequestPrivate::ListProgressUpdateStreamsRequestPrivate(
    const ListProgressUpdateStreamsRequestPrivate &other, ListProgressUpdateStreamsRequest * const q)
    : ListProgressUpdateStreamsPrivate(other, q)
{

}
