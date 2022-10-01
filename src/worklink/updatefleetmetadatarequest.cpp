// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatefleetmetadatarequest.h"
#include "updatefleetmetadatarequest_p.h"
#include "updatefleetmetadataresponse.h"
#include "worklinkrequest_p.h"

namespace QtAws {
namespace WorkLink {

/*!
 * \class QtAws::WorkLink::UpdateFleetMetadataRequest
 * \brief The UpdateFleetMetadataRequest class provides an interface for WorkLink UpdateFleetMetadata requests.
 *
 * \inmodule QtAwsWorkLink
 *
 *  Amazon WorkLink is a cloud-based service that provides secure access to internal websites and web apps from iOS and
 *  Android phones. In a single step, your users, such as employees, can access internal websites as efficiently as they
 *  access any other public website. They enter a URL in their web browser, or choose a link to an internal website in an
 *  email. Amazon WorkLink authenticates the user's access and securely renders authorized internal web content in a secure
 *  rendering service in the AWS cloud. Amazon WorkLink doesn't download or store any internal web content on mobile
 *
 * \sa WorkLinkClient::updateFleetMetadata
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateFleetMetadataRequest::UpdateFleetMetadataRequest(const UpdateFleetMetadataRequest &other)
    : WorkLinkRequest(new UpdateFleetMetadataRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateFleetMetadataRequest object.
 */
UpdateFleetMetadataRequest::UpdateFleetMetadataRequest()
    : WorkLinkRequest(new UpdateFleetMetadataRequestPrivate(WorkLinkRequest::UpdateFleetMetadataAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateFleetMetadataRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateFleetMetadataResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateFleetMetadataRequest::response(QNetworkReply * const reply) const
{
    return new UpdateFleetMetadataResponse(*this, reply);
}

/*!
 * \class QtAws::WorkLink::UpdateFleetMetadataRequestPrivate
 * \brief The UpdateFleetMetadataRequestPrivate class provides private implementation for UpdateFleetMetadataRequest.
 * \internal
 *
 * \inmodule QtAwsWorkLink
 */

/*!
 * Constructs a UpdateFleetMetadataRequestPrivate object for WorkLink \a action,
 * with public implementation \a q.
 */
UpdateFleetMetadataRequestPrivate::UpdateFleetMetadataRequestPrivate(
    const WorkLinkRequest::Action action, UpdateFleetMetadataRequest * const q)
    : WorkLinkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateFleetMetadataRequest
 * class' copy constructor.
 */
UpdateFleetMetadataRequestPrivate::UpdateFleetMetadataRequestPrivate(
    const UpdateFleetMetadataRequestPrivate &other, UpdateFleetMetadataRequest * const q)
    : WorkLinkRequestPrivate(other, q)
{

}

} // namespace WorkLink
} // namespace QtAws
