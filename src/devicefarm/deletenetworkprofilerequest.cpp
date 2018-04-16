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

#include "deletenetworkprofilerequest.h"
#include "deletenetworkprofilerequest_p.h"
#include "deletenetworkprofileresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::DeleteNetworkProfileRequest
 *
 * \brief The DeleteNetworkProfileRequest class provides an interface for DeviceFarm DeleteNetworkProfile requests.
 *
 * \ingroup DeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::deleteNetworkProfile
 */

/*!
 * @brief  Constructs a new DeleteNetworkProfileRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
DeleteNetworkProfileRequest::DeleteNetworkProfileRequest(const DeleteNetworkProfileRequest &other)
    : DeviceFarmRequest(new DeleteNetworkProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new DeleteNetworkProfileRequest object.
 */
DeleteNetworkProfileRequest::DeleteNetworkProfileRequest()
    : DeviceFarmRequest(new DeleteNetworkProfileRequestPrivate(DeviceFarmRequest::DeleteNetworkProfileAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteNetworkProfileRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an DeleteNetworkProfileResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An DeleteNetworkProfileResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DeviceFarmClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteNetworkProfileRequest::response(QNetworkReply * const reply) const
{
    return new DeleteNetworkProfileResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  DeleteNetworkProfileRequestPrivate
 *
 * @brief  Private implementation for DeleteNetworkProfileRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteNetworkProfileRequestPrivate object.
 *
 * @param  action  DeviceFarm action being performed.
 * @param  q       Pointer to this object's public DeleteNetworkProfileRequest instance.
 */
DeleteNetworkProfileRequestPrivate::DeleteNetworkProfileRequestPrivate(
    const DeviceFarmRequest::Action action, DeleteNetworkProfileRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new DeleteNetworkProfileRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the DeleteNetworkProfileRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public DeleteNetworkProfileRequest instance.
 */
DeleteNetworkProfileRequestPrivate::DeleteNetworkProfileRequestPrivate(
    const DeleteNetworkProfileRequestPrivate &other, DeleteNetworkProfileRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
