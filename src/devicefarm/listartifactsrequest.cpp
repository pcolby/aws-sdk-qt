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

#include "listartifactsrequest.h"
#include "listartifactsrequest_p.h"
#include "listartifactsresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::ListArtifactsRequest
 *
 * \brief The ListArtifactsRequest class encapsulates DeviceFarm ListArtifacts requests.
 *
 * \ingroup DeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::listArtifacts
 */

/*!
 * @brief  Constructs a new ListArtifactsRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
ListArtifactsRequest::ListArtifactsRequest(const ListArtifactsRequest &other)
    : DeviceFarmRequest(new ListArtifactsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new ListArtifactsRequest object.
 */
ListArtifactsRequest::ListArtifactsRequest()
    : DeviceFarmRequest(new ListArtifactsRequestPrivate(DeviceFarmRequest::ListArtifactsAction, this))
{

}

/*!
 * \reimp
 */
bool ListArtifactsRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an ListArtifactsResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An ListArtifactsResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DeviceFarmClient::send
 */
QtAws::Core::AwsAbstractResponse * ListArtifactsRequest::response(QNetworkReply * const reply) const
{
    return new ListArtifactsResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  ListArtifactsRequestPrivate
 *
 * @brief  Private implementation for ListArtifactsRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ListArtifactsRequestPrivate object.
 *
 * @param  action  DeviceFarm action being performed.
 * @param  q       Pointer to this object's public ListArtifactsRequest instance.
 */
ListArtifactsRequestPrivate::ListArtifactsRequestPrivate(
    const DeviceFarmRequest::Action action, ListArtifactsRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new ListArtifactsRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the ListArtifactsRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public ListArtifactsRequest instance.
 */
ListArtifactsRequestPrivate::ListArtifactsRequestPrivate(
    const ListArtifactsRequestPrivate &other, ListArtifactsRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
