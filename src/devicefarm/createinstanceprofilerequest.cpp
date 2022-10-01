// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createinstanceprofilerequest.h"
#include "createinstanceprofilerequest_p.h"
#include "createinstanceprofileresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::CreateInstanceProfileRequest
 * \brief The CreateInstanceProfileRequest class provides an interface for DeviceFarm CreateInstanceProfile requests.
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
 * \sa DeviceFarmClient::createInstanceProfile
 */

/*!
 * Constructs a copy of \a other.
 */
CreateInstanceProfileRequest::CreateInstanceProfileRequest(const CreateInstanceProfileRequest &other)
    : DeviceFarmRequest(new CreateInstanceProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateInstanceProfileRequest object.
 */
CreateInstanceProfileRequest::CreateInstanceProfileRequest()
    : DeviceFarmRequest(new CreateInstanceProfileRequestPrivate(DeviceFarmRequest::CreateInstanceProfileAction, this))
{

}

/*!
 * \reimp
 */
bool CreateInstanceProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateInstanceProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateInstanceProfileRequest::response(QNetworkReply * const reply) const
{
    return new CreateInstanceProfileResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::CreateInstanceProfileRequestPrivate
 * \brief The CreateInstanceProfileRequestPrivate class provides private implementation for CreateInstanceProfileRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a CreateInstanceProfileRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
CreateInstanceProfileRequestPrivate::CreateInstanceProfileRequestPrivate(
    const DeviceFarmRequest::Action action, CreateInstanceProfileRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateInstanceProfileRequest
 * class' copy constructor.
 */
CreateInstanceProfileRequestPrivate::CreateInstanceProfileRequestPrivate(
    const CreateInstanceProfileRequestPrivate &other, CreateInstanceProfileRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
