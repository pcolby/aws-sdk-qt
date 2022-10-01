// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "installtoremoteaccesssessionrequest.h"
#include "installtoremoteaccesssessionrequest_p.h"
#include "installtoremoteaccesssessionresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::InstallToRemoteAccessSessionRequest
 * \brief The InstallToRemoteAccessSessionRequest class provides an interface for DeviceFarm InstallToRemoteAccessSession requests.
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
 * \sa DeviceFarmClient::installToRemoteAccessSession
 */

/*!
 * Constructs a copy of \a other.
 */
InstallToRemoteAccessSessionRequest::InstallToRemoteAccessSessionRequest(const InstallToRemoteAccessSessionRequest &other)
    : DeviceFarmRequest(new InstallToRemoteAccessSessionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a InstallToRemoteAccessSessionRequest object.
 */
InstallToRemoteAccessSessionRequest::InstallToRemoteAccessSessionRequest()
    : DeviceFarmRequest(new InstallToRemoteAccessSessionRequestPrivate(DeviceFarmRequest::InstallToRemoteAccessSessionAction, this))
{

}

/*!
 * \reimp
 */
bool InstallToRemoteAccessSessionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a InstallToRemoteAccessSessionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * InstallToRemoteAccessSessionRequest::response(QNetworkReply * const reply) const
{
    return new InstallToRemoteAccessSessionResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::InstallToRemoteAccessSessionRequestPrivate
 * \brief The InstallToRemoteAccessSessionRequestPrivate class provides private implementation for InstallToRemoteAccessSessionRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a InstallToRemoteAccessSessionRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
InstallToRemoteAccessSessionRequestPrivate::InstallToRemoteAccessSessionRequestPrivate(
    const DeviceFarmRequest::Action action, InstallToRemoteAccessSessionRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the InstallToRemoteAccessSessionRequest
 * class' copy constructor.
 */
InstallToRemoteAccessSessionRequestPrivate::InstallToRemoteAccessSessionRequestPrivate(
    const InstallToRemoteAccessSessionRequestPrivate &other, InstallToRemoteAccessSessionRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
