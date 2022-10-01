// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listwebsitecertificateauthoritiesrequest.h"
#include "listwebsitecertificateauthoritiesrequest_p.h"
#include "listwebsitecertificateauthoritiesresponse.h"
#include "worklinkrequest_p.h"

namespace QtAws {
namespace WorkLink {

/*!
 * \class QtAws::WorkLink::ListWebsiteCertificateAuthoritiesRequest
 * \brief The ListWebsiteCertificateAuthoritiesRequest class provides an interface for WorkLink ListWebsiteCertificateAuthorities requests.
 *
 * \inmodule QtAwsWorkLink
 *
 *  Amazon WorkLink is a cloud-based service that provides secure access to internal websites and web apps from iOS and
 *  Android phones. In a single step, your users, such as employees, can access internal websites as efficiently as they
 *  access any other public website. They enter a URL in their web browser, or choose a link to an internal website in an
 *  email. Amazon WorkLink authenticates the user's access and securely renders authorized internal web content in a secure
 *  rendering service in the AWS cloud. Amazon WorkLink doesn't download or store any internal web content on mobile
 *
 * \sa WorkLinkClient::listWebsiteCertificateAuthorities
 */

/*!
 * Constructs a copy of \a other.
 */
ListWebsiteCertificateAuthoritiesRequest::ListWebsiteCertificateAuthoritiesRequest(const ListWebsiteCertificateAuthoritiesRequest &other)
    : WorkLinkRequest(new ListWebsiteCertificateAuthoritiesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListWebsiteCertificateAuthoritiesRequest object.
 */
ListWebsiteCertificateAuthoritiesRequest::ListWebsiteCertificateAuthoritiesRequest()
    : WorkLinkRequest(new ListWebsiteCertificateAuthoritiesRequestPrivate(WorkLinkRequest::ListWebsiteCertificateAuthoritiesAction, this))
{

}

/*!
 * \reimp
 */
bool ListWebsiteCertificateAuthoritiesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListWebsiteCertificateAuthoritiesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListWebsiteCertificateAuthoritiesRequest::response(QNetworkReply * const reply) const
{
    return new ListWebsiteCertificateAuthoritiesResponse(*this, reply);
}

/*!
 * \class QtAws::WorkLink::ListWebsiteCertificateAuthoritiesRequestPrivate
 * \brief The ListWebsiteCertificateAuthoritiesRequestPrivate class provides private implementation for ListWebsiteCertificateAuthoritiesRequest.
 * \internal
 *
 * \inmodule QtAwsWorkLink
 */

/*!
 * Constructs a ListWebsiteCertificateAuthoritiesRequestPrivate object for WorkLink \a action,
 * with public implementation \a q.
 */
ListWebsiteCertificateAuthoritiesRequestPrivate::ListWebsiteCertificateAuthoritiesRequestPrivate(
    const WorkLinkRequest::Action action, ListWebsiteCertificateAuthoritiesRequest * const q)
    : WorkLinkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListWebsiteCertificateAuthoritiesRequest
 * class' copy constructor.
 */
ListWebsiteCertificateAuthoritiesRequestPrivate::ListWebsiteCertificateAuthoritiesRequestPrivate(
    const ListWebsiteCertificateAuthoritiesRequestPrivate &other, ListWebsiteCertificateAuthoritiesRequest * const q)
    : WorkLinkRequestPrivate(other, q)
{

}

} // namespace WorkLink
} // namespace QtAws
