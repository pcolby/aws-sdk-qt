// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatevpceconfigurationrequest.h"
#include "updatevpceconfigurationrequest_p.h"
#include "updatevpceconfigurationresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::UpdateVPCEConfigurationRequest
 * \brief The UpdateVPCEConfigurationRequest class provides an interface for DeviceFarm UpdateVPCEConfiguration requests.
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
 * \sa DeviceFarmClient::updateVPCEConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateVPCEConfigurationRequest::UpdateVPCEConfigurationRequest(const UpdateVPCEConfigurationRequest &other)
    : DeviceFarmRequest(new UpdateVPCEConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateVPCEConfigurationRequest object.
 */
UpdateVPCEConfigurationRequest::UpdateVPCEConfigurationRequest()
    : DeviceFarmRequest(new UpdateVPCEConfigurationRequestPrivate(DeviceFarmRequest::UpdateVPCEConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateVPCEConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateVPCEConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateVPCEConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateVPCEConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::UpdateVPCEConfigurationRequestPrivate
 * \brief The UpdateVPCEConfigurationRequestPrivate class provides private implementation for UpdateVPCEConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a UpdateVPCEConfigurationRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
UpdateVPCEConfigurationRequestPrivate::UpdateVPCEConfigurationRequestPrivate(
    const DeviceFarmRequest::Action action, UpdateVPCEConfigurationRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateVPCEConfigurationRequest
 * class' copy constructor.
 */
UpdateVPCEConfigurationRequestPrivate::UpdateVPCEConfigurationRequestPrivate(
    const UpdateVPCEConfigurationRequestPrivate &other, UpdateVPCEConfigurationRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
