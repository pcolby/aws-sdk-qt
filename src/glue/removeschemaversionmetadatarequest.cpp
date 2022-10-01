// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "removeschemaversionmetadatarequest.h"
#include "removeschemaversionmetadatarequest_p.h"
#include "removeschemaversionmetadataresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::RemoveSchemaVersionMetadataRequest
 * \brief The RemoveSchemaVersionMetadataRequest class provides an interface for Glue RemoveSchemaVersionMetadata requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::removeSchemaVersionMetadata
 */

/*!
 * Constructs a copy of \a other.
 */
RemoveSchemaVersionMetadataRequest::RemoveSchemaVersionMetadataRequest(const RemoveSchemaVersionMetadataRequest &other)
    : GlueRequest(new RemoveSchemaVersionMetadataRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a RemoveSchemaVersionMetadataRequest object.
 */
RemoveSchemaVersionMetadataRequest::RemoveSchemaVersionMetadataRequest()
    : GlueRequest(new RemoveSchemaVersionMetadataRequestPrivate(GlueRequest::RemoveSchemaVersionMetadataAction, this))
{

}

/*!
 * \reimp
 */
bool RemoveSchemaVersionMetadataRequest::isValid() const
{
    return false;
}


/*!
 * Returns a RemoveSchemaVersionMetadataResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * RemoveSchemaVersionMetadataRequest::response(QNetworkReply * const reply) const
{
    return new RemoveSchemaVersionMetadataResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::RemoveSchemaVersionMetadataRequestPrivate
 * \brief The RemoveSchemaVersionMetadataRequestPrivate class provides private implementation for RemoveSchemaVersionMetadataRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a RemoveSchemaVersionMetadataRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
RemoveSchemaVersionMetadataRequestPrivate::RemoveSchemaVersionMetadataRequestPrivate(
    const GlueRequest::Action action, RemoveSchemaVersionMetadataRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the RemoveSchemaVersionMetadataRequest
 * class' copy constructor.
 */
RemoveSchemaVersionMetadataRequestPrivate::RemoveSchemaVersionMetadataRequestPrivate(
    const RemoveSchemaVersionMetadataRequestPrivate &other, RemoveSchemaVersionMetadataRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
