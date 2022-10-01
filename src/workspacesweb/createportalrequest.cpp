// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "createportalrequest.h"
#include "createportalrequest_p.h"
#include "createportalresponse.h"
#include "workspaceswebrequest_p.h"

namespace QtAws {
namespace WorkSpacesWeb {

/*!
 * \class QtAws::WorkSpacesWeb::CreatePortalRequest
 * \brief The CreatePortalRequest class provides an interface for WorkSpacesWeb CreatePortal requests.
 *
 * \inmodule QtAwsWorkSpacesWeb
 *
 *  WorkSpaces Web is a low cost, fully managed WorkSpace built specifically to facilitate secure, web-based workloads.
 *  WorkSpaces Web makes it easy for customers to safely provide their employees with access to internal websites and SaaS
 *  web applications without the administrative burden of appliances or specialized client software. WorkSpaces Web provides
 *  simple policy tools tailored for user interactions, while offloading common tasks like capacity management, scaling, and
 *  maintaining browser
 *
 * \sa WorkSpacesWebClient::createPortal
 */

/*!
 * Constructs a copy of \a other.
 */
CreatePortalRequest::CreatePortalRequest(const CreatePortalRequest &other)
    : WorkSpacesWebRequest(new CreatePortalRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a CreatePortalRequest object.
 */
CreatePortalRequest::CreatePortalRequest()
    : WorkSpacesWebRequest(new CreatePortalRequestPrivate(WorkSpacesWebRequest::CreatePortalAction, this))
{

}

/*!
 * \reimp
 */
bool CreatePortalRequest::isValid() const
{
    return false;
}


/*!
 * Returns a CreatePortalResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * CreatePortalRequest::response(QNetworkReply * const reply) const
{
    return new CreatePortalResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpacesWeb::CreatePortalRequestPrivate
 * \brief The CreatePortalRequestPrivate class provides private implementation for CreatePortalRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpacesWeb
 */

/*!
 * Constructs a CreatePortalRequestPrivate object for WorkSpacesWeb \a action,
 * with public implementation \a q.
 */
CreatePortalRequestPrivate::CreatePortalRequestPrivate(
    const WorkSpacesWebRequest::Action action, CreatePortalRequest * const q)
    : WorkSpacesWebRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the CreatePortalRequest
 * class' copy constructor.
 */
CreatePortalRequestPrivate::CreatePortalRequestPrivate(
    const CreatePortalRequestPrivate &other, CreatePortalRequest * const q)
    : WorkSpacesWebRequestPrivate(other, q)
{

}

} // namespace WorkSpacesWeb
} // namespace QtAws
