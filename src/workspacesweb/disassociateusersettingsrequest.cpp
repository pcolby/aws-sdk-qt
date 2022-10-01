// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "disassociateusersettingsrequest.h"
#include "disassociateusersettingsrequest_p.h"
#include "disassociateusersettingsresponse.h"
#include "workspaceswebrequest_p.h"

namespace QtAws {
namespace WorkSpacesWeb {

/*!
 * \class QtAws::WorkSpacesWeb::DisassociateUserSettingsRequest
 * \brief The DisassociateUserSettingsRequest class provides an interface for WorkSpacesWeb DisassociateUserSettings requests.
 *
 * \inmodule QtAwsWorkSpacesWeb
 *
 *  WorkSpaces Web is a low cost, fully managed WorkSpace built specifically to facilitate secure, web-based workloads.
 *  WorkSpaces Web makes it easy for customers to safely provide their employees with access to internal websites and SaaS
 *  web applications without the administrative burden of appliances or specialized client software. WorkSpaces Web provides
 *  simple policy tools tailored for user interactions, while offloading common tasks like capacity management, scaling, and
 *  maintaining browser
 *
 * \sa WorkSpacesWebClient::disassociateUserSettings
 */

/*!
 * Constructs a copy of \a other.
 */
DisassociateUserSettingsRequest::DisassociateUserSettingsRequest(const DisassociateUserSettingsRequest &other)
    : WorkSpacesWebRequest(new DisassociateUserSettingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DisassociateUserSettingsRequest object.
 */
DisassociateUserSettingsRequest::DisassociateUserSettingsRequest()
    : WorkSpacesWebRequest(new DisassociateUserSettingsRequestPrivate(WorkSpacesWebRequest::DisassociateUserSettingsAction, this))
{

}

/*!
 * \reimp
 */
bool DisassociateUserSettingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DisassociateUserSettingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DisassociateUserSettingsRequest::response(QNetworkReply * const reply) const
{
    return new DisassociateUserSettingsResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpacesWeb::DisassociateUserSettingsRequestPrivate
 * \brief The DisassociateUserSettingsRequestPrivate class provides private implementation for DisassociateUserSettingsRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpacesWeb
 */

/*!
 * Constructs a DisassociateUserSettingsRequestPrivate object for WorkSpacesWeb \a action,
 * with public implementation \a q.
 */
DisassociateUserSettingsRequestPrivate::DisassociateUserSettingsRequestPrivate(
    const WorkSpacesWebRequest::Action action, DisassociateUserSettingsRequest * const q)
    : WorkSpacesWebRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DisassociateUserSettingsRequest
 * class' copy constructor.
 */
DisassociateUserSettingsRequestPrivate::DisassociateUserSettingsRequestPrivate(
    const DisassociateUserSettingsRequestPrivate &other, DisassociateUserSettingsRequest * const q)
    : WorkSpacesWebRequestPrivate(other, q)
{

}

} // namespace WorkSpacesWeb
} // namespace QtAws
