// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listsessionsrequest.h"
#include "listsessionsrequest_p.h"
#include "listsessionsresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::ListSessionsRequest
 * \brief The ListSessionsRequest class provides an interface for Glue ListSessions requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::listSessions
 */

/*!
 * Constructs a copy of \a other.
 */
ListSessionsRequest::ListSessionsRequest(const ListSessionsRequest &other)
    : GlueRequest(new ListSessionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListSessionsRequest object.
 */
ListSessionsRequest::ListSessionsRequest()
    : GlueRequest(new ListSessionsRequestPrivate(GlueRequest::ListSessionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListSessionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListSessionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSessionsRequest::response(QNetworkReply * const reply) const
{
    return new ListSessionsResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::ListSessionsRequestPrivate
 * \brief The ListSessionsRequestPrivate class provides private implementation for ListSessionsRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a ListSessionsRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
ListSessionsRequestPrivate::ListSessionsRequestPrivate(
    const GlueRequest::Action action, ListSessionsRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListSessionsRequest
 * class' copy constructor.
 */
ListSessionsRequestPrivate::ListSessionsRequestPrivate(
    const ListSessionsRequestPrivate &other, ListSessionsRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
