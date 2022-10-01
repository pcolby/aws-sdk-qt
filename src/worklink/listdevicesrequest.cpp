// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdevicesrequest.h"
#include "listdevicesrequest_p.h"
#include "listdevicesresponse.h"
#include "worklinkrequest_p.h"

namespace QtAws {
namespace WorkLink {

/*!
 * \class QtAws::WorkLink::ListDevicesRequest
 * \brief The ListDevicesRequest class provides an interface for WorkLink ListDevices requests.
 *
 * \inmodule QtAwsWorkLink
 *
 *  Amazon WorkLink is a cloud-based service that provides secure access to internal websites and web apps from iOS and
 *  Android phones. In a single step, your users, such as employees, can access internal websites as efficiently as they
 *  access any other public website. They enter a URL in their web browser, or choose a link to an internal website in an
 *  email. Amazon WorkLink authenticates the user's access and securely renders authorized internal web content in a secure
 *  rendering service in the AWS cloud. Amazon WorkLink doesn't download or store any internal web content on mobile
 *
 * \sa WorkLinkClient::listDevices
 */

/*!
 * Constructs a copy of \a other.
 */
ListDevicesRequest::ListDevicesRequest(const ListDevicesRequest &other)
    : WorkLinkRequest(new ListDevicesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDevicesRequest object.
 */
ListDevicesRequest::ListDevicesRequest()
    : WorkLinkRequest(new ListDevicesRequestPrivate(WorkLinkRequest::ListDevicesAction, this))
{

}

/*!
 * \reimp
 */
bool ListDevicesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDevicesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDevicesRequest::response(QNetworkReply * const reply) const
{
    return new ListDevicesResponse(*this, reply);
}

/*!
 * \class QtAws::WorkLink::ListDevicesRequestPrivate
 * \brief The ListDevicesRequestPrivate class provides private implementation for ListDevicesRequest.
 * \internal
 *
 * \inmodule QtAwsWorkLink
 */

/*!
 * Constructs a ListDevicesRequestPrivate object for WorkLink \a action,
 * with public implementation \a q.
 */
ListDevicesRequestPrivate::ListDevicesRequestPrivate(
    const WorkLinkRequest::Action action, ListDevicesRequest * const q)
    : WorkLinkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDevicesRequest
 * class' copy constructor.
 */
ListDevicesRequestPrivate::ListDevicesRequestPrivate(
    const ListDevicesRequestPrivate &other, ListDevicesRequest * const q)
    : WorkLinkRequestPrivate(other, q)
{

}

} // namespace WorkLink
} // namespace QtAws
