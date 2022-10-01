// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listschemaversionsrequest.h"
#include "listschemaversionsrequest_p.h"
#include "listschemaversionsresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::ListSchemaVersionsRequest
 * \brief The ListSchemaVersionsRequest class provides an interface for Glue ListSchemaVersions requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::listSchemaVersions
 */

/*!
 * Constructs a copy of \a other.
 */
ListSchemaVersionsRequest::ListSchemaVersionsRequest(const ListSchemaVersionsRequest &other)
    : GlueRequest(new ListSchemaVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a ListSchemaVersionsRequest object.
 */
ListSchemaVersionsRequest::ListSchemaVersionsRequest()
    : GlueRequest(new ListSchemaVersionsRequestPrivate(GlueRequest::ListSchemaVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool ListSchemaVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a ListSchemaVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * ListSchemaVersionsRequest::response(QNetworkReply * const reply) const
{
    return new ListSchemaVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::ListSchemaVersionsRequestPrivate
 * \brief The ListSchemaVersionsRequestPrivate class provides private implementation for ListSchemaVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a ListSchemaVersionsRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
ListSchemaVersionsRequestPrivate::ListSchemaVersionsRequestPrivate(
    const GlueRequest::Action action, ListSchemaVersionsRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the ListSchemaVersionsRequest
 * class' copy constructor.
 */
ListSchemaVersionsRequestPrivate::ListSchemaVersionsRequestPrivate(
    const ListSchemaVersionsRequestPrivate &other, ListSchemaVersionsRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
