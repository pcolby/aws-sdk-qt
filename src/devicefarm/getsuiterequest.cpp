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

#include "getsuiterequest.h"
#include "getsuiterequest_p.h"
#include "getsuiteresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::GetSuiteRequest
 *
 * \brief The GetSuiteRequest class encapsulates DeviceFarm GetSuite requests.
 *
 * \ingroup DeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::getSuite
 */

/*!
 * @brief  Constructs a new GetSuiteRequest object by copying another.
 *
 * @param  other  Instance to copy.
 */
GetSuiteRequest::GetSuiteRequest(const GetSuiteRequest &other)
    : DeviceFarmRequest(new GetSuiteRequestPrivate(*other.d_func(), this))
{

}

/*!
 * @brief  Constructs a new GetSuiteRequest object.
 */
GetSuiteRequest::GetSuiteRequest()
    : DeviceFarmRequest(new GetSuiteRequestPrivate(DeviceFarmRequest::GetSuiteAction, this))
{

}

/*!
 * \reimp
 */
bool GetSuiteRequest::isValid() const
{
    return false;
}


/*!
 * @brief  Construct an GetSuiteResponse object.
 *
 * @param  reply  Network reply this response should observe.
 *
 * @return An GetSuiteResponse instance for \a reply.
 *
 * @see  QtAws::Core::AwsAbstractClient::send
 * @see  DeviceFarmClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSuiteRequest::response(QNetworkReply * const reply) const
{
    return new GetSuiteResponse(*this, reply);
}

/*!
 * @internal
 *
 * @class  GetSuiteRequestPrivate
 *
 * @brief  Private implementation for GetSuiteRequest.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new GetSuiteRequestPrivate object.
 *
 * @param  action  DeviceFarm action being performed.
 * @param  q       Pointer to this object's public GetSuiteRequest instance.
 */
GetSuiteRequestPrivate::GetSuiteRequestPrivate(
    const DeviceFarmRequest::Action action, GetSuiteRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * @internal
 *
 * @brief  Constructs a new GetSuiteRequestPrivate object, copying another.
 *
 * This copy-like constructor exists for the benefit of the GetSuiteRequest
 * class' copy constructor.
 *
 * @param  other  Instance to copy.
 * @param  q      Pointer to this object's public GetSuiteRequest instance.
 */
GetSuiteRequestPrivate::GetSuiteRequestPrivate(
    const GetSuiteRequestPrivate &other, GetSuiteRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
