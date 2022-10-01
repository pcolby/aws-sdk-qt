// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listtablesrequest.h"
#include "listtablesrequest_p.h"
#include "listtablesresponse.h"
#include "redshiftdatarequest_p.h"

namespace QtAws {
namespace RedshiftData {

/*!
 * \class QtAws::RedshiftData::ListTablesRequest
 * \brief The ListTablesRequest class provides an interface for RedshiftData ListTables requests.
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
 * \sa RedshiftDataClient::listTables
 */

/*!
 * Constructs a copy of \a other.
 */
ListTablesRequest::ListTablesRequest(const ListTablesRequest &other)
    : RedshiftDataRequest(new ListTablesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListTablesRequest object.
 */
ListTablesRequest::ListTablesRequest()
    : RedshiftDataRequest(new ListTablesRequestPrivate(RedshiftDataRequest::ListTablesAction, this))
{

}

/*!
 * \reimp
 */
bool ListTablesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListTablesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListTablesRequest::response(QNetworkReply * const reply) const
{
    return new ListTablesResponse(*this, reply);
}

/*!
 * \class QtAws::RedshiftData::ListTablesRequestPrivate
 * \brief The ListTablesRequestPrivate class provides private implementation for ListTablesRequest.
 * \internal
 *
 * \inmodule QtAwsRedshiftData
 */

/*!
 * Constructs a ListTablesRequestPrivate object for RedshiftData \a action,
 * with public implementation \a q.
 */
ListTablesRequestPrivate::ListTablesRequestPrivate(
    const RedshiftDataRequest::Action action, ListTablesRequest * const q)
    : RedshiftDataRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListTablesRequest
 * class' copy constructor.
 */
ListTablesRequestPrivate::ListTablesRequestPrivate(
    const ListTablesRequestPrivate &other, ListTablesRequest * const q)
    : RedshiftDataRequestPrivate(other, q)
{

}

} // namespace RedshiftData
} // namespace QtAws
