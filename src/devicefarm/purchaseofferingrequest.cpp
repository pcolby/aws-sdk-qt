// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "purchaseofferingrequest.h"
#include "purchaseofferingrequest_p.h"
#include "purchaseofferingresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::PurchaseOfferingRequest
 * \brief The PurchaseOfferingRequest class provides an interface for DeviceFarm PurchaseOffering requests.
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
 * \sa DeviceFarmClient::purchaseOffering
 */

/*!
 * Constructs a copy of \a other.
 */
PurchaseOfferingRequest::PurchaseOfferingRequest(const PurchaseOfferingRequest &other)
    : DeviceFarmRequest(new PurchaseOfferingRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PurchaseOfferingRequest object.
 */
PurchaseOfferingRequest::PurchaseOfferingRequest()
    : DeviceFarmRequest(new PurchaseOfferingRequestPrivate(DeviceFarmRequest::PurchaseOfferingAction, this))
{

}

/*!
 * \reimp
 */
bool PurchaseOfferingRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PurchaseOfferingResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PurchaseOfferingRequest::response(QNetworkReply * const reply) const
{
    return new PurchaseOfferingResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::PurchaseOfferingRequestPrivate
 * \brief The PurchaseOfferingRequestPrivate class provides private implementation for PurchaseOfferingRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a PurchaseOfferingRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
PurchaseOfferingRequestPrivate::PurchaseOfferingRequestPrivate(
    const DeviceFarmRequest::Action action, PurchaseOfferingRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PurchaseOfferingRequest
 * class' copy constructor.
 */
PurchaseOfferingRequestPrivate::PurchaseOfferingRequestPrivate(
    const PurchaseOfferingRequestPrivate &other, PurchaseOfferingRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
