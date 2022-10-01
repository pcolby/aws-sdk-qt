// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "queryrequest.h"
#include "queryrequest_p.h"
#include "queryresponse.h"
#include "kendrarequest_p.h"

namespace QtAws {
namespace Kendra {

/*!
 * \class QtAws::Kendra::QueryRequest
 * \brief The QueryRequest class provides an interface for Kendra Query requests.
 *
 * \inmodule QtAwsKendra
 *
 *  Amazon Kendra is a service for indexing large document
 *
 * \sa KendraClient::query
 */

/*!
 * Constructs a copy of \a other.
 */
QueryRequest::QueryRequest(const QueryRequest &other)
    : KendraRequest(new QueryRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a QueryRequest object.
 */
QueryRequest::QueryRequest()
    : KendraRequest(new QueryRequestPrivate(KendraRequest::QueryAction, this))
{

}

/*!
 * \reimp
 */
bool QueryRequest::isValid() const
{
    return false;
}


/*!
 * Returns a QueryResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * QueryRequest::response(QNetworkReply * const reply) const
{
    return new QueryResponse(*this, reply);
}

/*!
 * \class QtAws::Kendra::QueryRequestPrivate
 * \brief The QueryRequestPrivate class provides private implementation for QueryRequest.
 * \internal
 *
 * \inmodule QtAwsKendra
 */

/*!
 * Constructs a QueryRequestPrivate object for Kendra \a action,
 * with public implementation \a q.
 */
QueryRequestPrivate::QueryRequestPrivate(
    const KendraRequest::Action action, QueryRequest * const q)
    : KendraRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the QueryRequest
 * class' copy constructor.
 */
QueryRequestPrivate::QueryRequestPrivate(
    const QueryRequestPrivate &other, QueryRequest * const q)
    : KendraRequestPrivate(other, q)
{

}

} // namespace Kendra
} // namespace QtAws
