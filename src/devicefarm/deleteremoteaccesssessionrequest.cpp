// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteremoteaccesssessionrequest.h"
#include "deleteremoteaccesssessionrequest_p.h"
#include "deleteremoteaccesssessionresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::DeleteRemoteAccessSessionRequest
 * \brief The DeleteRemoteAccessSessionRequest class provides an interface for DeviceFarm DeleteRemoteAccessSession requests.
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
 * \sa DeviceFarmClient::deleteRemoteAccessSession
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteRemoteAccessSessionRequest::DeleteRemoteAccessSessionRequest(const DeleteRemoteAccessSessionRequest &other)
    : DeviceFarmRequest(new DeleteRemoteAccessSessionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteRemoteAccessSessionRequest object.
 */
DeleteRemoteAccessSessionRequest::DeleteRemoteAccessSessionRequest()
    : DeviceFarmRequest(new DeleteRemoteAccessSessionRequestPrivate(DeviceFarmRequest::DeleteRemoteAccessSessionAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteRemoteAccessSessionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteRemoteAccessSessionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteRemoteAccessSessionRequest::response(QNetworkReply * const reply) const
{
    return new DeleteRemoteAccessSessionResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::DeleteRemoteAccessSessionRequestPrivate
 * \brief The DeleteRemoteAccessSessionRequestPrivate class provides private implementation for DeleteRemoteAccessSessionRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a DeleteRemoteAccessSessionRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
DeleteRemoteAccessSessionRequestPrivate::DeleteRemoteAccessSessionRequestPrivate(
    const DeviceFarmRequest::Action action, DeleteRemoteAccessSessionRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteRemoteAccessSessionRequest
 * class' copy constructor.
 */
DeleteRemoteAccessSessionRequestPrivate::DeleteRemoteAccessSessionRequestPrivate(
    const DeleteRemoteAccessSessionRequestPrivate &other, DeleteRemoteAccessSessionRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
