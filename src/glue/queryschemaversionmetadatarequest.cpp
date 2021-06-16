/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "queryschemaversionmetadatarequest.h"
#include "queryschemaversionmetadatarequest_p.h"
#include "queryschemaversionmetadataresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::QuerySchemaVersionMetadataRequest
 * \brief The QuerySchemaVersionMetadataRequest class provides an interface for Glue QuerySchemaVersionMetadata requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::querySchemaVersionMetadata
 */

/*!
 * Constructs a copy of \a other.
 */
QuerySchemaVersionMetadataRequest::QuerySchemaVersionMetadataRequest(const QuerySchemaVersionMetadataRequest &other)
    : GlueRequest(new QuerySchemaVersionMetadataRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a QuerySchemaVersionMetadataRequest object.
 */
QuerySchemaVersionMetadataRequest::QuerySchemaVersionMetadataRequest()
    : GlueRequest(new QuerySchemaVersionMetadataRequestPrivate(GlueRequest::QuerySchemaVersionMetadataAction, this))
{

}

/*!
 * \reimp
 */
bool QuerySchemaVersionMetadataRequest::isValid() const
{
    return false;
}


/*!
 * Returns a QuerySchemaVersionMetadataResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * QuerySchemaVersionMetadataRequest::response(QNetworkReply * const reply) const
{
    return new QuerySchemaVersionMetadataResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::QuerySchemaVersionMetadataRequestPrivate
 * \brief The QuerySchemaVersionMetadataRequestPrivate class provides private implementation for QuerySchemaVersionMetadataRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a QuerySchemaVersionMetadataRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
QuerySchemaVersionMetadataRequestPrivate::QuerySchemaVersionMetadataRequestPrivate(
    const GlueRequest::Action action, QuerySchemaVersionMetadataRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the QuerySchemaVersionMetadataRequest
 * class' copy constructor.
 */
QuerySchemaVersionMetadataRequestPrivate::QuerySchemaVersionMetadataRequestPrivate(
    const QuerySchemaVersionMetadataRequestPrivate &other, QuerySchemaVersionMetadataRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
