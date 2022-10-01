// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getnetworkprofilerequest.h"
#include "getnetworkprofilerequest_p.h"
#include "getnetworkprofileresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::GetNetworkProfileRequest
 * \brief The GetNetworkProfileRequest class provides an interface for DeviceFarm GetNetworkProfile requests.
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
 * \sa DeviceFarmClient::getNetworkProfile
 */

/*!
 * Constructs a copy of \a other.
 */
GetNetworkProfileRequest::GetNetworkProfileRequest(const GetNetworkProfileRequest &other)
    : DeviceFarmRequest(new GetNetworkProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetNetworkProfileRequest object.
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
 * Returns a GetNetworkProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetNetworkProfileRequest::response(QNetworkReply * const reply) const
{
    return new GetNetworkProfileResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::GetNetworkProfileRequestPrivate
 * \brief The GetNetworkProfileRequestPrivate class provides private implementation for GetNetworkProfileRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a GetNetworkProfileRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
GetNetworkProfileRequestPrivate::GetNetworkProfileRequestPrivate(
    const DeviceFarmRequest::Action action, GetNetworkProfileRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetNetworkProfileRequest
 * class' copy constructor.
 */
GetNetworkProfileRequestPrivate::GetNetworkProfileRequestPrivate(
    const GetNetworkProfileRequestPrivate &other, GetNetworkProfileRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
