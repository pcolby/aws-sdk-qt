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

#include "listvaultsrequest.h"
#include "listvaultsrequest_p.h"
#include "listvaultsresponse.h"
#include "glacierrequest_p.h"

namespace QtAws {
namespace Glacier {

/**
 * @class  ListVaultsRequest
 *
 * @brief  Implements Glacier ListVaults requests.
 *
 * @see    GlacierClient::listVaults
 */

/**
 * @brief  Constructs a new ListVaultsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListVaultsRequest::ListVaultsRequest(const ListVaultsRequest &other)
    : GlacierRequest(new ListVaultsRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListVaultsRequest object.
 */
ListVaultsRequest::ListVaultsRequest()
    : GlacierRequest(new ListVaultsRequestPrivate(GlacierRequest::ListVaultsAction, this))
{

}

bool ListVaultsRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListVaultsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListVaultsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  GlacierClient::send
 */
QtAws::Core::AwsAbstractResponse * ListVaultsRequest::response(QNetworkReply * const reply) const
{
    return new ListVaultsResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListVaultsRequestPrivate
 *
 * @brief  Private implementation for ListVaultsRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListVaultsRequestPrivate object.
 *
 * @param  action  Glacier action being performed.
 * @param  q       Pointer to this object's public ListVaultsRequest instance.
 */
ListVaultsRequestPrivate::ListVaultsRequestPrivate(
    const GlacierRequest::Action action, ListVaultsRequest * const q)
    : ListVaultsPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListVaultsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListVaultsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListVaultsRequest instance.
 */
ListVaultsRequestPrivate::ListVaultsRequestPrivate(
    const ListVaultsRequestPrivate &other, ListVaultsRequest * const q)
    : ListVaultsPrivate(other, q)
{

}

} // namespace Glacier
} // namespace QtAws
