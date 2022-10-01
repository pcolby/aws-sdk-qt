// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listprojectsrequest.h"
#include "listprojectsrequest_p.h"
#include "listprojectsresponse.h"
#include "iot1clickprojectsrequest_p.h"

namespace QtAws {
namespace IoT1ClickProjects {

/*!
 * \class QtAws::IoT1ClickProjects::ListProjectsRequest
 * \brief The ListProjectsRequest class provides an interface for IoT1ClickProjects ListProjects requests.
 *
 * \inmodule QtAwsIoT1ClickProjects
 *
 *  The AWS IoT 1-Click Projects API
 *
 * \sa IoT1ClickProjectsClient::listProjects
 */

/*!
 * Constructs a copy of \a other.
 */
ListProjectsRequest::ListProjectsRequest(const ListProjectsRequest &other)
    : IoT1ClickProjectsRequest(new ListProjectsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListProjectsRequest object.
 */
ListProjectsRequest::ListProjectsRequest()
    : IoT1ClickProjectsRequest(new ListProjectsRequestPrivate(IoT1ClickProjectsRequest::ListProjectsAction, this))
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
 * \class QtAws::IoT1ClickProjects::ListProjectsRequestPrivate
 * \brief The ListProjectsRequestPrivate class provides private implementation for ListProjectsRequest.
 * \internal
 *
 * \inmodule QtAwsIoT1ClickProjects
 */

/*!
 * Constructs a ListProjectsRequestPrivate object for IoT1ClickProjects \a action,
 * with public implementation \a q.
 */
ListProjectsRequestPrivate::ListProjectsRequestPrivate(
    const IoT1ClickProjectsRequest::Action action, ListProjectsRequest * const q)
    : IoT1ClickProjectsRequestPrivate(action, q)
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
    : IoT1ClickProjectsRequestPrivate(other, q)
{

}

} // namespace IoT1ClickProjects
} // namespace QtAws
