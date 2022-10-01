// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "importcatalogtoglueresponse.h"
#include "importcatalogtoglueresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/*!
 * \class QtAws::Glue::ImportCatalogToGlueResponse
 * \brief The ImportCatalogToGlueResponse class provides an interace for Glue ImportCatalogToGlue responses.
 *
 * \inmodule QtAwsGlue
 *
 *  <fullname>Glue</fullname>
 * 
 *  Defines the public endpoint for the Glue
 *
 * \sa GlueClient::importCatalogToGlue
 */

/*!
 * Constructs a ImportCatalogToGlueResponse object for \a reply to \a request, with parent \a parent.
 */
ImportCatalogToGlueResponse::ImportCatalogToGlueResponse(
        const ImportCatalogToGlueRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new ImportCatalogToGlueResponsePrivate(this), parent)
{
    setRequest(new ImportCatalogToGlueRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ImportCatalogToGlueRequest * ImportCatalogToGlueResponse::request() const
{
    Q_D(const ImportCatalogToGlueResponse);
    return static_cast<const ImportCatalogToGlueRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful Glue ImportCatalogToGlue \a response.
 */
void ImportCatalogToGlueResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ImportCatalogToGlueResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::Glue::ImportCatalogToGlueResponsePrivate
 * \brief The ImportCatalogToGlueResponsePrivate class provides private implementation for ImportCatalogToGlueResponse.
 * \internal
 *
 * \inmodule QtAwsGlue
 */

/*!
 * Constructs a ImportCatalogToGlueResponsePrivate object with public implementation \a q.
 */
ImportCatalogToGlueResponsePrivate::ImportCatalogToGlueResponsePrivate(
    ImportCatalogToGlueResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * Parses a Glue ImportCatalogToGlue response element from \a xml.
 */
void ImportCatalogToGlueResponsePrivate::parseImportCatalogToGlueResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ImportCatalogToGlueResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace Glue
} // namespace QtAws
