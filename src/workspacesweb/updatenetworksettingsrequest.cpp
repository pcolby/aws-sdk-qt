// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updatenetworksettingsrequest.h"
#include "updatenetworksettingsrequest_p.h"
#include "updatenetworksettingsresponse.h"
#include "workspaceswebrequest_p.h"

namespace QtAws {
namespace WorkSpacesWeb {

/*!
 * \class QtAws::WorkSpacesWeb::UpdateNetworkSettingsRequest
 * \brief The UpdateNetworkSettingsRequest class provides an interface for WorkSpacesWeb UpdateNetworkSettings requests.
 *
 * \inmodule QtAwsWorkSpacesWeb
 *
 *  WorkSpaces Web is a low cost, fully managed WorkSpace built specifically to facilitate secure, web-based workloads.
 *  WorkSpaces Web makes it easy for customers to safely provide their employees with access to internal websites and SaaS
 *  web applications without the administrative burden of appliances or specialized client software. WorkSpaces Web provides
 *  simple policy tools tailored for user interactions, while offloading common tasks like capacity management, scaling, and
 *  maintaining browser
 *
 * \sa WorkSpacesWebClient::updateNetworkSettings
 */

/*!
 * Constructs a copy of \a other.
 */
UpdateNetworkSettingsRequest::UpdateNetworkSettingsRequest(const UpdateNetworkSettingsRequest &other)
    : WorkSpacesWebRequest(new UpdateNetworkSettingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdateNetworkSettingsRequest object.
 */
UpdateNetworkSettingsRequest::UpdateNetworkSettingsRequest()
    : WorkSpacesWebRequest(new UpdateNetworkSettingsRequestPrivate(WorkSpacesWebRequest::UpdateNetworkSettingsAction, this))
{

}

/*!
 * \reimp
 */
bool UpdateNetworkSettingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdateNetworkSettingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdateNetworkSettingsRequest::response(QNetworkReply * const reply) const
{
    return new UpdateNetworkSettingsResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpacesWeb::UpdateNetworkSettingsRequestPrivate
 * \brief The UpdateNetworkSettingsRequestPrivate class provides private implementation for UpdateNetworkSettingsRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpacesWeb
 */

/*!
 * Constructs a UpdateNetworkSettingsRequestPrivate object for WorkSpacesWeb \a action,
 * with public implementation \a q.
 */
UpdateNetworkSettingsRequestPrivate::UpdateNetworkSettingsRequestPrivate(
    const WorkSpacesWebRequest::Action action, UpdateNetworkSettingsRequest * const q)
    : WorkSpacesWebRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdateNetworkSettingsRequest
 * class' copy constructor.
 */
UpdateNetworkSettingsRequestPrivate::UpdateNetworkSettingsRequestPrivate(
    const UpdateNetworkSettingsRequestPrivate &other, UpdateNetworkSettingsRequest * const q)
    : WorkSpacesWebRequestPrivate(other, q)
{

}

} // namespace WorkSpacesWeb
} // namespace QtAws
