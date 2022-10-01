// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listengineversionsrequest.h"
#include "listengineversionsrequest_p.h"
#include "listengineversionsresponse.h"
#include "m2request_p.h"

namespace QtAws {
namespace M2 {

/*!
 * \class QtAws::M2::ListEngineVersionsRequest
 * \brief The ListEngineVersionsRequest class provides an interface for M2 ListEngineVersions requests.
 *
 * \inmodule QtAwsM2
 *
 *  Amazon Web Services Mainframe Modernization provides tools and resources to help you plan and implement migration and
 *  modernization from mainframes to Amazon Web Services managed runtime environments. It provides tools for analyzing
 *  existing mainframe applications, developing or updating mainframe applications using COBOL or PL/I, and implementing an
 *  automated pipeline for continuous integration and continuous delivery (CI/CD) of the
 *
 * \sa M2Client::listEngineVersions
 */

/*!
 * Constructs a copy of \a other.
 */
ListEngineVersionsRequest::ListEngineVersionsRequest(const ListEngineVersionsRequest &other)
    : M2Request(new ListEngineVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListEngineVersionsRequest object.
 */
ListEngineVersionsRequest::ListEngineVersionsRequest()
    : M2Request(new ListEngineVersionsRequestPrivate(M2Request::ListEngineVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListEngineVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListEngineVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListEngineVersionsRequest::response(QNetworkReply * const reply) const
{
    return new ListEngineVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::M2::ListEngineVersionsRequestPrivate
 * \brief The ListEngineVersionsRequestPrivate class provides private implementation for ListEngineVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsM2
 */

/*!
 * Constructs a ListEngineVersionsRequestPrivate object for M2 \a action,
 * with public implementation \a q.
 */
ListEngineVersionsRequestPrivate::ListEngineVersionsRequestPrivate(
    const M2Request::Action action, ListEngineVersionsRequest * const q)
    : M2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListEngineVersionsRequest
 * class' copy constructor.
 */
ListEngineVersionsRequestPrivate::ListEngineVersionsRequestPrivate(
    const ListEngineVersionsRequestPrivate &other, ListEngineVersionsRequest * const q)
    : M2RequestPrivate(other, q)
{

}

} // namespace M2
} // namespace QtAws
