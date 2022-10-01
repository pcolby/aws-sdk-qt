// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "liststatementsrequest.h"
#include "liststatementsrequest_p.h"
#include "liststatementsresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::ListStatementsRequest
 * \brief The ListStatementsRequest class provides an interface for Glue ListStatements requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::listStatements
 */

/*!
 * Constructs a copy of \a other.
 */
ListStatementsRequest::ListStatementsRequest(const ListStatementsRequest &other)
    : GlueRequest(new ListStatementsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListStatementsRequest object.
 */
ListStatementsRequest::ListStatementsRequest()
    : GlueRequest(new ListStatementsRequestPrivate(GlueRequest::ListStatementsAction, this))
{

}

/*!
 * \reimp
 */
bool ListStatementsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListStatementsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListStatementsRequest::response(QNetworkReply * const reply) const
{
    return new ListStatementsResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::ListStatementsRequestPrivate
 * \brief The ListStatementsRequestPrivate class provides private implementation for ListStatementsRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a ListStatementsRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
ListStatementsRequestPrivate::ListStatementsRequestPrivate(
    const GlueRequest::Action action, ListStatementsRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListStatementsRequest
 * class' copy constructor.
 */
ListStatementsRequestPrivate::ListStatementsRequestPrivate(
    const ListStatementsRequestPrivate &other, ListStatementsRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
