// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associatedomainrequest.h"
#include "associatedomainrequest_p.h"
#include "associatedomainresponse.h"
#include "worklinkrequest_p.h"

namespace QtAws {
namespace WorkLink {

/*!
 * \class QtAws::WorkLink::AssociateDomainRequest
 * \brief The AssociateDomainRequest class provides an interface for WorkLink AssociateDomain requests.
 *
 * \inmodule QtAwsWorkLink
 *
 *  Amazon WorkLink is a cloud-based service that provides secure access to internal websites and web apps from iOS and
 *  Android phones. In a single step, your users, such as employees, can access internal websites as efficiently as they
 *  access any other public website. They enter a URL in their web browser, or choose a link to an internal website in an
 *  email. Amazon WorkLink authenticates the user's access and securely renders authorized internal web content in a secure
 *  rendering service in the AWS cloud. Amazon WorkLink doesn't download or store any internal web content on mobile
 *
 * \sa WorkLinkClient::associateDomain
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateDomainRequest::AssociateDomainRequest(const AssociateDomainRequest &other)
    : WorkLinkRequest(new AssociateDomainRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateDomainRequest object.
 */
AssociateDomainRequest::AssociateDomainRequest()
    : WorkLinkRequest(new AssociateDomainRequestPrivate(WorkLinkRequest::AssociateDomainAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateDomainRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateDomainResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateDomainRequest::response(QNetworkReply * const reply) const
{
    return new AssociateDomainResponse(*this, reply);
}

/*!
 * \class QtAws::WorkLink::AssociateDomainRequestPrivate
 * \brief The AssociateDomainRequestPrivate class provides private implementation for AssociateDomainRequest.
 * \internal
 *
 * \inmodule QtAwsWorkLink
 */

/*!
 * Constructs a AssociateDomainRequestPrivate object for WorkLink \a action,
 * with public implementation \a q.
 */
AssociateDomainRequestPrivate::AssociateDomainRequestPrivate(
    const WorkLinkRequest::Action action, AssociateDomainRequest * const q)
    : WorkLinkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateDomainRequest
 * class' copy constructor.
 */
AssociateDomainRequestPrivate::AssociateDomainRequestPrivate(
    const AssociateDomainRequestPrivate &other, AssociateDomainRequest * const q)
    : WorkLinkRequestPrivate(other, q)
{

}

} // namespace WorkLink
} // namespace QtAws
