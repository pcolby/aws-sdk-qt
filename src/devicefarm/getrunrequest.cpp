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

#include "getrunrequest.h"
#include "getrunrequest_p.h"
#include "getrunresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::GetRunRequest
 *
 * \brief The GetRunRequest class encapsulates DeviceFarm GetRun requests.
 *
 * \ingroup DeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::getRun
 */

/*!
 * @brief  Constructs a new GetRunRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetRunRequest::GetRunRequest(const GetRunRequest &other)
    : DeviceFarmRequest(new GetRunRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetRunRequest object.
 */
GetRunRequest::GetRunRequest()
    : DeviceFarmRequest(new GetRunRequestPrivate(DeviceFarmRequest::GetRunAction, this))
{

}

/*!
 * \reimp
 */
bool GetRunRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetRunResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetRunResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DeviceFarmClient::send
 */
QtAws::Core::AwsAbstractResponse * GetRunRequest::response(QNetworkReply * const reply) const
{
    return new GetRunResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetRunRequestPrivate
 *
 * @brief  Private implementation for GetRunRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetRunRequestPrivate object.
 *
 * @param  action  DeviceFarm action being performed.
 * @param  q       Pointer to this object's public GetRunRequest instance.
 */
GetRunRequestPrivate::GetRunRequestPrivate(
    const DeviceFarmRequest::Action action, GetRunRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetRunRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetRunRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetRunRequest instance.
 */
GetRunRequestPrivate::GetRunRequestPrivate(
    const GetRunRequestPrivate &other, GetRunRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
