// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createremoteaccesssessionrequest.h"
#include "createremoteaccesssessionrequest_p.h"
#include "createremoteaccesssessionresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::CreateRemoteAccessSessionRequest
 * \brief The CreateRemoteAccessSessionRequest class provides an interface for DeviceFarm CreateRemoteAccessSession requests.
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
 * \sa DeviceFarmClient::createRemoteAccessSession
 */

/*!
 * Constructs a copy of \a other.
 */
CreateRemoteAccessSessionRequest::CreateRemoteAccessSessionRequest(const CreateRemoteAccessSessionRequest &other)
    : DeviceFarmRequest(new CreateRemoteAccessSessionRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateRemoteAccessSessionRequest object.
 */
CreateRemoteAccessSessionRequest::CreateRemoteAccessSessionRequest()
    : DeviceFarmRequest(new CreateRemoteAccessSessionRequestPrivate(DeviceFarmRequest::CreateRemoteAccessSessionAction, this))
{

}

/*!
 * \reimp
 */
bool CreateRemoteAccessSessionRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateRemoteAccessSessionResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateRemoteAccessSessionRequest::response(QNetworkReply * const reply) const
{
    return new CreateRemoteAccessSessionResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::CreateRemoteAccessSessionRequestPrivate
 * \brief The CreateRemoteAccessSessionRequestPrivate class provides private implementation for CreateRemoteAccessSessionRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a CreateRemoteAccessSessionRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
CreateRemoteAccessSessionRequestPrivate::CreateRemoteAccessSessionRequestPrivate(
    const DeviceFarmRequest::Action action, CreateRemoteAccessSessionRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateRemoteAccessSessionRequest
 * class' copy constructor.
 */
CreateRemoteAccessSessionRequestPrivate::CreateRemoteAccessSessionRequestPrivate(
    const CreateRemoteAccessSessionRequestPrivate &other, CreateRemoteAccessSessionRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
