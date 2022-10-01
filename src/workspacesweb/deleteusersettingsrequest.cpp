// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteusersettingsrequest.h"
#include "deleteusersettingsrequest_p.h"
#include "deleteusersettingsresponse.h"
#include "workspaceswebrequest_p.h"

namespace QtAws {
namespace WorkSpacesWeb {

/*!
 * \class QtAws::WorkSpacesWeb::DeleteUserSettingsRequest
 * \brief The DeleteUserSettingsRequest class provides an interface for WorkSpacesWeb DeleteUserSettings requests.
 *
 * \inmodule QtAwsWorkSpacesWeb
 *
 *  WorkSpaces Web is a low cost, fully managed WorkSpace built specifically to facilitate secure, web-based workloads.
 *  WorkSpaces Web makes it easy for customers to safely provide their employees with access to internal websites and SaaS
 *  web applications without the administrative burden of appliances or specialized client software. WorkSpaces Web provides
 *  simple policy tools tailored for user interactions, while offloading common tasks like capacity management, scaling, and
 *  maintaining browser
 *
 * \sa WorkSpacesWebClient::deleteUserSettings
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteUserSettingsRequest::DeleteUserSettingsRequest(const DeleteUserSettingsRequest &other)
    : WorkSpacesWebRequest(new DeleteUserSettingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteUserSettingsRequest object.
 */
DeleteUserSettingsRequest::DeleteUserSettingsRequest()
    : WorkSpacesWebRequest(new DeleteUserSettingsRequestPrivate(WorkSpacesWebRequest::DeleteUserSettingsAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteUserSettingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteUserSettingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteUserSettingsRequest::response(QNetworkReply * const reply) const
{
    return new DeleteUserSettingsResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpacesWeb::DeleteUserSettingsRequestPrivate
 * \brief The DeleteUserSettingsRequestPrivate class provides private implementation for DeleteUserSettingsRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpacesWeb
 */

/*!
 * Constructs a DeleteUserSettingsRequestPrivate object for WorkSpacesWeb \a action,
 * with public implementation \a q.
 */
DeleteUserSettingsRequestPrivate::DeleteUserSettingsRequestPrivate(
    const WorkSpacesWebRequest::Action action, DeleteUserSettingsRequest * const q)
    : WorkSpacesWebRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteUserSettingsRequest
 * class' copy constructor.
 */
DeleteUserSettingsRequestPrivate::DeleteUserSettingsRequestPrivate(
    const DeleteUserSettingsRequestPrivate &other, DeleteUserSettingsRequest * const q)
    : WorkSpacesWebRequestPrivate(other, q)
{

}

} // namespace WorkSpacesWeb
} // namespace QtAws
