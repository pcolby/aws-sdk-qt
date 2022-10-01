// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getdatacatalogencryptionsettingsrequest.h"
#include "getdatacatalogencryptionsettingsrequest_p.h"
#include "getdatacatalogencryptionsettingsresponse.h"
#include "gluerequest_p.h"

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetDataCatalogEncryptionSettingsRequest
 * \brief The GetDataCatalogEncryptionSettingsRequest class provides an interface for Glue GetDataCatalogEncryptionSettings requests.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::getDataCatalogEncryptionSettings
 */

/*!
 * Constructs a copy of \a other.
 */
GetDataCatalogEncryptionSettingsRequest::GetDataCatalogEncryptionSettingsRequest(const GetDataCatalogEncryptionSettingsRequest &other)
    : GlueRequest(new GetDataCatalogEncryptionSettingsRequestPrivate(*other.d_func(), this))
{

}

/*!
 * Constructs a GetDataCatalogEncryptionSettingsRequest object.
 */
GetDataCatalogEncryptionSettingsRequest::GetDataCatalogEncryptionSettingsRequest()
    : GlueRequest(new GetDataCatalogEncryptionSettingsRequestPrivate(GlueRequest::GetDataCatalogEncryptionSettingsAction, this))
{

}

/*!
 * \reimp
 */
bool GetDataCatalogEncryptionSettingsRequest::isValid() const
{
    return false;
}


/*!
 * Returns a GetDataCatalogEncryptionSettingsResponse object to process \a reply.
 *
 * \sa QtAws::Core::AwsAbstractClient::send
 */
QtAws::Core::AwsAbstractResponse * GetDataCatalogEncryptionSettingsRequest::response(QNetworkReply * const reply) const
{
    return new GetDataCatalogEncryptionSettingsResponse(*this, reply);
}

/*!
 * \class QtAws::Glue::GetDataCatalogEncryptionSettingsRequestPrivate
 * \brief The GetDataCatalogEncryptionSettingsRequestPrivate class provides private implementation for GetDataCatalogEncryptionSettingsRequest.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetDataCatalogEncryptionSettingsRequestPrivate object for Glue \a action,
 * with public implementation \a q.
 */
GetDataCatalogEncryptionSettingsRequestPrivate::GetDataCatalogEncryptionSettingsRequestPrivate(
    const GlueRequest::Action action, GetDataCatalogEncryptionSettingsRequest * const q)
    : GlueRequestPrivate(action, q)
{

}

/*!
 * Constructs a copy of \a other, with public implementation \a q.
 *
 * This copy-like constructor exists for the benefit of the GetDataCatalogEncryptionSettingsRequest
 * class' copy constructor.
 */
GetDataCatalogEncryptionSettingsRequestPrivate::GetDataCatalogEncryptionSettingsRequestPrivate(
    const GetDataCatalogEncryptionSettingsRequestPrivate &other, GetDataCatalogEncryptionSettingsRequest * const q)
    : GlueRequestPrivate(other, q)
{

}

} // namespace Glue
} // namespace QtAws
