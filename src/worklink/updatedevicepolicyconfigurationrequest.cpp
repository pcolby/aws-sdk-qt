// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatedevicepolicyconfigurationrequest.h"
#include "updatedevicepolicyconfigurationrequest_p.h"
#include "updatedevicepolicyconfigurationresponse.h"
#include "worklinkrequest_p.h"

namespace QtAws {
namespace WorkLink {

/*!
 * \class QtAws::WorkLink::UpdateDevicePolicyConfigurationRequest
 * \brief The UpdateDevicePolicyConfigurationRequest class provides an interface for WorkLink UpdateDevicePolicyConfiguration requests.
 *
 * \inmodule QtAwsWorkLink
 *
 *  Amazon WorkLink is a cloud-based service that provides secure access to internal websites and web apps from iOS and
 *  Android phones. In a single step, your users, such as employees, can access internal websites as efficiently as they
 *  access any other public website. They enter a URL in their web browser, or choose a link to an internal website in an
 *  email. Amazon WorkLink authenticates the user's access and securely renders authorized internal web content in a secure
 *  rendering service in the AWS cloud. Amazon WorkLink doesn't download or store any internal web content on mobile
 *
 * \sa WorkLinkClient::updateDevicePolicyConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateDevicePolicyConfigurationRequest::UpdateDevicePolicyConfigurationRequest(const UpdateDevicePolicyConfigurationRequest &other)
    : WorkLinkRequest(new UpdateDevicePolicyConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateDevicePolicyConfigurationRequest object.
 */
UpdateDevicePolicyConfigurationRequest::UpdateDevicePolicyConfigurationRequest()
    : WorkLinkRequest(new UpdateDevicePolicyConfigurationRequestPrivate(WorkLinkRequest::UpdateDevicePolicyConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateDevicePolicyConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateDevicePolicyConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateDevicePolicyConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateDevicePolicyConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::WorkLink::UpdateDevicePolicyConfigurationRequestPrivate
 * \brief The UpdateDevicePolicyConfigurationRequestPrivate class provides private implementation for UpdateDevicePolicyConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsWorkLink
 */

/*!
 * Constructs a UpdateDevicePolicyConfigurationRequestPrivate object for WorkLink \a action,
 * with public implementation \a q.
 */
UpdateDevicePolicyConfigurationRequestPrivate::UpdateDevicePolicyConfigurationRequestPrivate(
    const WorkLinkRequest::Action action, UpdateDevicePolicyConfigurationRequest * const q)
    : WorkLinkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateDevicePolicyConfigurationRequest
 * class' copy constructor.
 */
UpdateDevicePolicyConfigurationRequestPrivate::UpdateDevicePolicyConfigurationRequestPrivate(
    const UpdateDevicePolicyConfigurationRequestPrivate &other, UpdateDevicePolicyConfigurationRequest * const q)
    : WorkLinkRequestPrivate(other, q)
{

}

} // namespace WorkLink
} // namespace QtAws
