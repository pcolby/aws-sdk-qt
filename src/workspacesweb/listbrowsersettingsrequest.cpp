// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listbrowsersettingsrequest.h"
#include "listbrowsersettingsrequest_p.h"
#include "listbrowsersettingsresponse.h"
#include "workspaceswebrequest_p.h"

namespace QtAws {
namespace WorkSpacesWeb {

/*!
 * \class QtAws::WorkSpacesWeb::ListBrowserSettingsRequest
 * \brief The ListBrowserSettingsRequest class provides an interface for WorkSpacesWeb ListBrowserSettings requests.
 *
 * \inmodule QtAwsWorkSpacesWeb
 *
 *  WorkSpaces Web is a low cost, fully managed WorkSpace built specifically to facilitate secure, web-based workloads.
 *  WorkSpaces Web makes it easy for customers to safely provide their employees with access to internal websites and SaaS
 *  web applications without the administrative burden of appliances or specialized client software. WorkSpaces Web provides
 *  simple policy tools tailored for user interactions, while offloading common tasks like capacity management, scaling, and
 *  maintaining browser
 *
 * \sa WorkSpacesWebClient::listBrowserSettings
 */

/*!
 * Constructs a copy of \a other.
 */
ListBrowserSettingsRequest::ListBrowserSettingsRequest(const ListBrowserSettingsRequest &other)
    : WorkSpacesWebRequest(new ListBrowserSettingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListBrowserSettingsRequest object.
 */
ListBrowserSettingsRequest::ListBrowserSettingsRequest()
    : WorkSpacesWebRequest(new ListBrowserSettingsRequestPrivate(WorkSpacesWebRequest::ListBrowserSettingsAction, this))
{

}

/*!
 * \reimp
 */
bool ListBrowserSettingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListBrowserSettingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListBrowserSettingsRequest::response(QNetworkReply * const reply) const
{
    return new ListBrowserSettingsResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpacesWeb::ListBrowserSettingsRequestPrivate
 * \brief The ListBrowserSettingsRequestPrivate class provides private implementation for ListBrowserSettingsRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpacesWeb
 */

/*!
 * Constructs a ListBrowserSettingsRequestPrivate object for WorkSpacesWeb \a action,
 * with public implementation \a q.
 */
ListBrowserSettingsRequestPrivate::ListBrowserSettingsRequestPrivate(
    const WorkSpacesWebRequest::Action action, ListBrowserSettingsRequest * const q)
    : WorkSpacesWebRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListBrowserSettingsRequest
 * class' copy constructor.
 */
ListBrowserSettingsRequestPrivate::ListBrowserSettingsRequestPrivate(
    const ListBrowserSettingsRequestPrivate &other, ListBrowserSettingsRequest * const q)
    : WorkSpacesWebRequestPrivate(other, q)
{

}

} // namespace WorkSpacesWeb
} // namespace QtAws
