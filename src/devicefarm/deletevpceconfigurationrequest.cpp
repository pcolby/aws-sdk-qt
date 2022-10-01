// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletevpceconfigurationrequest.h"
#include "deletevpceconfigurationrequest_p.h"
#include "deletevpceconfigurationresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::DeleteVPCEConfigurationRequest
 * \brief The DeleteVPCEConfigurationRequest class provides an interface for DeviceFarm DeleteVPCEConfiguration requests.
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
 * \sa DeviceFarmClient::deleteVPCEConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteVPCEConfigurationRequest::DeleteVPCEConfigurationRequest(const DeleteVPCEConfigurationRequest &other)
    : DeviceFarmRequest(new DeleteVPCEConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteVPCEConfigurationRequest object.
 */
DeleteVPCEConfigurationRequest::DeleteVPCEConfigurationRequest()
    : DeviceFarmRequest(new DeleteVPCEConfigurationRequestPrivate(DeviceFarmRequest::DeleteVPCEConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteVPCEConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteVPCEConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteVPCEConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new DeleteVPCEConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::DeleteVPCEConfigurationRequestPrivate
 * \brief The DeleteVPCEConfigurationRequestPrivate class provides private implementation for DeleteVPCEConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a DeleteVPCEConfigurationRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
DeleteVPCEConfigurationRequestPrivate::DeleteVPCEConfigurationRequestPrivate(
    const DeviceFarmRequest::Action action, DeleteVPCEConfigurationRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteVPCEConfigurationRequest
 * class' copy constructor.
 */
DeleteVPCEConfigurationRequestPrivate::DeleteVPCEConfigurationRequestPrivate(
    const DeleteVPCEConfigurationRequestPrivate &other, DeleteVPCEConfigurationRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
