// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putschemaversionmetadatarequest.h"
#include "putschemaversionmetadatarequest_p.h"
#include "putschemaversionmetadataresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::PutSchemaVersionMetadataRequest
 * \brief The PutSchemaVersionMetadataRequest class provides an interface for Glue PutSchemaVersionMetadata requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::putSchemaVersionMetadata
 */

/*!
 * Constructs a copy of \a other.
 */
PutSchemaVersionMetadataRequest::PutSchemaVersionMetadataRequest(const PutSchemaVersionMetadataRequest &other)
    : GlueRequest(new PutSchemaVersionMetadataRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutSchemaVersionMetadataRequest object.
 */
PutSchemaVersionMetadataRequest::PutSchemaVersionMetadataRequest()
    : GlueRequest(new PutSchemaVersionMetadataRequestPrivate(GlueRequest::PutSchemaVersionMetadataAction, this))
{

}

/*!
 * \reimp
 */
bool PutSchemaVersionMetadataRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutSchemaVersionMetadataResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutSchemaVersionMetadataRequest::response(QNetworkReply * const reply) const
{
    return new PutSchemaVersionMetadataResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::PutSchemaVersionMetadataRequestPrivate
 * \brief The PutSchemaVersionMetadataRequestPrivate class provides private implementation for PutSchemaVersionMetadataRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a PutSchemaVersionMetadataRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
PutSchemaVersionMetadataRequestPrivate::PutSchemaVersionMetadataRequestPrivate(
    const GlueRequest::Action action, PutSchemaVersionMetadataRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutSchemaVersionMetadataRequest
 * class' copy constructor.
 */
PutSchemaVersionMetadataRequestPrivate::PutSchemaVersionMetadataRequestPrivate(
    const PutSchemaVersionMetadataRequestPrivate &other, PutSchemaVersionMetadataRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
