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

#include "getnetworkprofilerequest.h"
#include "getnetworkprofilerequest_p.h"
#include "getnetworkprofileresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::GetNetworkProfileRequest
 *
 * \brief The GetNetworkProfileRequest class provides an interface for DeviceFarm GetNetworkProfile requests.
 *
 * \ingroup DeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::getNetworkProfile
 */

/*!
 * @brief  Constructs a new GetNetworkProfileRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetNetworkProfileRequest::GetNetworkProfileRequest(const GetNetworkProfileRequest &other)
    : DeviceFarmRequest(new GetNetworkProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetNetworkProfileRequest object.
 */
GetNetworkProfileRequest::GetNetworkProfileRequest()
    : DeviceFarmRequest(new GetNetworkProfileRequestPrivate(DeviceFarmRequest::GetNetworkProfileAction, this))
{

}

/*!
 * \reimp
 */
bool GetNetworkProfileRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetNetworkProfileResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetNetworkProfileResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DeviceFarmClient::send
 */
QtAws::Core::AwsAbstractResponse * GetNetworkProfileRequest::response(QNetworkReply * const reply) const
{
    return new GetNetworkProfileResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetNetworkProfileRequestPrivate
 *
 * @brief  Private implementation for GetNetworkProfileRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetNetworkProfileRequestPrivate object.
 *
 * @param  action  DeviceFarm action being performed.
 * @param  q       Pointer to this object's public GetNetworkProfileRequest instance.
 */
GetNetworkProfileRequestPrivate::GetNetworkProfileRequestPrivate(
    const DeviceFarmRequest::Action action, GetNetworkProfileRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetNetworkProfileRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetNetworkProfileRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetNetworkProfileRequest instance.
 */
GetNetworkProfileRequestPrivate::GetNetworkProfileRequestPrivate(
    const GetNetworkProfileRequestPrivate &other, GetNetworkProfileRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
