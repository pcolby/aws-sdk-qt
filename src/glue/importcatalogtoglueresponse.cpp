/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

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
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
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
    Q_D(ImportCatalogToGlueResponse);
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
    /// @todo
}

} // namespace Glue
} // namespace QtAws
