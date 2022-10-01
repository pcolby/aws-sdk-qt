// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listremoteaccesssessionsrequest.h"
#include "listremoteaccesssessionsrequest_p.h"
#include "listremoteaccesssessionsresponse.h"
#include "devicefarmrequest_p.h"

namespace QtAws {
namespace DeviceFarm {

/*!
 * \class QtAws::DeviceFarm::ListRemoteAccessSessionsRequest
 * \brief The ListRemoteAccessSessionsRequest class provides an interface for DeviceFarm ListRemoteAccessSessions requests.
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
 * \sa DeviceFarmClient::listRemoteAccessSessions
 */

/*!
 * Constructs a copy of \a other.
 */
ListRemoteAccessSessionsRequest::ListRemoteAccessSessionsRequest(const ListRemoteAccessSessionsRequest &other)
    : DeviceFarmRequest(new ListRemoteAccessSessionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListRemoteAccessSessionsRequest object.
 */
ListRemoteAccessSessionsRequest::ListRemoteAccessSessionsRequest()
    : DeviceFarmRequest(new ListRemoteAccessSessionsRequestPrivate(DeviceFarmRequest::ListRemoteAccessSessionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListRemoteAccessSessionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListRemoteAccessSessionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListRemoteAccessSessionsRequest::response(QNetworkReply * const reply) const
{
    return new ListRemoteAccessSessionsResponse(*this, reply);
}

/*!
 * \class QtAws::DeviceFarm::ListRemoteAccessSessionsRequestPrivate
 * \brief The ListRemoteAccessSessionsRequestPrivate class provides private implementation for ListRemoteAccessSessionsRequest.
 * \internal
 *
 * \inmodule QtAwsDeviceFarm
 */

/*!
 * Constructs a ListRemoteAccessSessionsRequestPrivate object for DeviceFarm \a action,
 * with public implementation \a q.
 */
ListRemoteAccessSessionsRequestPrivate::ListRemoteAccessSessionsRequestPrivate(
    const DeviceFarmRequest::Action action, ListRemoteAccessSessionsRequest * const q)
    : DeviceFarmRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListRemoteAccessSessionsRequest
 * class' copy constructor.
 */
ListRemoteAccessSessionsRequestPrivate::ListRemoteAccessSessionsRequestPrivate(
    const ListRemoteAccessSessionsRequestPrivate &other, ListRemoteAccessSessionsRequest * const q)
    : DeviceFarmRequestPrivate(other, q)
{

}

} // namespace DeviceFarm
} // namespace QtAws
