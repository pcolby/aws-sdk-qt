// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "associatebrowsersettingsrequest.h"
#include "associatebrowsersettingsrequest_p.h"
#include "associatebrowsersettingsresponse.h"
#include "workspaceswebrequest_p.h"

namespace QtAws {
namespace WorkSpacesWeb {

/*!
 * \class QtAws::WorkSpacesWeb::AssociateBrowserSettingsRequest
 * \brief The AssociateBrowserSettingsRequest class provides an interface for WorkSpacesWeb AssociateBrowserSettings requests.
 *
 * \inmodule QtAwsWorkSpacesWeb
 *
 *  WorkSpaces Web is a low cost, fully managed WorkSpace built specifically to facilitate secure, web-based workloads.
 *  WorkSpaces Web makes it easy for customers to safely provide their employees with access to internal websites and SaaS
 *  web applications without the administrative burden of appliances or specialized client software. WorkSpaces Web provides
 *  simple policy tools tailored for user interactions, while offloading common tasks like capacity management, scaling, and
 *  maintaining browser
 *
 * \sa WorkSpacesWebClient::associateBrowserSettings
 */

/*!
 * Constructs a copy of \a other.
 */
AssociateBrowserSettingsRequest::AssociateBrowserSettingsRequest(const AssociateBrowserSettingsRequest &other)
    : WorkSpacesWebRequest(new AssociateBrowserSettingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a AssociateBrowserSettingsRequest object.
 */
AssociateBrowserSettingsRequest::AssociateBrowserSettingsRequest()
    : WorkSpacesWebRequest(new AssociateBrowserSettingsRequestPrivate(WorkSpacesWebRequest::AssociateBrowserSettingsAction, this))
{

}

/*!
 * \reimp
 */
bool AssociateBrowserSettingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a AssociateBrowserSettingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * AssociateBrowserSettingsRequest::response(QNetworkReply * const reply) const
{
    return new AssociateBrowserSettingsResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpacesWeb::AssociateBrowserSettingsRequestPrivate
 * \brief The AssociateBrowserSettingsRequestPrivate class provides private implementation for AssociateBrowserSettingsRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpacesWeb
 */

/*!
 * Constructs a AssociateBrowserSettingsRequestPrivate object for WorkSpacesWeb \a action,
 * with public implementation \a q.
 */
AssociateBrowserSettingsRequestPrivate::AssociateBrowserSettingsRequestPrivate(
    const WorkSpacesWebRequest::Action action, AssociateBrowserSettingsRequest * const q)
    : WorkSpacesWebRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the AssociateBrowserSettingsRequest
 * class' copy constructor.
 */
AssociateBrowserSettingsRequestPrivate::AssociateBrowserSettingsRequestPrivate(
    const AssociateBrowserSettingsRequestPrivate &other, AssociateBrowserSettingsRequest * const q)
    : WorkSpacesWebRequestPrivate(other, q)
{

}

} // namespace WorkSpacesWeb
} // namespace QtAws
