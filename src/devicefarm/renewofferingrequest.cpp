// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "renewofferingrequest.h"
#include "renewofferingrequest_p.h"
#include "renewofferingresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::RenewOfferingRequest
 * \brief The RenewOfferingRequest class provides an interface for DeviceFarm RenewOffering requests.
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
 * \sa DeviceFarmClient::renewOffering
 */

/*!
 * Constructs a copy of \a other.
 */
RenewOfferingRequest::RenewOfferingRequest(const RenewOfferingRequest &other)
    : DeviceFarmRequest(new RenewOfferingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RenewOfferingRequest object.
 */
RenewOfferingRequest::RenewOfferingRequest()
    : DeviceFarmRequest(new RenewOfferingRequestPrivate(DeviceFarmRequest::RenewOfferingAction, this))
{

}

/*!
 * \reimp
 */
bool RenewOfferingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RenewOfferingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RenewOfferingRequest::response(QNetworkReply * const reply) const
{
    return new RenewOfferingResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::RenewOfferingRequestPrivate
 * \brief The RenewOfferingRequestPrivate class provides private implementation for RenewOfferingRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a RenewOfferingRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
RenewOfferingRequestPrivate::RenewOfferingRequestPrivate(
    const DeviceFarmRequest::Action action, RenewOfferingRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RenewOfferingRequest
 * class' copy constructor.
 */
RenewOfferingRequestPrivate::RenewOfferingRequestPrivate(
    const RenewOfferingRequestPrivate &other, RenewOfferingRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
