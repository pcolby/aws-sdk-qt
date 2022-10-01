// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  Welcome to the AWS Device Farm API documentation, which contains APIs
 * 
 *  for> <ul> <li>
 * 
 *  Testing on desktop
 * 
 *  browser>
 * 
 *  Device Farm makes it possible for you to test your web applications on desktop browsers using Selenium. The APIs for
 *  desktop browser testing contain <code>TestGrid</code> in their names. For more information, see <a
 *  href="https://docs.aws.amazon.com/devicefarm/latest/testgrid/">Testing Web Applications on Selenium with Device
 * 
 *  Farm</a>> </li> <li>
 * 
 *  Testing on real mobile
 * 
 *  device>
 * 
 *  Device Farm makes it possible for you to test apps on physical phones, tablets, and other devices in the cloud. For more
 *  information, see the <a href="https://docs.aws.amazon.com/devicefarm/latest/developerguide/">Device Farm Developer
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
 * Constructs a GetAccountSettingsRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
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
