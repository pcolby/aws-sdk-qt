// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getjobrequest.h"
#include "getjobrequest_p.h"
#include "getjobresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::GetJobRequest
 * \brief The GetJobRequest class provides an interface for DeviceFarm GetJob requests.
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
 * \sa DeviceFarmClient::getJob
 */

/*!
 * Constructs a copy of \a other.
 */
GetJobRequest::GetJobRequest(const GetJobRequest &other)
    : DeviceFarmRequest(new GetJobRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetJobRequest object.
 */
GetJobRequest::GetJobRequest()
    : DeviceFarmRequest(new GetJobRequestPrivate(DeviceFarmRequest::GetJobAction, this))
{

}

/*!
 * \reimp
 */
bool GetJobRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetJobResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetJobRequest::response(QNetworkReply * const reply) const
{
    return new GetJobResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::GetJobRequestPrivate
 * \brief The GetJobRequestPrivate class provides private implementation for GetJobRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a GetJobRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
GetJobRequestPrivate::GetJobRequestPrivate(
    const DeviceFarmRequest::Action action, GetJobRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetJobRequest
 * class' copy constructor.
 */
GetJobRequestPrivate::GetJobRequestPrivate(
    const GetJobRequestPrivate &other, GetJobRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
