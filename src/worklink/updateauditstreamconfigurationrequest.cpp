// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateauditstreamconfigurationrequest.h"
#include "updateauditstreamconfigurationrequest_p.h"
#include "updateauditstreamconfigurationresponse.h"
#include "worklinkrequest_p.h"

namespace QtAws {
namespace WorkLink {

/*!
 * \class QtAws::WorkLink::UpdateAuditStreamConfigurationRequest
 * \brief The UpdateAuditStreamConfigurationRequest class provides an interface for WorkLink UpdateAuditStreamConfiguration requests.
 *
 * \inmodule QtAwsWorkLink
 *
 *  Amazon WorkLink is a cloud-based service that provides secure access to internal websites and web apps from iOS and
 *  Android phones. In a single step, your users, such as employees, can access internal websites as efficiently as they
 *  access any other public website. They enter a URL in their web browser, or choose a link to an internal website in an
 *  email. Amazon WorkLink authenticates the user's access and securely renders authorized internal web content in a secure
 *  rendering service in the AWS cloud. Amazon WorkLink doesn't download or store any internal web content on mobile
 *
 * \sa WorkLinkClient::updateAuditStreamConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateAuditStreamConfigurationRequest::UpdateAuditStreamConfigurationRequest(const UpdateAuditStreamConfigurationRequest &other)
    : WorkLinkRequest(new UpdateAuditStreamConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateAuditStreamConfigurationRequest object.
 */
UpdateAuditStreamConfigurationRequest::UpdateAuditStreamConfigurationRequest()
    : WorkLinkRequest(new UpdateAuditStreamConfigurationRequestPrivate(WorkLinkRequest::UpdateAuditStreamConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateAuditStreamConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateAuditStreamConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateAuditStreamConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateAuditStreamConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::WorkLink::UpdateAuditStreamConfigurationRequestPrivate
 * \brief The UpdateAuditStreamConfigurationRequestPrivate class provides private implementation for UpdateAuditStreamConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsWorkLink
 */

/*!
 * Constructs a UpdateAuditStreamConfigurationRequestPrivate object for WorkLink \a action,
 * with public implementation \a q.
 */
UpdateAuditStreamConfigurationRequestPrivate::UpdateAuditStreamConfigurationRequestPrivate(
    const WorkLinkRequest::Action action, UpdateAuditStreamConfigurationRequest * const q)
    : WorkLinkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateAuditStreamConfigurationRequest
 * class' copy constructor.
 */
UpdateAuditStreamConfigurationRequestPrivate::UpdateAuditStreamConfigurationRequestPrivate(
    const UpdateAuditStreamConfigurationRequestPrivate &other, UpdateAuditStreamConfigurationRequest * const q)
    : WorkLinkRequestPrivate(other, q)
{

}

} // namespace WorkLink
} // namespace QtAws
