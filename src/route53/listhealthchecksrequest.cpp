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

#include "listhealthchecksrequest.h"
#include "listhealthchecksrequest_p.h"
#include "listhealthchecksresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::ListHealthChecksRequest
 *
 * \brief The ListHealthChecksRequest class provides an interface for Route53 ListHealthChecks requests.
 *
 * \ingroup Route53
 *
 *
 * \sa Route53Client::listHealthChecks
 */

/*!
 * @brief  Constructs a new ListHealthChecksRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListHealthChecksRequest::ListHealthChecksRequest(const ListHealthChecksRequest &other)
    : Route53Request(new ListHealthChecksRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListHealthChecksRequest object.
 */
ListHealthChecksRequest::ListHealthChecksRequest()
    : Route53Request(new ListHealthChecksRequestPrivate(Route53Request::ListHealthChecksAction, this))
{

}

/*!
 * \reimp
 */
bool ListHealthChecksRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListHealthChecksResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListHealthChecksResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  Route53Client::send
 */
QtAws::Core::AwsAbstractResponse * ListHealthChecksRequest::response(QNetworkReply * const reply) const
{
    return new ListHealthChecksResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListHealthChecksRequestPrivate
 *
 * @brief  Private implementation for ListHealthChecksRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListHealthChecksRequestPrivate object.
 *
 * @param  action  Route53 action being performed.
 * @param  q       Pointer to this object's public ListHealthChecksRequest instance.
 */
ListHealthChecksRequestPrivate::ListHealthChecksRequestPrivate(
    const Route53Request::Action action, ListHealthChecksRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListHealthChecksRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListHealthChecksRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListHealthChecksRequest instance.
 */
ListHealthChecksRequestPrivate::ListHealthChecksRequestPrivate(
    const ListHealthChecksRequestPrivate &other, ListHealthChecksRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
