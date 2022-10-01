// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociatedomainrequest.h"
#include "disassociatedomainrequest_p.h"
#include "disassociatedomainresponse.h"
#include "worklinkrequest_p.h"

namespace QtAws {
namespace WorkLink {

/*!
 * \class QtAws::WorkLink::DisassociateDomainRequest
 * \brief The DisassociateDomainRequest class provides an interface for WorkLink DisassociateDomain requests.
 *
 * \inmodule QtAwsWorkLink
 *
 *  Amazon WorkLink is a cloud-based service that provides secure access to internal websites and web apps from iOS and
 *  Android phones. In a single step, your users, such as employees, can access internal websites as efficiently as they
 *  access any other public website. They enter a URL in their web browser, or choose a link to an internal website in an
 *  email. Amazon WorkLink authenticates the user's access and securely renders authorized internal web content in a secure
 *  rendering service in the AWS cloud. Amazon WorkLink doesn't download or store any internal web content on mobile
 *
 * \sa WorkLinkClient::disassociateDomain
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateDomainRequest::DisassociateDomainRequest(const DisassociateDomainRequest &other)
    : WorkLinkRequest(new DisassociateDomainRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateDomainRequest object.
 */
DisassociateDomainRequest::DisassociateDomainRequest()
    : WorkLinkRequest(new DisassociateDomainRequestPrivate(WorkLinkRequest::DisassociateDomainAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateDomainRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateDomainResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateDomainRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateDomainResponse(*this, reply);
}

/*!
 * \class QtAws::WorkLink::DisassociateDomainRequestPrivate
 * \brief The DisassociateDomainRequestPrivate class provides private implementation for DisassociateDomainRequest.
 * \internal
 *
 * \inmodule QtAwsWorkLink
 */

/*!
 * Constructs a DisassociateDomainRequestPrivate object for WorkLink \a action,
 * with public implementation \a q.
 */
DisassociateDomainRequestPrivate::DisassociateDomainRequestPrivate(
    const WorkLinkRequest::Action action, DisassociateDomainRequest * const q)
    : WorkLinkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateDomainRequest
 * class' copy constructor.
 */
DisassociateDomainRequestPrivate::DisassociateDomainRequestPrivate(
    const DisassociateDomainRequestPrivate &other, DisassociateDomainRequest * const q)
    : WorkLinkRequestPrivate(other, q)
{

}

} // namespace WorkLink
} // namespace QtAws
