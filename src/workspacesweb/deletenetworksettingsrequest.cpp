// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletenetworksettingsrequest.h"
#include "deletenetworksettingsrequest_p.h"
#include "deletenetworksettingsresponse.h"
#include "workspaceswebrequest_p.h"

namespace QtAws {
namespace WorkSpacesWeb {

/*!
 * \class QtAws::WorkSpacesWeb::DeleteNetworkSettingsRequest
 * \brief The DeleteNetworkSettingsRequest class provides an interface for WorkSpacesWeb DeleteNetworkSettings requests.
 *
 * \inmodule QtAwsWorkSpacesWeb
 *
 *  WorkSpaces Web is a low cost, fully managed WorkSpace built specifically to facilitate secure, web-based workloads.
 *  WorkSpaces Web makes it easy for customers to safely provide their employees with access to internal websites and SaaS
 *  web applications without the administrative burden of appliances or specialized client software. WorkSpaces Web provides
 *  simple policy tools tailored for user interactions, while offloading common tasks like capacity management, scaling, and
 *  maintaining browser
 *
 * \sa WorkSpacesWebClient::deleteNetworkSettings
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteNetworkSettingsRequest::DeleteNetworkSettingsRequest(const DeleteNetworkSettingsRequest &other)
    : WorkSpacesWebRequest(new DeleteNetworkSettingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteNetworkSettingsRequest object.
 */
DeleteNetworkSettingsRequest::DeleteNetworkSettingsRequest()
    : WorkSpacesWebRequest(new DeleteNetworkSettingsRequestPrivate(WorkSpacesWebRequest::DeleteNetworkSettingsAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteNetworkSettingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteNetworkSettingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteNetworkSettingsRequest::response(QNetworkReply * const reply) const
{
    return new DeleteNetworkSettingsResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpacesWeb::DeleteNetworkSettingsRequestPrivate
 * \brief The DeleteNetworkSettingsRequestPrivate class provides private implementation for DeleteNetworkSettingsRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpacesWeb
 */

/*!
 * Constructs a DeleteNetworkSettingsRequestPrivate object for WorkSpacesWeb \a action,
 * with public implementation \a q.
 */
DeleteNetworkSettingsRequestPrivate::DeleteNetworkSettingsRequestPrivate(
    const WorkSpacesWebRequest::Action action, DeleteNetworkSettingsRequest * const q)
    : WorkSpacesWebRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteNetworkSettingsRequest
 * class' copy constructor.
 */
DeleteNetworkSettingsRequestPrivate::DeleteNetworkSettingsRequestPrivate(
    const DeleteNetworkSettingsRequestPrivate &other, DeleteNetworkSettingsRequest * const q)
    : WorkSpacesWebRequestPrivate(other, q)
{

}

} // namespace WorkSpacesWeb
} // namespace QtAws
