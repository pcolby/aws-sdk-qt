// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deletebrowsersettingsrequest.h"
#include "deletebrowsersettingsrequest_p.h"
#include "deletebrowsersettingsresponse.h"
#include "workspaceswebrequest_p.h"

namespace QtAws {
namespace WorkSpacesWeb {

/*!
 * \class QtAws::WorkSpacesWeb::DeleteBrowserSettingsRequest
 * \brief The DeleteBrowserSettingsRequest class provides an interface for WorkSpacesWeb DeleteBrowserSettings requests.
 *
 * \inmodule QtAwsWorkSpacesWeb
 *
 *  WorkSpaces Web is a low cost, fully managed WorkSpace built specifically to facilitate secure, web-based workloads.
 *  WorkSpaces Web makes it easy for customers to safely provide their employees with access to internal websites and SaaS
 *  web applications without the administrative burden of appliances or specialized client software. WorkSpaces Web provides
 *  simple policy tools tailored for user interactions, while offloading common tasks like capacity management, scaling, and
 *  maintaining browser
 *
 * \sa WorkSpacesWebClient::deleteBrowserSettings
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteBrowserSettingsRequest::DeleteBrowserSettingsRequest(const DeleteBrowserSettingsRequest &other)
    : WorkSpacesWebRequest(new DeleteBrowserSettingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteBrowserSettingsRequest object.
 */
DeleteBrowserSettingsRequest::DeleteBrowserSettingsRequest()
    : WorkSpacesWebRequest(new DeleteBrowserSettingsRequestPrivate(WorkSpacesWebRequest::DeleteBrowserSettingsAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteBrowserSettingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteBrowserSettingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteBrowserSettingsRequest::response(QNetworkReply * const reply) const
{
    return new DeleteBrowserSettingsResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpacesWeb::DeleteBrowserSettingsRequestPrivate
 * \brief The DeleteBrowserSettingsRequestPrivate class provides private implementation for DeleteBrowserSettingsRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpacesWeb
 */

/*!
 * Constructs a DeleteBrowserSettingsRequestPrivate object for WorkSpacesWeb \a action,
 * with public implementation \a q.
 */
DeleteBrowserSettingsRequestPrivate::DeleteBrowserSettingsRequestPrivate(
    const WorkSpacesWebRequest::Action action, DeleteBrowserSettingsRequest * const q)
    : WorkSpacesWebRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteBrowserSettingsRequest
 * class' copy constructor.
 */
DeleteBrowserSettingsRequestPrivate::DeleteBrowserSettingsRequestPrivate(
    const DeleteBrowserSettingsRequestPrivate &other, DeleteBrowserSettingsRequest * const q)
    : WorkSpacesWebRequestPrivate(other, q)
{

}

} // namespace WorkSpacesWeb
} // namespace QtAws
