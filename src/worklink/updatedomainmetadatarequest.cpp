// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedomainmetadatarequest.h"
#include "updatedomainmetadatarequest_p.h"
#include "updatedomainmetadataresponse.h"
#include "worklinkrequest_p.h"

namespace QtAws {
namespace WorkLink {

/*!
 * \class QtAws::WorkLink::UpdateDomainMetadataRequest
 * \brief The UpdateDomainMetadataRequest class provides an interface for WorkLink UpdateDomainMetadata requests.
 *
 * \inmodule QtAwsWorkLink
 *
 *  Amazon WorkLink is a cloud-based service that provides secure access to internal websites and web apps from iOS and
 *  Android phones. In a single step, your users, such as employees, can access internal websites as efficiently as they
 *  access any other public website. They enter a URL in their web browser, or choose a link to an internal website in an
 *  email. Amazon WorkLink authenticates the user's access and securely renders authorized internal web content in a secure
 *  rendering service in the AWS cloud. Amazon WorkLink doesn't download or store any internal web content on mobile
 *
 * \sa WorkLinkClient::updateDomainMetadata
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDomainMetadataRequest::UpdateDomainMetadataRequest(const UpdateDomainMetadataRequest &other)
    : WorkLinkRequest(new UpdateDomainMetadataRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDomainMetadataRequest object.
 */
UpdateDomainMetadataRequest::UpdateDomainMetadataRequest()
    : WorkLinkRequest(new UpdateDomainMetadataRequestPrivate(WorkLinkRequest::UpdateDomainMetadataAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDomainMetadataRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateDomainMetadataResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDomainMetadataRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDomainMetadataResponse(*this, reply);
}

/*!
 * \class QtAws::WorkLink::UpdateDomainMetadataRequestPrivate
 * \brief The UpdateDomainMetadataRequestPrivate class provides private implementation for UpdateDomainMetadataRequest.
 * \internal
 *
 * \inmodule QtAwsWorkLink
 */

/*!
 * Constructs a UpdateDomainMetadataRequestPrivate object for WorkLink \a action,
 * with public implementation \a q.
 */
UpdateDomainMetadataRequestPrivate::UpdateDomainMetadataRequestPrivate(
    const WorkLinkRequest::Action action, UpdateDomainMetadataRequest * const q)
    : WorkLinkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateDomainMetadataRequest
 * class' copy constructor.
 */
UpdateDomainMetadataRequestPrivate::UpdateDomainMetadataRequestPrivate(
    const UpdateDomainMetadataRequestPrivate &other, UpdateDomainMetadataRequest * const q)
    : WorkLinkRequestPrivate(other, q)
{

}

} // namespace WorkLink
} // namespace QtAws
