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

#include "listconfigurationrevisionsrequest.h"
#include "listconfigurationrevisionsrequest_p.h"
#include "listconfigurationrevisionsresponse.h"
#include "mqrequest_p.h"

namespace AWS {
namespace MQ {

/**
 * @class  ListConfigurationRevisionsRequest
 *
 * @brief  Implements MQ ListConfigurationRevisions requests.
 *
 * @see    MQClient::listConfigurationRevisions
 */

/**
 * @brief  Constructs a new ListConfigurationRevisionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListConfigurationRevisionsResponse::ListConfigurationRevisionsResponse(

/**
 * @brief  Constructs a new ListConfigurationRevisionsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListConfigurationRevisionsRequest::ListConfigurationRevisionsRequest(const ListConfigurationRevisionsRequest &other)
    : MQRequest(new ListConfigurationRevisionsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListConfigurationRevisionsRequest object.
 */
ListConfigurationRevisionsRequest::ListConfigurationRevisionsRequest()
    : MQRequest(new ListConfigurationRevisionsRequestPrivate(MQRequest::ListConfigurationRevisionsAction, this))
{

}

bool ListConfigurationRevisionsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListConfigurationRevisionsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListConfigurationRevisionsResponse instance for \a reply.
 *
 * @see  AwsAbstractClient::send
 * @see  MQClient::send
 */
AwsAbstractResponse * ListConfigurationRevisionsRequest::response(QNetworkReply * const reply) const
{
    return new ListConfigurationRevisionsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListConfigurationRevisionsRequestPrivate
 *
 * @brief  Private implementation for ListConfigurationRevisionsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListConfigurationRevisionsRequestPrivate object.
 *
 * @param  action  MQ action being performed.
 * @param  q       Pointer to this object's public ListConfigurationRevisionsRequest instance.
 */
ListConfigurationRevisionsRequestPrivate::ListConfigurationRevisionsRequestPrivate(
    const MQRequest::Action action, ListConfigurationRevisionsRequest * const q)
    : ListConfigurationRevisionsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListConfigurationRevisionsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListConfigurationRevisionsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListConfigurationRevisionsRequest instance.
 */
ListConfigurationRevisionsRequestPrivate::ListConfigurationRevisionsRequestPrivate(
    const ListConfigurationRevisionsRequestPrivate &other, ListConfigurationRevisionsRequest * const q)
    : ListConfigurationRevisionsPrivate(other, q)
{

}

} // namespace MQ
} // namespace AWS
