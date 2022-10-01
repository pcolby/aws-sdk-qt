// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listportalsrequest.h"
#include "listportalsrequest_p.h"
#include "listportalsresponse.h"
#include "workspaceswebrequest_p.h"

namespace QtAws {
namespace WorkSpacesWeb {

/*!
 * \class QtAws::WorkSpacesWeb::ListPortalsRequest
 * \brief The ListPortalsRequest class provides an interface for WorkSpacesWeb ListPortals requests.
 *
 * \inmodule QtAwsWorkSpacesWeb
 *
 *  WorkSpaces Web is a low cost, fully managed WorkSpace built specifically to facilitate secure, web-based workloads.
 *  WorkSpaces Web makes it easy for customers to safely provide their employees with access to internal websites and SaaS
 *  web applications without the administrative burden of appliances or specialized client software. WorkSpaces Web provides
 *  simple policy tools tailored for user interactions, while offloading common tasks like capacity management, scaling, and
 *  maintaining browser
 *
 * \sa WorkSpacesWebClient::listPortals
 */

/*!
 * Constructs a copy of \a other.
 */
ListPortalsRequest::ListPortalsRequest(const ListPortalsRequest &other)
    : WorkSpacesWebRequest(new ListPortalsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListPortalsRequest object.
 */
ListPortalsRequest::ListPortalsRequest()
    : WorkSpacesWebRequest(new ListPortalsRequestPrivate(WorkSpacesWebRequest::ListPortalsAction, this))
{

}

/*!
 * \reimp
 */
bool ListPortalsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListPortalsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListPortalsRequest::response(QNetworkReply * const reply) const
{
    return new ListPortalsResponse(*this, reply);
}

/*!
 * \class QtAws::WorkSpacesWeb::ListPortalsRequestPrivate
 * \brief The ListPortalsRequestPrivate class provides private implementation for ListPortalsRequest.
 * \internal
 *
 * \inmodule QtAwsWorkSpacesWeb
 */

/*!
 * Constructs a ListPortalsRequestPrivate object for WorkSpacesWeb \a action,
 * with public implementation \a q.
 */
ListPortalsRequestPrivate::ListPortalsRequestPrivate(
    const WorkSpacesWebRequest::Action action, ListPortalsRequest * const q)
    : WorkSpacesWebRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListPortalsRequest
 * class' copy constructor.
 */
ListPortalsRequestPrivate::ListPortalsRequestPrivate(
    const ListPortalsRequestPrivate &other, ListPortalsRequest * const q)
    : WorkSpacesWebRequestPrivate(other, q)
{

}

} // namespace WorkSpacesWeb
} // namespace QtAws
