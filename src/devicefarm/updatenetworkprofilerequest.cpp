// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatenetworkprofilerequest.h"
#include "updatenetworkprofilerequest_p.h"
#include "updatenetworkprofileresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::UpdateNetworkProfileRequest
 * \brief The UpdateNetworkProfileRequest class provides an interface for DeviceFarm UpdateNetworkProfile requests.
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
 * \sa DeviceFarmClient::updateNetworkProfile
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateNetworkProfileRequest::UpdateNetworkProfileRequest(const UpdateNetworkProfileRequest &other)
    : DeviceFarmRequest(new UpdateNetworkProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateNetworkProfileRequest object.
 */
UpdateNetworkProfileRequest::UpdateNetworkProfileRequest()
    : DeviceFarmRequest(new UpdateNetworkProfileRequestPrivate(DeviceFarmRequest::UpdateNetworkProfileAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateNetworkProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateNetworkProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateNetworkProfileRequest::response(QNetworkReply * const reply) const
{
    return new UpdateNetworkProfileResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::UpdateNetworkProfileRequestPrivate
 * \brief The UpdateNetworkProfileRequestPrivate class provides private implementation for UpdateNetworkProfileRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a UpdateNetworkProfileRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
UpdateNetworkProfileRequestPrivate::UpdateNetworkProfileRequestPrivate(
    const DeviceFarmRequest::Action action, UpdateNetworkProfileRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateNetworkProfileRequest
 * class' copy constructor.
 */
UpdateNetworkProfileRequestPrivate::UpdateNetworkProfileRequestPrivate(
    const UpdateNetworkProfileRequestPrivate &other, UpdateNetworkProfileRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
