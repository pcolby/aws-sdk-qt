// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createusersettingsrequest.h"
#include "createusersettingsrequest_p.h"
#include "createusersettingsresponse.h"
#include "workspaceswebrequest_p.h"

namespace QtAws {
namespace WorkSpacesWeb {

/*!
 * \class QtAws::WorkSpacesWeb::CreateUserSettingsRequest
 * \brief The CreateUserSettingsRequest class provides an interface for WorkSpacesWeb CreateUserSettings requests.
 *
 * \inmodule QtAwsWorkSpacesWeb
 *
 *  WorkSpaces Web is a low cost, fully managed WorkSpace built specifically to facilitate secure, web-based workloads.
 *  WorkSpaces Web makes it easy for customers to safely provide their employees with access to internal websites and SaaS
 *  web applications without the administrative burden of appliances or specialized client software. WorkSpaces Web provides
 *  simple policy tools tailored for user interactions, while offloading common tasks like capacity management, scaling, and
 *  maintaining browser
 *
 * \sa WorkSpacesWebClient::createUserSettings
 */

/*!
 * Constructs a copy of \a other.
 */
CreateUserSettingsRequest::CreateUserSettingsRequest(const CreateUserSettingsRequest &other)
    : WorkSpacesWebRequest(new CreateUserSettingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateUserSettingsRequest object.
 */
CreateUserSettingsRequest::CreateUserSettingsRequest()
    : WorkSpacesWebRequest(new CreateUserSettingsRequestPrivate(WorkSpacesWebRequest::CreateUserSettingsAction, this))
{

}

/*!
 * \reimp
 */
bool CreateUserSettingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateUserSettingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateUserSettingsRequest::response(QNetworkReply * const reply) const
{
    return new CreateUserSettingsResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpacesWeb::CreateUserSettingsRequestPrivate
 * \brief The CreateUserSettingsRequestPrivate class provides private implementation for CreateUserSettingsRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpacesWeb
 */

/*!
 * Constructs a CreateUserSettingsRequestPrivate object for WorkSpacesWeb \a action,
 * with public implementation \a q.
 */
CreateUserSettingsRequestPrivate::CreateUserSettingsRequestPrivate(
    const WorkSpacesWebRequest::Action action, CreateUserSettingsRequest * const q)
    : WorkSpacesWebRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateUserSettingsRequest
 * class' copy constructor.
 */
CreateUserSettingsRequestPrivate::CreateUserSettingsRequestPrivate(
    const CreateUserSettingsRequestPrivate &other, CreateUserSettingsRequest * const q)
    : WorkSpacesWebRequestPrivate(other, q)
{

}

} // namespace WorkSpacesWeb
} // namespace QtAws
