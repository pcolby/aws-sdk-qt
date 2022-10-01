// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociatebrowsersettingsrequest.h"
#include "disassociatebrowsersettingsrequest_p.h"
#include "disassociatebrowsersettingsresponse.h"
#include "workspaceswebrequest_p.h"

namespace QtAws {
namespace WorkSpacesWeb {

/*!
 * \class QtAws::WorkSpacesWeb::DisassociateBrowserSettingsRequest
 * \brief The DisassociateBrowserSettingsRequest class provides an interface for WorkSpacesWeb DisassociateBrowserSettings requests.
 *
 * \inmodule QtAwsWorkSpacesWeb
 *
 *  WorkSpaces Web is a low cost, fully managed WorkSpace built specifically to facilitate secure, web-based workloads.
 *  WorkSpaces Web makes it easy for customers to safely provide their employees with access to internal websites and SaaS
 *  web applications without the administrative burden of appliances or specialized client software. WorkSpaces Web provides
 *  simple policy tools tailored for user interactions, while offloading common tasks like capacity management, scaling, and
 *  maintaining browser
 *
 * \sa WorkSpacesWebClient::disassociateBrowserSettings
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateBrowserSettingsRequest::DisassociateBrowserSettingsRequest(const DisassociateBrowserSettingsRequest &other)
    : WorkSpacesWebRequest(new DisassociateBrowserSettingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateBrowserSettingsRequest object.
 */
DisassociateBrowserSettingsRequest::DisassociateBrowserSettingsRequest()
    : WorkSpacesWebRequest(new DisassociateBrowserSettingsRequestPrivate(WorkSpacesWebRequest::DisassociateBrowserSettingsAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateBrowserSettingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateBrowserSettingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateBrowserSettingsRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateBrowserSettingsResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpacesWeb::DisassociateBrowserSettingsRequestPrivate
 * \brief The DisassociateBrowserSettingsRequestPrivate class provides private implementation for DisassociateBrowserSettingsRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpacesWeb
 */

/*!
 * Constructs a DisassociateBrowserSettingsRequestPrivate object for WorkSpacesWeb \a action,
 * with public implementation \a q.
 */
DisassociateBrowserSettingsRequestPrivate::DisassociateBrowserSettingsRequestPrivate(
    const WorkSpacesWebRequest::Action action, DisassociateBrowserSettingsRequest * const q)
    : WorkSpacesWebRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateBrowserSettingsRequest
 * class' copy constructor.
 */
DisassociateBrowserSettingsRequestPrivate::DisassociateBrowserSettingsRequestPrivate(
    const DisassociateBrowserSettingsRequestPrivate &other, DisassociateBrowserSettingsRequest * const q)
    : WorkSpacesWebRequestPrivate(other, q)
{

}

} // namespace WorkSpacesWeb
} // namespace QtAws
