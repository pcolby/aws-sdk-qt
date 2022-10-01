// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdatasetsrequest.h"
#include "listdatasetsrequest_p.h"
#include "listdatasetsresponse.h"
#include "m2request_p.h"

namespace QtAws {
namespace M2 {

/*!
 * \class QtAws::M2::ListDataSetsRequest
 * \brief The ListDataSetsRequest class provides an interface for M2 ListDataSets requests.
 *
 * \inmodule QtAwsM2
 *
 *  Amazon Web Services Mainframe Modernization provides tools and resources to help you plan and implement migration and
 *  modernization from mainframes to Amazon Web Services managed runtime environments. It provides tools for analyzing
 *  existing mainframe applications, developing or updating mainframe applications using COBOL or PL/I, and implementing an
 *  automated pipeline for continuous integration and continuous delivery (CI/CD) of the
 *
 * \sa M2Client::listDataSets
 */

/*!
 * Constructs a copy of \a other.
 */
ListDataSetsRequest::ListDataSetsRequest(const ListDataSetsRequest &other)
    : M2Request(new ListDataSetsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDataSetsRequest object.
 */
ListDataSetsRequest::ListDataSetsRequest()
    : M2Request(new ListDataSetsRequestPrivate(M2Request::ListDataSetsAction, this))
{

}

/*!
 * \reimp
 */
bool ListDataSetsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDataSetsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDataSetsRequest::response(QNetworkReply * const reply) const
{
    return new ListDataSetsResponse(*this, reply);
}

/*!
 * \class QtAws::M2::ListDataSetsRequestPrivate
 * \brief The ListDataSetsRequestPrivate class provides private implementation for ListDataSetsRequest.
 * \internal
 *
 * \inmodule QtAwsM2
 */

/*!
 * Constructs a ListDataSetsRequestPrivate object for M2 \a action,
 * with public implementation \a q.
 */
ListDataSetsRequestPrivate::ListDataSetsRequestPrivate(
    const M2Request::Action action, ListDataSetsRequest * const q)
    : M2RequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDataSetsRequest
 * class' copy constructor.
 */
ListDataSetsRequestPrivate::ListDataSetsRequestPrivate(
    const ListDataSetsRequestPrivate &other, ListDataSetsRequest * const q)
    : M2RequestPrivate(other, q)
{

}

} // namespace M2
} // namespace QtAws
