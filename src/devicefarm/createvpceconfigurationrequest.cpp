// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createvpceconfigurationrequest.h"
#include "createvpceconfigurationrequest_p.h"
#include "createvpceconfigurationresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::CreateVPCEConfigurationRequest
 * \brief The CreateVPCEConfigurationRequest class provides an interface for DeviceFarm CreateVPCEConfiguration requests.
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
 * \sa DeviceFarmClient::createVPCEConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
CreateVPCEConfigurationRequest::CreateVPCEConfigurationRequest(const CreateVPCEConfigurationRequest &other)
    : DeviceFarmRequest(new CreateVPCEConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateVPCEConfigurationRequest object.
 */
CreateVPCEConfigurationRequest::CreateVPCEConfigurationRequest()
    : DeviceFarmRequest(new CreateVPCEConfigurationRequestPrivate(DeviceFarmRequest::CreateVPCEConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool CreateVPCEConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateVPCEConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateVPCEConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new CreateVPCEConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::CreateVPCEConfigurationRequestPrivate
 * \brief The CreateVPCEConfigurationRequestPrivate class provides private implementation for CreateVPCEConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a CreateVPCEConfigurationRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
CreateVPCEConfigurationRequestPrivate::CreateVPCEConfigurationRequestPrivate(
    const DeviceFarmRequest::Action action, CreateVPCEConfigurationRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateVPCEConfigurationRequest
 * class' copy constructor.
 */
CreateVPCEConfigurationRequestPrivate::CreateVPCEConfigurationRequestPrivate(
    const CreateVPCEConfigurationRequestPrivate &other, CreateVPCEConfigurationRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
