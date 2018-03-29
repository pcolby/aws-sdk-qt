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

#include "getimportresponse.h"
#include "getimportresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuildingService {

/**
 * @class  GetImportResponse
 *
 * @brief  Handles LexModelBuildingService GetImport responses.
 *
 * @see    LexModelBuildingServiceClient::getImport
 */

/**
 * @brief  Constructs a new GetImportResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetImportResponse::GetImportResponse(
        const GetImportRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingServiceResponse(new GetImportResponsePrivate(this), parent)
{
    setRequest(new GetImportRequest(request));
    setReply(reply);
}

const GetImportRequest * GetImportResponse::request() const
{
    Q_D(const GetImportResponse);
    return static_cast<const GetImportRequest *>(d->request);
}

/**
 * @brief  Parse a LexModelBuildingService GetImport response.
 *
 * @param  response  Response to parse.
 */
void GetImportResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetImportResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetImportResponsePrivate
 *
 * @brief  Private implementation for GetImportResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetImportResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetImportResponse instance.
 */
GetImportResponsePrivate::GetImportResponsePrivate(
    GetImportResponse * const q) : LexModelBuildingServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an LexModelBuildingService GetImportResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetImportResponsePrivate::GetImportResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetImportResponse"));
    /// @todo
}

} // namespace LexModelBuildingService
} // namespace QtAws
