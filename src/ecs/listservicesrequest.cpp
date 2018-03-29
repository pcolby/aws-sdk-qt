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

#include "listservicesrequest.h"
#include "listservicesrequest_p.h"
#include "listservicesresponse.h"
#include "ecsrequest_p.h"

namespace QtAws {
namespace ECS {

/**
 * @class  ListServicesRequest
 *
 * @brief  Implements ECS ListServices requests.
 *
 * @see    ECSClient::listServices
 */

/**
 * @brief  Constructs a new ListServicesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListServicesRequest::ListServicesRequest(const ListServicesRequest &other)
    : ECSRequest(new ListServicesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListServicesRequest object.
 */
ListServicesRequest::ListServicesRequest()
    : ECSRequest(new ListServicesRequestPrivate(ECSRequest::ListServicesAction, this))
{

}

bool ListServicesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListServicesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListServicesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  ECSClient::send
 */
QtAws::Core::AwsAbstractResponse * ListServicesRequest::response(QNetworkReply * const reply) const
{
    return new ListServicesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListServicesRequestPrivate
 *
 * @brief  Private implementation for ListServicesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListServicesRequestPrivate object.
 *
 * @param  action  ECS action being performed.
 * @param  q       Pointer to this object's public ListServicesRequest instance.
 */
ListServicesRequestPrivate::ListServicesRequestPrivate(
    const ECSRequest::Action action, ListServicesRequest * const q)
    : ECSRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListServicesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListServicesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListServicesRequest instance.
 */
ListServicesRequestPrivate::ListServicesRequestPrivate(
    const ListServicesRequestPrivate &other, ListServicesRequest * const q)
    : ECSRequestPrivate(other, q)
{

}

} // namespace ECS
} // namespace QtAws
