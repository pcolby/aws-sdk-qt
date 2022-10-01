// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteinstanceprofilerequest.h"
#include "deleteinstanceprofilerequest_p.h"
#include "deleteinstanceprofileresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::DeleteInstanceProfileRequest
 * \brief The DeleteInstanceProfileRequest class provides an interface for DeviceFarm DeleteInstanceProfile requests.
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
 * \sa DeviceFarmClient::deleteInstanceProfile
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteInstanceProfileRequest::DeleteInstanceProfileRequest(const DeleteInstanceProfileRequest &other)
    : DeviceFarmRequest(new DeleteInstanceProfileRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteInstanceProfileRequest object.
 */
DeleteInstanceProfileRequest::DeleteInstanceProfileRequest()
    : DeviceFarmRequest(new DeleteInstanceProfileRequestPrivate(DeviceFarmRequest::DeleteInstanceProfileAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteInstanceProfileRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteInstanceProfileResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteInstanceProfileRequest::response(QNetworkReply * const reply) const
{
    return new DeleteInstanceProfileResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::DeleteInstanceProfileRequestPrivate
 * \brief The DeleteInstanceProfileRequestPrivate class provides private implementation for DeleteInstanceProfileRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a DeleteInstanceProfileRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
DeleteInstanceProfileRequestPrivate::DeleteInstanceProfileRequestPrivate(
    const DeviceFarmRequest::Action action, DeleteInstanceProfileRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteInstanceProfileRequest
 * class' copy constructor.
 */
DeleteInstanceProfileRequestPrivate::DeleteInstanceProfileRequestPrivate(
    const DeleteInstanceProfileRequestPrivate &other, DeleteInstanceProfileRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
