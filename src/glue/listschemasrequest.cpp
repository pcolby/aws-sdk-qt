// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listschemasrequest.h"
#include "listschemasrequest_p.h"
#include "listschemasresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::ListSchemasRequest
 * \brief The ListSchemasRequest class provides an interface for Glue ListSchemas requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::listSchemas
 */

/*!
 * Constructs a copy of \a other.
 */
ListSchemasRequest::ListSchemasRequest(const ListSchemasRequest &other)
    : GlueRequest(new ListSchemasRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListSchemasRequest object.
 */
ListSchemasRequest::ListSchemasRequest()
    : GlueRequest(new ListSchemasRequestPrivate(GlueRequest::ListSchemasAction, this))
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
 * \class QtAws::Glue::ListSchemasRequestPrivate
 * \brief The ListSchemasRequestPrivate class provides private implementation for ListSchemasRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a ListSchemasRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
ListSchemasRequestPrivate::ListSchemasRequestPrivate(
    const GlueRequest::Action action, ListSchemasRequest * const q)
    : GlueRequestPrivate(action, q)
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
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
