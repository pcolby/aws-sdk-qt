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

#include "getexportresponse.h"
#include "getexportresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuildingService {

/**
 * @class  GetExportResponse
 *
 * @brief  Handles LexModelBuildingService GetExport responses.
 *
 * @see    LexModelBuildingServiceClient::getExport
 */

/**
 * @brief  Constructs a new GetExportResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetExportResponse::GetExportResponse(
        const GetExportRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingServiceResponse(new GetExportResponsePrivate(this), parent)
{
    setRequest(new GetExportRequest(request));
    setReply(reply);
}

const GetExportRequest * GetExportResponse::request() const
{
    Q_D(const GetExportResponse);
    return static_cast<const GetExportRequest *>(d->request);
}

/**
 * @brief  Parse a LexModelBuildingService GetExport response.
 *
 * @param  response  Response to parse.
 */
void GetExportResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetExportResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetExportResponsePrivate
 *
 * @brief  Private implementation for GetExportResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetExportResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetExportResponse instance.
 */
GetExportResponsePrivate::GetExportResponsePrivate(
    GetExportResponse * const q) : LexModelBuildingServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an LexModelBuildingService GetExportResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetExportResponsePrivate::GetExportResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetExportResponse"));
    /// @todo
}

} // namespace LexModelBuildingService
} // namespace QtAws
