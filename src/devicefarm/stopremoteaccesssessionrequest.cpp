// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stopremoteaccesssessionrequest.h"
#include "stopremoteaccesssessionrequest_p.h"
#include "stopremoteaccesssessionresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::StopRemoteAccessSessionRequest
 * \brief The StopRemoteAccessSessionRequest class provides an interface for DeviceFarm StopRemoteAccessSession requests.
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
 * \sa DeviceFarmClient::stopRemoteAccessSession
 */

/*!
 * Constructs a copy of \a other.
 */
StopRemoteAccessSessionRequest::StopRemoteAccessSessionRequest(const StopRemoteAccessSessionRequest &other)
    : DeviceFarmRequest(new StopRemoteAccessSessionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopRemoteAccessSessionRequest object.
 */
StopRemoteAccessSessionRequest::StopRemoteAccessSessionRequest()
    : DeviceFarmRequest(new StopRemoteAccessSessionRequestPrivate(DeviceFarmRequest::StopRemoteAccessSessionAction, this))
{

}

/*!
 * \reimp
 */
bool StopRemoteAccessSessionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopRemoteAccessSessionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopRemoteAccessSessionRequest::response(QNetworkReply * const reply) const
{
    return new StopRemoteAccessSessionResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::StopRemoteAccessSessionRequestPrivate
 * \brief The StopRemoteAccessSessionRequestPrivate class provides private implementation for StopRemoteAccessSessionRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a StopRemoteAccessSessionRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
StopRemoteAccessSessionRequestPrivate::StopRemoteAccessSessionRequestPrivate(
    const DeviceFarmRequest::Action action, StopRemoteAccessSessionRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopRemoteAccessSessionRequest
 * class' copy constructor.
 */
StopRemoteAccessSessionRequestPrivate::StopRemoteAccessSessionRequestPrivate(
    const StopRemoteAccessSessionRequestPrivate &other, StopRemoteAccessSessionRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
