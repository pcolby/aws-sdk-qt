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

#include "getaccountsettingsrequest.h"
#include "getaccountsettingsrequest_p.h"
#include "getaccountsettingsresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::GetAccountSettingsRequest
 * \brief The GetAccountSettingsRequest class provides an interface for DeviceFarm GetAccountSettings requests.
 *
 * \inmodule QtAwsDeviceFarm
 *
 *  AWS Device Farm is a service that enables mobile app developers to test Android, iOS, and Fire OS apps on physical
 *  phones, tablets, and other devices in the
 *
 * \sa DeviceFarmClient::getAccountSettings
 */

/*!
 * Constructs a copy of \a other.
 */
GetAccountSettingsRequest::GetAccountSettingsRequest(const GetAccountSettingsRequest &other)
    : DeviceFarmRequest(new GetAccountSettingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetAccountSettingsRequest object.
 */
GetAccountSettingsRequest::GetAccountSettingsRequest()
    : DeviceFarmRequest(new GetAccountSettingsRequestPrivate(DeviceFarmRequest::GetAccountSettingsAction, this))
{

}

/*!
 * \reimp
 */
bool GetAccountSettingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetAccountSettingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetAccountSettingsRequest::response(QNetworkReply * const reply) const
{
    return new GetAccountSettingsResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::GetAccountSettingsRequestPrivate
 * \brief The GetAccountSettingsRequestPrivate class provides private implementation for GetAccountSettingsRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 *
 * Constructs a GetAccountSettingsRequestPrivate object for DeviceFarm \a action with,
 * public implementation \a q.
 */
GetAccountSettingsRequestPrivate::GetAccountSettingsRequestPrivate(
    const DeviceFarmRequest::Action action, GetAccountSettingsRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetAccountSettingsRequest
 * class' copy constructor.
 */
GetAccountSettingsRequestPrivate::GetAccountSettingsRequestPrivate(
    const GetAccountSettingsRequestPrivate &other, GetAccountSettingsRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
