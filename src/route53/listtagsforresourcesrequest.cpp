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

#include "listtagsforresourcesrequest.h"
#include "listtagsforresourcesrequest_p.h"
#include "listtagsforresourcesresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::ListTagsForResourcesRequest
 *
 * \brief The ListTagsForResourcesRequest class provides an interface for Route53 ListTagsForResources requests.
 *
 * \ingroup Route53
 *
 *
 * \sa Route53Client::listTagsForResources
 */

/*!
 * @brief  Constructs a new ListTagsForResourcesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListTagsForResourcesRequest::ListTagsForResourcesRequest(const ListTagsForResourcesRequest &other)
    : Route53Request(new ListTagsForResourcesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListTagsForResourcesRequest object.
 */
ListTagsForResourcesRequest::ListTagsForResourcesRequest()
    : Route53Request(new ListTagsForResourcesRequestPrivate(Route53Request::ListTagsForResourcesAction, this))
{

}

/*!
 * \reimp
 */
bool ListTagsForResourcesRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListTagsForResourcesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListTagsForResourcesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  Route53Client::send
 */
QtAws::Core::AwsAbstractResponse * ListTagsForResourcesRequest::response(QNetworkReply * const reply) const
{
    return new ListTagsForResourcesResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListTagsForResourcesRequestPrivate
 *
 * @brief  Private implementation for ListTagsForResourcesRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListTagsForResourcesRequestPrivate object.
 *
 * @param  action  Route53 action being performed.
 * @param  q       Pointer to this object's public ListTagsForResourcesRequest instance.
 */
ListTagsForResourcesRequestPrivate::ListTagsForResourcesRequestPrivate(
    const Route53Request::Action action, ListTagsForResourcesRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListTagsForResourcesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListTagsForResourcesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListTagsForResourcesRequest instance.
 */
ListTagsForResourcesRequestPrivate::ListTagsForResourcesRequestPrivate(
    const ListTagsForResourcesRequestPrivate &other, ListTagsForResourcesRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
