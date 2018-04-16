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
 *
 * \brief The ImportCatalogToGlueResponse class encapsulates Glue ImportCatalogToGlue responses.
 *
 * \ingroup Glue
 *
 *  <fullname>AWS Glue</fullname>
 * 
 *  Defines the public endpoint for the AWS Glue
 *
 * \sa GlueClient::importCatalogToGlue
 */

/*!
 * @brief  Constructs a new ImportCatalogToGlueResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
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

const ImportCatalogToGlueRequest * ImportCatalogToGlueResponse::request() const
{
    Q_D(const ImportCatalogToGlueResponse);
    return static_cast<const ImportCatalogToGlueRequest *>(d->request);
}

/*!
 * @brief  Parse a Glue ImportCatalogToGlue response.
 *
 * @param  response  Response to parse.
 */
void ImportCatalogToGlueResponse::parseSuccess(QIODevice &response)
{
    Q_D(ImportCatalogToGlueResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ImportCatalogToGlueResponsePrivate
 *
 * \brief Private implementation for ImportCatalogToGlueResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ImportCatalogToGlueResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ImportCatalogToGlueResponse instance.
 */
ImportCatalogToGlueResponsePrivate::ImportCatalogToGlueResponsePrivate(
    ImportCatalogToGlueResponse * const q) : GlueResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Glue ImportCatalogToGlueResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ImportCatalogToGlueResponsePrivate::parseImportCatalogToGlueResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ImportCatalogToGlueResponse"));
    /// @todo
}

} // namespace Glue
} // namespace QtAws
