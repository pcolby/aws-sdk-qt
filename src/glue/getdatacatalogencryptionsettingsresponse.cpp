// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
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
