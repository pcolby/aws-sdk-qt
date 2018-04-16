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

#include "listhostedzonesrequest.h"
#include "listhostedzonesrequest_p.h"
#include "listhostedzonesresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::ListHostedZonesRequest
 *
 * \brief The ListHostedZonesRequest class encapsulates Route53 ListHostedZones requests.
 *
 * \ingroup Route53
 *
 *
 * \sa Route53Client::listHostedZones
 */

/*!
 * @brief  Constructs a new ListHostedZonesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListHostedZonesRequest::ListHostedZonesRequest(const ListHostedZonesRequest &other)
    : Route53Request(new ListHostedZonesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListHostedZonesRequest object.
 */
ListHostedZonesRequest::ListHostedZonesRequest()
    : Route53Request(new ListHostedZonesRequestPrivate(Route53Request::ListHostedZonesAction, this))
{

}

/*!
 * \reimp
 */
bool ListHostedZonesRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListHostedZonesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListHostedZonesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  Route53Client::send
 */
QtAws::Core::AwsAbstractResponse * ListHostedZonesRequest::response(QNetworkReply * const reply) const
{
    return new ListHostedZonesResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListHostedZonesRequestPrivate
 *
 * @brief  Private implementation for ListHostedZonesRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListHostedZonesRequestPrivate object.
 *
 * @param  action  Route53 action being performed.
 * @param  q       Pointer to this object's public ListHostedZonesRequest instance.
 */
ListHostedZonesRequestPrivate::ListHostedZonesRequestPrivate(
    const Route53Request::Action action, ListHostedZonesRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListHostedZonesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListHostedZonesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListHostedZonesRequest instance.
 */
ListHostedZonesRequestPrivate::ListHostedZonesRequestPrivate(
    const ListHostedZonesRequestPrivate &other, ListHostedZonesRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
