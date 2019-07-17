/*
    Copyright 2013-2019 Paul Colby

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

#include "putdatacatalogencryptionsettingsresponse.h"
#include "putdatacatalogencryptionsettingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::PutDataCatalogEncryptionSettingsResponse
 * \brief The PutDataCatalogEncryptionSettingsResponse class provides an interace for Glue PutDataCatalogEncryptionSettings responses.
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
 * Constructs a PutDataCatalogEncryptionSettingsResponse object for \a reply to \a request, with parent \a parent.
 */
PutDataCatalogEncryptionSettingsResponse::PutDataCatalogEncryptionSettingsResponse(
        const PutDataCatalogEncryptionSettingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new PutDataCatalogEncryptionSettingsResponsePrivate(this), parent)
{
    setRequest(new PutDataCatalogEncryptionSettingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const PutDataCatalogEncryptionSettingsRequest * PutDataCatalogEncryptionSettingsResponse::request() const
{
    Q_D(const PutDataCatalogEncryptionSettingsResponse);
    return static_cast<const PutDataCatalogEncryptionSettingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue PutDataCatalogEncryptionSettings \a response.
 */
void PutDataCatalogEncryptionSettingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutDataCatalogEncryptionSettingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::PutDataCatalogEncryptionSettingsResponsePrivate
 * \brief The PutDataCatalogEncryptionSettingsResponsePrivate class provides private implementation for PutDataCatalogEncryptionSettingsResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a PutDataCatalogEncryptionSettingsResponsePrivate object with public implementation \a q.
 */
PutDataCatalogEncryptionSettingsResponsePrivate::PutDataCatalogEncryptionSettingsResponsePrivate(
    PutDataCatalogEncryptionSettingsResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue PutDataCatalogEncryptionSettings response element from \a xml.
 */
void PutDataCatalogEncryptionSettingsResponsePrivate::parsePutDataCatalogEncryptionSettingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutDataCatalogEncryptionSettingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
