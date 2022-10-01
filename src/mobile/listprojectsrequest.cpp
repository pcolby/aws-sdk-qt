// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listprojectsrequest.h"
#include "listprojectsrequest_p.h"
#include "listprojectsresponse.h"
#include "mobilerequest_p.h"

namespace QtAws {
namespace Mobile {

/*!
 * \class QtAws::Mobile::ListProjectsRequest
 * \brief The ListProjectsRequest class provides an interface for Mobile ListProjects requests.
 *
 * \inmodule QtAwsMobile
 *
 *  AWS Mobile Service provides mobile app and website developers with capabilities required to configure AWS resources and
 *  bootstrap their developer desktop projects with the necessary SDKs, constants, tools and samples to make use of those
 *  resources.
 *
 * \sa MobileClient::listProjects
 */

/*!
 * Constructs a copy of \a other.
 */
ListProjectsRequest::ListProjectsRequest(const ListProjectsRequest &other)
    : MobileRequest(new ListProjectsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListProjectsRequest object.
 */
ListProjectsRequest::ListProjectsRequest()
    : MobileRequest(new ListProjectsRequestPrivate(MobileRequest::ListProjectsAction, this))
{

}

/*!
 * \reimp
 */
bool ListProjectsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListProjectsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListProjectsRequest::response(QNetworkReply * const reply) const
{
    return new ListProjectsResponse(*this, reply);
}

/*!
 * \class QtAws::Mobile::ListProjectsRequestPrivate
 * \brief The ListProjectsRequestPrivate class provides private implementation for ListProjectsRequest.
 * \internal
 *
 * \inmodule QtAwsMobile
 */

/*!
 * Constructs a ListProjectsRequestPrivate object for Mobile \a action,
 * with public implementation \a q.
 */
ListProjectsRequestPrivate::ListProjectsRequestPrivate(
    const MobileRequest::Action action, ListProjectsRequest * const q)
    : MobileRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListProjectsRequest
 * class' copy constructor.
 */
ListProjectsRequestPrivate::ListProjectsRequestPrivate(
    const ListProjectsRequestPrivate &other, ListProjectsRequest * const q)
    : MobileRequestPrivate(other, q)
{

}

} // namespace Mobile
} // namespace QtAws
