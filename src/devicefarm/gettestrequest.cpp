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

#include "gettestrequest.h"
#include "gettestrequest_p.h"
#include "gettestresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::GetTestRequest
 *
 * \brief The GetTestRequest class encapsulates DeviceFarm GetTest requests.
 *
 * \ingroup DeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::getTest
 */

/*!
 * @brief  Constructs a new GetTestRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetTestRequest::GetTestRequest(const GetTestRequest &other)
    : DeviceFarmRequest(new GetTestRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetTestRequest object.
 */
GetTestRequest::GetTestRequest()
    : DeviceFarmRequest(new GetTestRequestPrivate(DeviceFarmRequest::GetTestAction, this))
{

}

/*!
 * \reimp
 */
bool GetTestRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetTestResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetTestResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DeviceFarmClient::send
 */
QtAws::Core::AwsAbstractResponse * GetTestRequest::response(QNetworkReply * const reply) const
{
    return new GetTestResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetTestRequestPrivate
 *
 * @brief  Private implementation for GetTestRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetTestRequestPrivate object.
 *
 * @param  action  DeviceFarm action being performed.
 * @param  q       Pointer to this object's public GetTestRequest instance.
 */
GetTestRequestPrivate::GetTestRequestPrivate(
    const DeviceFarmRequest::Action action, GetTestRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetTestRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetTestRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetTestRequest instance.
 */
GetTestRequestPrivate::GetTestRequestPrivate(
    const GetTestRequestPrivate &other, GetTestRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
