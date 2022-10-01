/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

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
