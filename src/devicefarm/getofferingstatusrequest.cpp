// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getofferingstatusrequest.h"
#include "getofferingstatusrequest_p.h"
#include "getofferingstatusresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::GetOfferingStatusRequest
 * \brief The GetOfferingStatusRequest class provides an interface for DeviceFarm GetOfferingStatus requests.
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
 * \sa DeviceFarmClient::getOfferingStatus
 */

/*!
 * Constructs a copy of \a other.
 */
GetOfferingStatusRequest::GetOfferingStatusRequest(const GetOfferingStatusRequest &other)
    : DeviceFarmRequest(new GetOfferingStatusRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetOfferingStatusRequest object.
 */
GetOfferingStatusRequest::GetOfferingStatusRequest()
    : DeviceFarmRequest(new GetOfferingStatusRequestPrivate(DeviceFarmRequest::GetOfferingStatusAction, this))
{

}

/*!
 * \reimp
 */
bool GetOfferingStatusRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetOfferingStatusResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetOfferingStatusRequest::response(QNetworkReply * const reply) const
{
    return new GetOfferingStatusResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::GetOfferingStatusRequestPrivate
 * \brief The GetOfferingStatusRequestPrivate class provides private implementation for GetOfferingStatusRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a GetOfferingStatusRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
GetOfferingStatusRequestPrivate::GetOfferingStatusRequestPrivate(
    const DeviceFarmRequest::Action action, GetOfferingStatusRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetOfferingStatusRequest
 * class' copy constructor.
 */
GetOfferingStatusRequestPrivate::GetOfferingStatusRequestPrivate(
    const GetOfferingStatusRequestPrivate &other, GetOfferingStatusRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
