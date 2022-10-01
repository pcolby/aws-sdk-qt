// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteschemaversionsrequest.h"
#include "deleteschemaversionsrequest_p.h"
#include "deleteschemaversionsresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::DeleteSchemaVersionsRequest
 * \brief The DeleteSchemaVersionsRequest class provides an interface for Glue DeleteSchemaVersions requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::deleteSchemaVersions
 */

/*!
 * Constructs a copy of \a other.
 */
DeleteSchemaVersionsRequest::DeleteSchemaVersionsRequest(const DeleteSchemaVersionsRequest &other)
    : GlueRequest(new DeleteSchemaVersionsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a DeleteSchemaVersionsRequest object.
 */
DeleteSchemaVersionsRequest::DeleteSchemaVersionsRequest()
    : GlueRequest(new DeleteSchemaVersionsRequestPrivate(GlueRequest::DeleteSchemaVersionsAction, this))
{

}

/*!
 * \reimp
 */
bool DeleteSchemaVersionsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a DeleteSchemaVersionsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * DeleteSchemaVersionsRequest::response(QNetworkReply * const reply) const
{
    return new DeleteSchemaVersionsResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::DeleteSchemaVersionsRequestPrivate
 * \brief The DeleteSchemaVersionsRequestPrivate class provides private implementation for DeleteSchemaVersionsRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a DeleteSchemaVersionsRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
DeleteSchemaVersionsRequestPrivate::DeleteSchemaVersionsRequestPrivate(
    const GlueRequest::Action action, DeleteSchemaVersionsRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the DeleteSchemaVersionsRequest
 * class' copy constructor.
 */
DeleteSchemaVersionsRequestPrivate::DeleteSchemaVersionsRequestPrivate(
    const DeleteSchemaVersionsRequestPrivate &other, DeleteSchemaVersionsRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
