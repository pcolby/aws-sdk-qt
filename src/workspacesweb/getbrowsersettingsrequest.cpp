// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getbrowsersettingsrequest.h"
#include "getbrowsersettingsrequest_p.h"
#include "getbrowsersettingsresponse.h"
#include "workspaceswebrequest_p.h"

namespace QtAws {
namespace WorkSpacesWeb {

/*!
 * \class QtAws::WorkSpacesWeb::GetBrowserSettingsRequest
 * \brief The GetBrowserSettingsRequest class provides an interface for WorkSpacesWeb GetBrowserSettings requests.
 *
 * \inmodule QtAwsWorkSpacesWeb
 *
 *  WorkSpaces Web is a low cost, fully managed WorkSpace built specifically to facilitate secure, web-based workloads.
 *  WorkSpaces Web makes it easy for customers to safely provide their employees with access to internal websites and SaaS
 *  web applications without the administrative burden of appliances or specialized client software. WorkSpaces Web provides
 *  simple policy tools tailored for user interactions, while offloading common tasks like capacity management, scaling, and
 *  maintaining browser
 *
 * \sa WorkSpacesWebClient::getBrowserSettings
 */

/*!
 * Constructs a copy of \a other.
 */
GetBrowserSettingsRequest::GetBrowserSettingsRequest(const GetBrowserSettingsRequest &other)
    : WorkSpacesWebRequest(new GetBrowserSettingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetBrowserSettingsRequest object.
 */
GetBrowserSettingsRequest::GetBrowserSettingsRequest()
    : WorkSpacesWebRequest(new GetBrowserSettingsRequestPrivate(WorkSpacesWebRequest::GetBrowserSettingsAction, this))
{

}

/*!
 * \reimp
 */
bool GetBrowserSettingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetBrowserSettingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetBrowserSettingsRequest::response(QNetworkReply * const reply) const
{
    return new GetBrowserSettingsResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpacesWeb::GetBrowserSettingsRequestPrivate
 * \brief The GetBrowserSettingsRequestPrivate class provides private implementation for GetBrowserSettingsRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpacesWeb
 */

/*!
 * Constructs a GetBrowserSettingsRequestPrivate object for WorkSpacesWeb \a action,
 * with public implementation \a q.
 */
GetBrowserSettingsRequestPrivate::GetBrowserSettingsRequestPrivate(
    const WorkSpacesWebRequest::Action action, GetBrowserSettingsRequest * const q)
    : WorkSpacesWebRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetBrowserSettingsRequest
 * class' copy constructor.
 */
GetBrowserSettingsRequestPrivate::GetBrowserSettingsRequestPrivate(
    const GetBrowserSettingsRequestPrivate &other, GetBrowserSettingsRequest * const q)
    : WorkSpacesWebRequestPrivate(other, q)
{

}

} // namespace WorkSpacesWeb
} // namespace QtAws
