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

#include "listbootstrapactionsrequest.h"
#include "listbootstrapactionsrequest_p.h"
#include "listbootstrapactionsresponse.h"
#include "emrrequest_p.h"

namespace AWS {
namespace EMR {

/**
 * @class  ListBootstrapActionsRequest
 *
 * @brief  Implements EMR ListBootstrapActions requests.
 *
 * @see    EMRClient::listBootstrapActions
 */

/**
 * @brief  Constructs a new ListBootstrapActionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListBootstrapActionsResponse::ListBootstrapActionsResponse(

/**
 * @brief  Constructs a new ListBootstrapActionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListBootstrapActionsRequest::ListBootstrapActionsRequest(const ListBootstrapActionsRequest &other)
    : EMRRequest(new ListBootstrapActionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListBootstrapActionsRequest object.
 */
ListBootstrapActionsRequest::ListBootstrapActionsRequest()
    : EMRRequest(new ListBootstrapActionsRequestPrivate(EMRRequest::ListBootstrapActionsAction, this))
{

}

bool ListBootstrapActionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListBootstrapActionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListBootstrapActionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  EMRClient::send
 */
AwsAbstractResponse * ListBootstrapActionsRequest::response(QNetworkReply * const reply) const
{
    return new ListBootstrapActionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListBootstrapActionsRequestPrivate
 *
 * @brief  Private implementation for ListBootstrapActionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListBootstrapActionsRequestPrivate object.
 *
 * @param  action  EMR action being performed.
 * @param  q       Pointer to this object's public ListBootstrapActionsRequest instance.
 */
ListBootstrapActionsRequestPrivate::ListBootstrapActionsRequestPrivate(
    const EMRRequest::Action action, ListBootstrapActionsRequest * const q)
    : ListBootstrapActionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListBootstrapActionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListBootstrapActionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListBootstrapActionsRequest instance.
 */
ListBootstrapActionsRequestPrivate::ListBootstrapActionsRequestPrivate(
    const ListBootstrapActionsRequestPrivate &other, ListBootstrapActionsRequest * const q)
    : ListBootstrapActionsPrivate(other, q)
{

}
