// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "searchtablesrequest.h"
#include "searchtablesrequest_p.h"
#include "searchtablesresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::SearchTablesRequest
 * \brief The SearchTablesRequest class provides an interface for Glue SearchTables requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::searchTables
 */

/*!
 * Constructs a copy of \a other.
 */
SearchTablesRequest::SearchTablesRequest(const SearchTablesRequest &other)
    : GlueRequest(new SearchTablesRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a SearchTablesRequest object.
 */
SearchTablesRequest::SearchTablesRequest()
    : GlueRequest(new SearchTablesRequestPrivate(GlueRequest::SearchTablesAction, this))
{

}

/*!
 * \reimp
 */
bool SearchTablesRequest::isValid() const
{
    return false;
}


/*!
 * Returns a SearchTablesResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * SearchTablesRequest::response(QNetworkReply * const reply) const
{
    return new SearchTablesResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::SearchTablesRequestPrivate
 * \brief The SearchTablesRequestPrivate class provides private implementation for SearchTablesRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a SearchTablesRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
SearchTablesRequestPrivate::SearchTablesRequestPrivate(
    const GlueRequest::Action action, SearchTablesRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the SearchTablesRequest
 * class' copy constructor.
 */
SearchTablesRequestPrivate::SearchTablesRequestPrivate(
    const SearchTablesRequestPrivate &other, SearchTablesRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
