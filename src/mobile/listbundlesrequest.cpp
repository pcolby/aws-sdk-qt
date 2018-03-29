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

#include "listbundlesrequest.h"
#include "listbundlesrequest_p.h"
#include "listbundlesresponse.h"
#include "mobilerequest_p.h"

namespace QtAws {
namespace Mobile {

/**
 * @class  ListBundlesRequest
 *
 * @brief  Implements Mobile ListBundles requests.
 *
 * @see    MobileClient::listBundles
 */

/**
 * @brief  Constructs a new ListBundlesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListBundlesRequest::ListBundlesRequest(const ListBundlesRequest &other)
    : MobileRequest(new ListBundlesRequestPrivate(*other.d_func(), this))
{

}

/**
 * @brief  Constructs a new ListBundlesRequest object.
 */
ListBundlesRequest::ListBundlesRequest()
    : MobileRequest(new ListBundlesRequestPrivate(MobileRequest::ListBundlesAction, this))
{

}

bool ListBundlesRequest::isValid() const
{
    return false;
}


/**
 * @brief  Construct an ListBundlesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListBundlesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  MobileClient::send
 */
QtAws::Core::AwsAbstractResponse * ListBundlesRequest::response(QNetworkReply * const reply) const
{
    return new ListBundlesResponse(*this, reply);
}

/**
 * @internal
 *
 * @class  ListBundlesRequestPrivate
 *
 * @brief  Private implementation for ListBundlesRequest.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListBundlesRequestPrivate object.
 *
 * @param  action  Mobile action being performed.
 * @param  q       Pointer to this object's public ListBundlesRequest instance.
 */
ListBundlesRequestPrivate::ListBundlesRequestPrivate(
    const MobileRequest::Action action, ListBundlesRequest * const q)
    : MobileRequestPrivate(action, q)
{

}

/**
 * @internal
 *
 * @brief  Constructs a new ListBundlesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListBundlesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListBundlesRequest instance.
 */
ListBundlesRequestPrivate::ListBundlesRequestPrivate(
    const ListBundlesRequestPrivate &other, ListBundlesRequest * const q)
    : MobileRequestPrivate(other, q)
{

}

} // namespace Mobile
} // namespace QtAws
