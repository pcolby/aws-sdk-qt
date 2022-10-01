// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "gettestgridsessionrequest.h"
#include "gettestgridsessionrequest_p.h"
#include "gettestgridsessionresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::GetTestGridSessionRequest
 * \brief The GetTestGridSessionRequest class provides an interface for DeviceFarm GetTestGridSession requests.
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
 * \sa DeviceFarmClient::getTestGridSession
 */

/*!
 * Constructs a copy of \a other.
 */
GetTestGridSessionRequest::GetTestGridSessionRequest(const GetTestGridSessionRequest &other)
    : DeviceFarmRequest(new GetTestGridSessionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetTestGridSessionRequest object.
 */
GetTestGridSessionRequest::GetTestGridSessionRequest()
    : DeviceFarmRequest(new GetTestGridSessionRequestPrivate(DeviceFarmRequest::GetTestGridSessionAction, this))
{

}

/*!
 * \reimp
 */
bool GetTestGridSessionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetTestGridSessionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetTestGridSessionRequest::response(QNetworkReply * const reply) const
{
    return new GetTestGridSessionResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::GetTestGridSessionRequestPrivate
 * \brief The GetTestGridSessionRequestPrivate class provides private implementation for GetTestGridSessionRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a GetTestGridSessionRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
GetTestGridSessionRequestPrivate::GetTestGridSessionRequestPrivate(
    const DeviceFarmRequest::Action action, GetTestGridSessionRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetTestGridSessionRequest
 * class' copy constructor.
 */
GetTestGridSessionRequestPrivate::GetTestGridSessionRequestPrivate(
    const GetTestGridSessionRequestPrivate &other, GetTestGridSessionRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
