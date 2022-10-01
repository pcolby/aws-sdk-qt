// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createbrowsersettingsrequest.h"
#include "createbrowsersettingsrequest_p.h"
#include "createbrowsersettingsresponse.h"
#include "workspaceswebrequest_p.h"

namespace QtAws {
namespace WorkSpacesWeb {

/*!
 * \class QtAws::WorkSpacesWeb::CreateBrowserSettingsRequest
 * \brief The CreateBrowserSettingsRequest class provides an interface for WorkSpacesWeb CreateBrowserSettings requests.
 *
 * \inmodule QtAwsWorkSpacesWeb
 *
 *  WorkSpaces Web is a low cost, fully managed WorkSpace built specifically to facilitate secure, web-based workloads.
 *  WorkSpaces Web makes it easy for customers to safely provide their employees with access to internal websites and SaaS
 *  web applications without the administrative burden of appliances or specialized client software. WorkSpaces Web provides
 *  simple policy tools tailored for user interactions, while offloading common tasks like capacity management, scaling, and
 *  maintaining browser
 *
 * \sa WorkSpacesWebClient::createBrowserSettings
 */

/*!
 * Constructs a copy of \a other.
 */
CreateBrowserSettingsRequest::CreateBrowserSettingsRequest(const CreateBrowserSettingsRequest &other)
    : WorkSpacesWebRequest(new CreateBrowserSettingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreateBrowserSettingsRequest object.
 */
CreateBrowserSettingsRequest::CreateBrowserSettingsRequest()
    : WorkSpacesWebRequest(new CreateBrowserSettingsRequestPrivate(WorkSpacesWebRequest::CreateBrowserSettingsAction, this))
{

}

/*!
 * \reimp
 */
bool CreateBrowserSettingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreateBrowserSettingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreateBrowserSettingsRequest::response(QNetworkReply * const reply) const
{
    return new CreateBrowserSettingsResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpacesWeb::CreateBrowserSettingsRequestPrivate
 * \brief The CreateBrowserSettingsRequestPrivate class provides private implementation for CreateBrowserSettingsRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpacesWeb
 */

/*!
 * Constructs a CreateBrowserSettingsRequestPrivate object for WorkSpacesWeb \a action,
 * with public implementation \a q.
 */
CreateBrowserSettingsRequestPrivate::CreateBrowserSettingsRequestPrivate(
    const WorkSpacesWebRequest::Action action, CreateBrowserSettingsRequest * const q)
    : WorkSpacesWebRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreateBrowserSettingsRequest
 * class' copy constructor.
 */
CreateBrowserSettingsRequestPrivate::CreateBrowserSettingsRequestPrivate(
    const CreateBrowserSettingsRequestPrivate &other, CreateBrowserSettingsRequest * const q)
    : WorkSpacesWebRequestPrivate(other, q)
{

}

} // namespace WorkSpacesWeb
} // namespace QtAws
