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

#include "getdatacatalogencryptionsettingsresponse.h"
#include "getdatacatalogencryptionsettingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::GetDataCatalogEncryptionSettingsResponse
 * \brief The GetDataCatalogEncryptionSettingsResponse class provides an interace for Glue GetDataCatalogEncryptionSettings responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::getDataCatalogEncryptionSettings
 */

/*!
 * Constructs a GetDataCatalogEncryptionSettingsResponse object for \a reply to \a request, with parent \a parent.
 */
GetDataCatalogEncryptionSettingsResponse::GetDataCatalogEncryptionSettingsResponse(
        const GetDataCatalogEncryptionSettingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetDataCatalogEncryptionSettingsResponsePrivate(this), parent)
{
    setRequest(new GetDataCatalogEncryptionSettingsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetDataCatalogEncryptionSettingsRequest * GetDataCatalogEncryptionSettingsResponse::request() const
{
    Q_D(const GetDataCatalogEncryptionSettingsResponse);
    return static_cast<const GetDataCatalogEncryptionSettingsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue GetDataCatalogEncryptionSettings \a response.
 */
void GetDataCatalogEncryptionSettingsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetDataCatalogEncryptionSettingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::GetDataCatalogEncryptionSettingsResponsePrivate
 * \brief The GetDataCatalogEncryptionSettingsResponsePrivate class provides private implementation for GetDataCatalogEncryptionSettingsResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a GetDataCatalogEncryptionSettingsResponsePrivate object with public implementation \a q.
 */
GetDataCatalogEncryptionSettingsResponsePrivate::GetDataCatalogEncryptionSettingsResponsePrivate(
    GetDataCatalogEncryptionSettingsResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue GetDataCatalogEncryptionSettings response element from \a xml.
 */
void GetDataCatalogEncryptionSettingsResponsePrivate::parseGetDataCatalogEncryptionSettingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDataCatalogEncryptionSettingsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
