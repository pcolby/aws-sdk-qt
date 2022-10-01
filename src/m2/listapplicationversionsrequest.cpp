// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listapplicationversionsrequest.h"
#include "listapplicationversionsrequest_p.h"
#include "listapplicationversionsresponse.h"
#include "m2request_p.h"

namespace QtAws {
namespace M2 {

/*!
 * \class QtAws::M2::ListApplicationVersionsRequest
 * \brief The ListApplicationVersionsRequest class provides an interface for M2 ListApplicationVersions requests.
 *
 * \inmodule QtAwsM2
 *
 *  Amazon Web Services Mainframe Modernization provides tools and resources to help you plan and implement migration and
 *  modernization from mainframes to Amazon Web Services managed runtime environments. It provides tools for analyzing
 *  existing mainframe applications, developing or updating mainframe applications using COBOL or PL/I, and implementing an
 *  automated pipeline for continuous integration and continuous delivery (CI/CD) of the
 *
 * \sa M2Client::listApplicationVersions
 */

/*!
 * Constructs a copy of \a other.
 */
ListApplicationVersionsRequest::ListApplicationVersionsRequest(const ListApplicationVersionsRequest &other)
    : M2Request(new ListApplicationVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListApplicationVersionsRequest object.
 */
ListApplicationVersionsRequest::ListApplicationVersionsRequest()
    : M2Request(new ListApplicationVersionsRequestPrivate(M2Request::ListApplicationVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListApplicationVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListApplicationVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListApplicationVersionsRequest::response(QNetworkReply * const reply) const
{
    return new ListApplicationVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::M2::ListApplicationVersionsRequestPrivate
 * \brief The ListApplicationVersionsRequestPrivate class provides private implementation for ListApplicationVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsM2
 */

/*!
 * Constructs a ListApplicationVersionsRequestPrivate object for M2 \a action,
 * with public implementation \a q.
 */
ListApplicationVersionsRequestPrivate::ListApplicationVersionsRequestPrivate(
    const M2Request::Action action, ListApplicationVersionsRequest * const q)
    : M2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListApplicationVersionsRequest
 * class' copy constructor.
 */
ListApplicationVersionsRequestPrivate::ListApplicationVersionsRequestPrivate(
    const ListApplicationVersionsRequestPrivate &other, ListApplicationVersionsRequest * const q)
    : M2RequestPrivate(other, q)
{

}

} // namespace M2
} // namespace QtAws
