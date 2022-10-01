// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "putdatacatalogencryptionsettingsrequest.h"
#include "putdatacatalogencryptionsettingsrequest_p.h"
#include "putdatacatalogencryptionsettingsresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::PutDataCatalogEncryptionSettingsRequest
 * \brief The PutDataCatalogEncryptionSettingsRequest class provides an interface for Glue PutDataCatalogEncryptionSettings requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::putDataCatalogEncryptionSettings
 */

/*!
 * Constructs a copy of \a other.
 */
PutDataCatalogEncryptionSettingsRequest::PutDataCatalogEncryptionSettingsRequest(const PutDataCatalogEncryptionSettingsRequest &other)
    : GlueRequest(new PutDataCatalogEncryptionSettingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a PutDataCatalogEncryptionSettingsRequest object.
 */
PutDataCatalogEncryptionSettingsRequest::PutDataCatalogEncryptionSettingsRequest()
    : GlueRequest(new PutDataCatalogEncryptionSettingsRequestPrivate(GlueRequest::PutDataCatalogEncryptionSettingsAction, this))
{

}

/*!
 * \reimp
 */
bool PutDataCatalogEncryptionSettingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a PutDataCatalogEncryptionSettingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * PutDataCatalogEncryptionSettingsRequest::response(QNetworkReply * const reply) const
{
    return new PutDataCatalogEncryptionSettingsResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::PutDataCatalogEncryptionSettingsRequestPrivate
 * \brief The PutDataCatalogEncryptionSettingsRequestPrivate class provides private implementation for PutDataCatalogEncryptionSettingsRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a PutDataCatalogEncryptionSettingsRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
PutDataCatalogEncryptionSettingsRequestPrivate::PutDataCatalogEncryptionSettingsRequestPrivate(
    const GlueRequest::Action action, PutDataCatalogEncryptionSettingsRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the PutDataCatalogEncryptionSettingsRequest
 * class' copy constructor.
 */
PutDataCatalogEncryptionSettingsRequestPrivate::PutDataCatalogEncryptionSettingsRequestPrivate(
    const PutDataCatalogEncryptionSettingsRequestPrivate &other, PutDataCatalogEncryptionSettingsRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
