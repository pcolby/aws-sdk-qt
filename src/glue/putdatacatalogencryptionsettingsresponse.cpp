// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
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
