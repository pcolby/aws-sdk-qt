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

#include "listnetworkprofilesrequest.h"
#include "listnetworkprofilesrequest_p.h"
#include "listnetworkprofilesresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::ListNetworkProfilesRequest
 *
 * \brief The ListNetworkProfilesRequest class encapsulates DeviceFarm ListNetworkProfiles requests.
 *
 * \ingroup DeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::listNetworkProfiles
 */

/*!
 * @brief  Constructs a new ListNetworkProfilesRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListNetworkProfilesRequest::ListNetworkProfilesRequest(const ListNetworkProfilesRequest &other)
    : DeviceFarmRequest(new ListNetworkProfilesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListNetworkProfilesRequest object.
 */
ListNetworkProfilesRequest::ListNetworkProfilesRequest()
    : DeviceFarmRequest(new ListNetworkProfilesRequestPrivate(DeviceFarmRequest::ListNetworkProfilesAction, this))
{

}

/*!
 * \reimp
 */
bool ListNetworkProfilesRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListNetworkProfilesResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListNetworkProfilesResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DeviceFarmClient::send
 */
QtAws::Core::AwsAbstractResponse * ListNetworkProfilesRequest::response(QNetworkReply * const reply) const
{
    return new ListNetworkProfilesResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListNetworkProfilesRequestPrivate
 *
 * @brief  Private implementation for ListNetworkProfilesRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListNetworkProfilesRequestPrivate object.
 *
 * @param  action  DeviceFarm action being performed.
 * @param  q       Pointer to this object's public ListNetworkProfilesRequest instance.
 */
ListNetworkProfilesRequestPrivate::ListNetworkProfilesRequestPrivate(
    const DeviceFarmRequest::Action action, ListNetworkProfilesRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListNetworkProfilesRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListNetworkProfilesRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListNetworkProfilesRequest instance.
 */
ListNetworkProfilesRequestPrivate::ListNetworkProfilesRequestPrivate(
    const ListNetworkProfilesRequestPrivate &other, ListNetworkProfilesRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
