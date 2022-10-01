// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletenetworkprofilerequest.h"
#include "deletenetworkprofilerequest_p.h"
#include "deletenetworkprofileresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::DeleteNetworkProfileRequest
 * \brief The DeleteNetworkProfileRequest class provides an interface for DeviceFarm DeleteNetworkProfile requests.
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
 * \sa DeviceFarmClient::deleteNetworkProfile
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteNetworkProfileRequest::DeleteNetworkProfileRequest(const DeleteNetworkProfileRequest &other)
    : DeviceFarmRequest(new DeleteNetworkProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteNetworkProfileRequest object.
 */
DeleteNetworkProfileRequest::DeleteNetworkProfileRequest()
    : DeviceFarmRequest(new DeleteNetworkProfileRequestPrivate(DeviceFarmRequest::DeleteNetworkProfileAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteNetworkProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteNetworkProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteNetworkProfileRequest::response(QNetworkReply * const reply) const
{
    return new DeleteNetworkProfileResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::DeleteNetworkProfileRequestPrivate
 * \brief The DeleteNetworkProfileRequestPrivate class provides private implementation for DeleteNetworkProfileRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a DeleteNetworkProfileRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
DeleteNetworkProfileRequestPrivate::DeleteNetworkProfileRequestPrivate(
    const DeviceFarmRequest::Action action, DeleteNetworkProfileRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteNetworkProfileRequest
 * class' copy constructor.
 */
DeleteNetworkProfileRequestPrivate::DeleteNetworkProfileRequestPrivate(
    const DeleteNetworkProfileRequestPrivate &other, DeleteNetworkProfileRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
