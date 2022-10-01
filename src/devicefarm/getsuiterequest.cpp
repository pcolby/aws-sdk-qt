// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getsuiterequest.h"
#include "getsuiterequest_p.h"
#include "getsuiteresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::GetSuiteRequest
 * \brief The GetSuiteRequest class provides an interface for DeviceFarm GetSuite requests.
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
 * \sa DeviceFarmClient::getSuite
 */

/*!
 * Constructs a copy of \a other.
 */
GetSuiteRequest::GetSuiteRequest(const GetSuiteRequest &other)
    : DeviceFarmRequest(new GetSuiteRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetSuiteRequest object.
 */
GetSuiteRequest::GetSuiteRequest()
    : DeviceFarmRequest(new GetSuiteRequestPrivate(DeviceFarmRequest::GetSuiteAction, this))
{

}

/*!
 * \reimp
 */
bool GetSuiteRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetSuiteResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetSuiteRequest::response(QNetworkReply * const reply) const
{
    return new GetSuiteResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::GetSuiteRequestPrivate
 * \brief The GetSuiteRequestPrivate class provides private implementation for GetSuiteRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a GetSuiteRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
GetSuiteRequestPrivate::GetSuiteRequestPrivate(
    const DeviceFarmRequest::Action action, GetSuiteRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetSuiteRequest
 * class' copy constructor.
 */
GetSuiteRequestPrivate::GetSuiteRequestPrivate(
    const GetSuiteRequestPrivate &other, GetSuiteRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
