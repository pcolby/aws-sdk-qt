// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdatasourcesrequest.h"
#include "listdatasourcesrequest_p.h"
#include "listdatasourcesresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::ListDataSourcesRequest
 * \brief The ListDataSourcesRequest class provides an interface for Kendra ListDataSources requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::listDataSources
 */

/*!
 * Constructs a copy of \a other.
 */
ListDataSourcesRequest::ListDataSourcesRequest(const ListDataSourcesRequest &other)
    : KendraRequest(new ListDataSourcesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDataSourcesRequest object.
 */
ListDataSourcesRequest::ListDataSourcesRequest()
    : KendraRequest(new ListDataSourcesRequestPrivate(KendraRequest::ListDataSourcesAction, this))
{

}

/*!
 * \reimp
 */
bool ListDataSourcesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDataSourcesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDataSourcesRequest::response(QNetworkReply * const reply) const
{
    return new ListDataSourcesResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::ListDataSourcesRequestPrivate
 * \brief The ListDataSourcesRequestPrivate class provides private implementation for ListDataSourcesRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a ListDataSourcesRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
ListDataSourcesRequestPrivate::ListDataSourcesRequestPrivate(
    const KendraRequest::Action action, ListDataSourcesRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDataSourcesRequest
 * class' copy constructor.
 */
ListDataSourcesRequestPrivate::ListDataSourcesRequestPrivate(
    const ListDataSourcesRequestPrivate &other, ListDataSourcesRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
