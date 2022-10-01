// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "updateportalrequest.h"
#include "updateportalrequest_p.h"
#include "updateportalresponse.h"
#include "workspaceswebrequest_p.h"

namespace QtAws {
namespace WorkSpacesWeb {

/*!
 * \class QtAws::WorkSpacesWeb::UpdatePortalRequest
 * \brief The UpdatePortalRequest class provides an interface for WorkSpacesWeb UpdatePortal requests.
 *
 * \inmodule QtAwsWorkSpacesWeb
 *
 *  WorkSpaces Web is a low cost, fully managed WorkSpace built specifically to facilitate secure, web-based workloads.
 *  WorkSpaces Web makes it easy for customers to safely provide their employees with access to internal websites and SaaS
 *  web applications without the administrative burden of appliances or specialized client software. WorkSpaces Web provides
 *  simple policy tools tailored for user interactions, while offloading common tasks like capacity management, scaling, and
 *  maintaining browser
 *
 * \sa WorkSpacesWebClient::updatePortal
 */

/*!
 * Constructs a copy of \a other.
 */
UpdatePortalRequest::UpdatePortalRequest(const UpdatePortalRequest &other)
    : WorkSpacesWebRequest(new UpdatePortalRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a UpdatePortalRequest object.
 */
UpdatePortalRequest::UpdatePortalRequest()
    : WorkSpacesWebRequest(new UpdatePortalRequestPrivate(WorkSpacesWebRequest::UpdatePortalAction, this))
{

}

/*!
 * \reimp
 */
bool UpdatePortalRequest::isValid() const
{
    return false;
}


/*!
 * Returns a UpdatePortalResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * UpdatePortalRequest::response(QNetworkReply * const reply) const
{
    return new UpdatePortalResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpacesWeb::UpdatePortalRequestPrivate
 * \brief The UpdatePortalRequestPrivate class provides private implementation for UpdatePortalRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpacesWeb
 */

/*!
 * Constructs a UpdatePortalRequestPrivate object for WorkSpacesWeb \a action,
 * with public implementation \a q.
 */
UpdatePortalRequestPrivate::UpdatePortalRequestPrivate(
    const WorkSpacesWebRequest::Action action, UpdatePortalRequest * const q)
    : WorkSpacesWebRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the UpdatePortalRequest
 * class' copy constructor.
 */
UpdatePortalRequestPrivate::UpdatePortalRequestPrivate(
    const UpdatePortalRequestPrivate &other, UpdatePortalRequest * const q)
    : WorkSpacesWebRequestPrivate(other, q)
{

}

} // namespace WorkSpacesWeb
} // namespace QtAws
