// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listfleetsrequest.h"
#include "listfleetsrequest_p.h"
#include "listfleetsresponse.h"
#include "worklinkrequest_p.h"

namespace QtAws {
namespace WorkLink {

/*!
 * \class QtAws::WorkLink::ListFleetsRequest
 * \brief The ListFleetsRequest class provides an interface for WorkLink ListFleets requests.
 *
 * \inmodule QtAwsWorkLink
 *
 *  Amazon WorkLink is a cloud-based service that provides secure access to internal websites and web apps from iOS and
 *  Android phones. In a single step, your users, such as employees, can access internal websites as efficiently as they
 *  access any other public website. They enter a URL in their web browser, or choose a link to an internal website in an
 *  email. Amazon WorkLink authenticates the user's access and securely renders authorized internal web content in a secure
 *  rendering service in the AWS cloud. Amazon WorkLink doesn't download or store any internal web content on mobile
 *
 * \sa WorkLinkClient::listFleets
 */

/*!
 * Constructs a copy of \a other.
 */
ListFleetsRequest::ListFleetsRequest(const ListFleetsRequest &other)
    : WorkLinkRequest(new ListFleetsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListFleetsRequest object.
 */
ListFleetsRequest::ListFleetsRequest()
    : WorkLinkRequest(new ListFleetsRequestPrivate(WorkLinkRequest::ListFleetsAction, this))
{

}

/*!
 * \reimp
 */
bool ListFleetsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListFleetsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListFleetsRequest::response(QNetworkReply * const reply) const
{
    return new ListFleetsResponse(*this, reply);
}

/*!
 * \class QtAws::WorkLink::ListFleetsRequestPrivate
 * \brief The ListFleetsRequestPrivate class provides private implementation for ListFleetsRequest.
 * \internal
 *
 * \inmodule QtAwsWorkLink
 */

/*!
 * Constructs a ListFleetsRequestPrivate object for WorkLink \a action,
 * with public implementation \a q.
 */
ListFleetsRequestPrivate::ListFleetsRequestPrivate(
    const WorkLinkRequest::Action action, ListFleetsRequest * const q)
    : WorkLinkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListFleetsRequest
 * class' copy constructor.
 */
ListFleetsRequestPrivate::ListFleetsRequestPrivate(
    const ListFleetsRequestPrivate &other, ListFleetsRequest * const q)
    : WorkLinkRequestPrivate(other, q)
{

}

} // namespace WorkLink
} // namespace QtAws
