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

#include "getcatalogimportstatusresponse.h"
#include "getcatalogimportstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Glue {

/**
 * @class  GetCatalogImportStatusResponse
 *
 * @brief  Handles Glue GetCatalogImportStatus responses.
 *
 * @see    GlueClient::getCatalogImportStatus
 */

/**
 * @brief  Constructs a new GetCatalogImportStatusResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetCatalogImportStatusResponse::GetCatalogImportStatusResponse(
        const GetCatalogImportStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new GetCatalogImportStatusResponsePrivate(this), parent)
{
    setRequest(new GetCatalogImportStatusRequest(request));
    setReply(reply);
}

const GetCatalogImportStatusRequest * GetCatalogImportStatusResponse::request() const
{
    Q_D(const GetCatalogImportStatusResponse);
    return static_cast<const GetCatalogImportStatusRequest *>(d->request);
}

/**
 * @brief  Parse a Glue GetCatalogImportStatus response.
 *
 * @param  response  Response to parse.
 */
void GetCatalogImportStatusResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetCatalogImportStatusResponsePrivate
 *
 * @brief  Private implementation for GetCatalogImportStatusResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetCatalogImportStatusResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetCatalogImportStatusResponse instance.
 */
GetCatalogImportStatusResponsePrivate::GetCatalogImportStatusResponsePrivate(
    GetCatalogImportStatusResponse * const q) : GlueResponsePrivate(q)
{

}

/**
 * @brief  Parse an Glue GetCatalogImportStatusResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetCatalogImportStatusResponsePrivate::GetCatalogImportStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetCatalogImportStatusResponse"));
    /// @todo
}

} // namespace Glue
} // namespace QtAws
