// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatecompanynetworkconfigurationrequest.h"
#include "updatecompanynetworkconfigurationrequest_p.h"
#include "updatecompanynetworkconfigurationresponse.h"
#include "worklinkrequest_p.h"

namespace QtAws {
namespace WorkLink {

/*!
 * \class QtAws::WorkLink::UpdateCompanyNetworkConfigurationRequest
 * \brief The UpdateCompanyNetworkConfigurationRequest class provides an interface for WorkLink UpdateCompanyNetworkConfiguration requests.
 *
 * \inmodule QtAwsWorkLink
 *
 *  Amazon WorkLink is a cloud-based service that provides secure access to internal websites and web apps from iOS and
 *  Android phones. In a single step, your users, such as employees, can access internal websites as efficiently as they
 *  access any other public website. They enter a URL in their web browser, or choose a link to an internal website in an
 *  email. Amazon WorkLink authenticates the user's access and securely renders authorized internal web content in a secure
 *  rendering service in the AWS cloud. Amazon WorkLink doesn't download or store any internal web content on mobile
 *
 * \sa WorkLinkClient::updateCompanyNetworkConfiguration
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateCompanyNetworkConfigurationRequest::UpdateCompanyNetworkConfigurationRequest(const UpdateCompanyNetworkConfigurationRequest &other)
    : WorkLinkRequest(new UpdateCompanyNetworkConfigurationRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateCompanyNetworkConfigurationRequest object.
 */
UpdateCompanyNetworkConfigurationRequest::UpdateCompanyNetworkConfigurationRequest()
    : WorkLinkRequest(new UpdateCompanyNetworkConfigurationRequestPrivate(WorkLinkRequest::UpdateCompanyNetworkConfigurationAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateCompanyNetworkConfigurationRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateCompanyNetworkConfigurationResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateCompanyNetworkConfigurationRequest::response(QNetworkReply * const reply) const
{
    return new UpdateCompanyNetworkConfigurationResponse(*this, reply);
}

/*!
 * \class QtAws::WorkLink::UpdateCompanyNetworkConfigurationRequestPrivate
 * \brief The UpdateCompanyNetworkConfigurationRequestPrivate class provides private implementation for UpdateCompanyNetworkConfigurationRequest.
 * \internal
 *
 * \inmodule QtAwsWorkLink
 */

/*!
 * Constructs a UpdateCompanyNetworkConfigurationRequestPrivate object for WorkLink \a action,
 * with public implementation \a q.
 */
UpdateCompanyNetworkConfigurationRequestPrivate::UpdateCompanyNetworkConfigurationRequestPrivate(
    const WorkLinkRequest::Action action, UpdateCompanyNetworkConfigurationRequest * const q)
    : WorkLinkRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateCompanyNetworkConfigurationRequest
 * class' copy constructor.
 */
UpdateCompanyNetworkConfigurationRequestPrivate::UpdateCompanyNetworkConfigurationRequestPrivate(
    const UpdateCompanyNetworkConfigurationRequestPrivate &other, UpdateCompanyNetworkConfigurationRequest * const q)
    : WorkLinkRequestPrivate(other, q)
{

}

} // namespace WorkLink
} // namespace QtAws
