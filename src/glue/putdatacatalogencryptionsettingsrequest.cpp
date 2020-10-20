/*
    Copyright 2013-2020 Paul Colby

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
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
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
