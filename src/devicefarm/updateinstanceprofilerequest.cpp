// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateinstanceprofilerequest.h"
#include "updateinstanceprofilerequest_p.h"
#include "updateinstanceprofileresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::UpdateInstanceProfileRequest
 * \brief The UpdateInstanceProfileRequest class provides an interface for DeviceFarm UpdateInstanceProfile requests.
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
 * \sa DeviceFarmClient::updateInstanceProfile
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateInstanceProfileRequest::UpdateInstanceProfileRequest(const UpdateInstanceProfileRequest &other)
    : DeviceFarmRequest(new UpdateInstanceProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateInstanceProfileRequest object.
 */
UpdateInstanceProfileRequest::UpdateInstanceProfileRequest()
    : DeviceFarmRequest(new UpdateInstanceProfileRequestPrivate(DeviceFarmRequest::UpdateInstanceProfileAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateInstanceProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateInstanceProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateInstanceProfileRequest::response(QNetworkReply * const reply) const
{
    return new UpdateInstanceProfileResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::UpdateInstanceProfileRequestPrivate
 * \brief The UpdateInstanceProfileRequestPrivate class provides private implementation for UpdateInstanceProfileRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a UpdateInstanceProfileRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
UpdateInstanceProfileRequestPrivate::UpdateInstanceProfileRequestPrivate(
    const DeviceFarmRequest::Action action, UpdateInstanceProfileRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateInstanceProfileRequest
 * class' copy constructor.
 */
UpdateInstanceProfileRequestPrivate::UpdateInstanceProfileRequestPrivate(
    const UpdateInstanceProfileRequestPrivate &other, UpdateInstanceProfileRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
