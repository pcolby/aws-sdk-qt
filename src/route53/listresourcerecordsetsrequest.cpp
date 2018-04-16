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

#include "listresourcerecordsetsrequest.h"
#include "listresourcerecordsetsrequest_p.h"
#include "listresourcerecordsetsresponse.h"
#include "route53request_p.h"

namespace QtAws {
namespace Route53 {

/*!
 * \class QtAws::Route53::ListResourceRecordSetsRequest
 *
 * \brief The ListResourceRecordSetsRequest class encapsulates Route53 ListResourceRecordSets requests.
 *
 * \ingroup Route53
 *
 *
 * \sa Route53Client::listResourceRecordSets
 */

/*!
 * @brief  Constructs a new ListResourceRecordSetsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListResourceRecordSetsRequest::ListResourceRecordSetsRequest(const ListResourceRecordSetsRequest &other)
    : Route53Request(new ListResourceRecordSetsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListResourceRecordSetsRequest object.
 */
ListResourceRecordSetsRequest::ListResourceRecordSetsRequest()
    : Route53Request(new ListResourceRecordSetsRequestPrivate(Route53Request::ListResourceRecordSetsAction, this))
{

}

/*!
 * \reimp
 */
bool ListResourceRecordSetsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListResourceRecordSetsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListResourceRecordSetsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  Route53Client::send
 */
QtAws::Core::AwsAbstractResponse * ListResourceRecordSetsRequest::response(QNetworkReply * const reply) const
{
    return new ListResourceRecordSetsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListResourceRecordSetsRequestPrivate
 *
 * @brief  Private implementation for ListResourceRecordSetsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListResourceRecordSetsRequestPrivate object.
 *
 * @param  action  Route53 action being performed.
 * @param  q       Pointer to this object's public ListResourceRecordSetsRequest instance.
 */
ListResourceRecordSetsRequestPrivate::ListResourceRecordSetsRequestPrivate(
    const Route53Request::Action action, ListResourceRecordSetsRequest * const q)
    : Route53RequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListResourceRecordSetsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListResourceRecordSetsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListResourceRecordSetsRequest instance.
 */
ListResourceRecordSetsRequestPrivate::ListResourceRecordSetsRequestPrivate(
    const ListResourceRecordSetsRequestPrivate &other, ListResourceRecordSetsRequest * const q)
    : Route53RequestPrivate(other, q)
{

}

} // namespace Route53
} // namespace QtAws
