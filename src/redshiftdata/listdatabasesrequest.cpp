// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listdatabasesrequest.h"
#include "listdatabasesrequest_p.h"
#include "listdatabasesresponse.h"
#include "redshiftdatarequest_p.h"

namespace QtAws {
namespace RedshiftData {

/*!
 * \class QtAws::RedshiftData::ListDatabasesRequest
 * \brief The ListDatabasesRequest class provides an interface for RedshiftData ListDatabases requests.
 *
 * \inmodule QtAwsRedshiftData
 *
 *  You can use the Amazon Redshift Data API to run queries on Amazon Redshift tables. You can run SQL statements, which are
 *  committed if the statement succeeds.
 * 
 *  </p
 * 
 *  For more information about the Amazon Redshift Data API and CLI usage examples, see <a
 *  href="https://docs.aws.amazon.com/redshift/latest/mgmt/data-api.html">Using the Amazon Redshift Data API</a> in the
 *  <i>Amazon Redshift Cluster Management Guide</i>.
 *
 * \sa RedshiftDataClient::listDatabases
 */

/*!
 * Constructs a copy of \a other.
 */
ListDatabasesRequest::ListDatabasesRequest(const ListDatabasesRequest &other)
    : RedshiftDataRequest(new ListDatabasesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListDatabasesRequest object.
 */
ListDatabasesRequest::ListDatabasesRequest()
    : RedshiftDataRequest(new ListDatabasesRequestPrivate(RedshiftDataRequest::ListDatabasesAction, this))
{

}

/*!
 * \reimp
 */
bool ListDatabasesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListDatabasesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListDatabasesRequest::response(QNetworkReply * const reply) const
{
    return new ListDatabasesResponse(*this, reply);
}

/*!
 * \class QtAws::RedshiftData::ListDatabasesRequestPrivate
 * \brief The ListDatabasesRequestPrivate class provides private implementation for ListDatabasesRequest.
 * \internal
 *
 * \inmodule QtAwsRedshiftData
 */

/*!
 * Constructs a ListDatabasesRequestPrivate object for RedshiftData \a action,
 * with public implementation \a q.
 */
ListDatabasesRequestPrivate::ListDatabasesRequestPrivate(
    const RedshiftDataRequest::Action action, ListDatabasesRequest * const q)
    : RedshiftDataRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListDatabasesRequest
 * class' copy constructor.
 */
ListDatabasesRequestPrivate::ListDatabasesRequestPrivate(
    const ListDatabasesRequestPrivate &other, ListDatabasesRequest * const q)
    : RedshiftDataRequestPrivate(other, q)
{

}

} // namespace RedshiftData
} // namespace QtAws
