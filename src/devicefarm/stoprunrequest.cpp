// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "stoprunrequest.h"
#include "stoprunrequest_p.h"
#include "stoprunresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::StopRunRequest
 * \brief The StopRunRequest class provides an interface for DeviceFarm StopRun requests.
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
 * \sa DeviceFarmClient::stopRun
 */

/*!
 * Constructs a copy of \a other.
 */
StopRunRequest::StopRunRequest(const StopRunRequest &other)
    : DeviceFarmRequest(new StopRunRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a StopRunRequest object.
 */
StopRunRequest::StopRunRequest()
    : DeviceFarmRequest(new StopRunRequestPrivate(DeviceFarmRequest::StopRunAction, this))
{

}

/*!
 * \reimp
 */
bool StopRunRequest::isValid() const
{
    return false;
}


/*!
 * Returns a StopRunResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * StopRunRequest::response(QNetworkReply * const reply) const
{
    return new StopRunResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::StopRunRequestPrivate
 * \brief The StopRunRequestPrivate class provides private implementation for StopRunRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a StopRunRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
StopRunRequestPrivate::StopRunRequestPrivate(
    const DeviceFarmRequest::Action action, StopRunRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the StopRunRequest
 * class' copy constructor.
 */
StopRunRequestPrivate::StopRunRequestPrivate(
    const StopRunRequestPrivate &other, StopRunRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
