// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listschemasrequest.h"
#include "listschemasrequest_p.h"
#include "listschemasresponse.h"
#include "redshiftdatarequest_p.h"

namespace QtAws {
namespace RedshiftData {

/*!
 * \class QtAws::RedshiftData::ListSchemasRequest
 * \brief The ListSchemasRequest class provides an interface for RedshiftData ListSchemas requests.
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
 * \sa RedshiftDataClient::listSchemas
 */

/*!
 * Constructs a copy of \a other.
 */
ListSchemasRequest::ListSchemasRequest(const ListSchemasRequest &other)
    : RedshiftDataRequest(new ListSchemasRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListSchemasRequest object.
 */
ListSchemasRequest::ListSchemasRequest()
    : RedshiftDataRequest(new ListSchemasRequestPrivate(RedshiftDataRequest::ListSchemasAction, this))
{

}

/*!
 * \reimp
 */
bool ListSchemasRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListSchemasResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSchemasRequest::response(QNetworkReply * const reply) const
{
    return new ListSchemasResponse(*this, reply);
}

/*!
 * \class QtAws::RedshiftData::ListSchemasRequestPrivate
 * \brief The ListSchemasRequestPrivate class provides private implementation for ListSchemasRequest.
 * \internal
 *
 * \inmodule QtAwsRedshiftData
 */

/*!
 * Constructs a ListSchemasRequestPrivate object for RedshiftData \a action,
 * with public implementation \a q.
 */
ListSchemasRequestPrivate::ListSchemasRequestPrivate(
    const RedshiftDataRequest::Action action, ListSchemasRequest * const q)
    : RedshiftDataRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListSchemasRequest
 * class' copy constructor.
 */
ListSchemasRequestPrivate::ListSchemasRequestPrivate(
    const ListSchemasRequestPrivate &other, ListSchemasRequest * const q)
    : RedshiftDataRequestPrivate(other, q)
{

}

} // namespace RedshiftData
} // namespace QtAws
