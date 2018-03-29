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

#include "listconfigurationsrequest.h"
#include "listconfigurationsrequest_p.h"
#include "listconfigurationsresponse.h"
#include "mqrequest_p.h"

namespace QtAws {
namespace MQ {

/**
 * @class  ListConfigurationsRequest
 *
 * @brief  Implements MQ ListConfigurations requests.
 *
 * @see    MQClient::listConfigurations
 */

/**
 * @brief  Constructs a new ListConfigurationsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListConfigurationsRequest::ListConfigurationsRequest(const ListConfigurationsRequest &other)
    : MQRequest(new ListConfigurationsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListConfigurationsRequest object.
 */
ListConfigurationsRequest::ListConfigurationsRequest()
    : MQRequest(new ListConfigurationsRequestPrivate(MQRequest::ListConfigurationsAction, this))
{

}

bool ListConfigurationsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListConfigurationsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListConfigurationsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MQClient::send
 */
QtAws::Core::AwsAbstractResponse * ListConfigurationsRequest::response(QNetworkReply * const reply) const
{
    return new ListConfigurationsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListConfigurationsRequestPrivate
 *
 * @brief  Private implementation for ListConfigurationsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListConfigurationsRequestPrivate object.
 *
 * @param  action  MQ action being performed.
 * @param  q       Pointer to this object's public ListConfigurationsRequest instance.
 */
ListConfigurationsRequestPrivate::ListConfigurationsRequestPrivate(
    const MQRequest::Action action, ListConfigurationsRequest * const q)
    : ListConfigurationsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListConfigurationsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListConfigurationsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListConfigurationsRequest instance.
 */
ListConfigurationsRequestPrivate::ListConfigurationsRequestPrivate(
    const ListConfigurationsRequestPrivate &other, ListConfigurationsRequest * const q)
    : ListConfigurationsPrivate(other, q)
{

}

} // namespace MQ
} // namespace QtAws
