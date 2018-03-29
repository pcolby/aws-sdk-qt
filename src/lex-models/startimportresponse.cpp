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

#include "startimportresponse.h"
#include "startimportresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuildingService {

/**
 * @class  StartImportResponse
 *
 * @brief  Handles LexModelBuildingService StartImport responses.
 *
 * @see    LexModelBuildingServiceClient::startImport
 */

/**
 * @brief  Constructs a new StartImportResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartImportResponse::StartImportResponse(
        const StartImportRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingServiceResponse(new StartImportResponsePrivate(this), parent)
{
    setRequest(new StartImportRequest(request));
    setReply(reply);
}

const StartImportRequest * StartImportResponse::request() const
{
    Q_D(const StartImportResponse);
    return static_cast<const StartImportRequest *>(d->request);
}

/**
 * @brief  Parse a LexModelBuildingService StartImport response.
 *
 * @param  response  Response to parse.
 */
void StartImportResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StartImportResponsePrivate
 *
 * @brief  Private implementation for StartImportResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartImportResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StartImportResponse instance.
 */
StartImportResponsePrivate::StartImportResponsePrivate(
    StartImportResponse * const q) : LexModelBuildingServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an LexModelBuildingService StartImportResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StartImportResponsePrivate::StartImportResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartImportResponse"));
    /// @todo
}

} // namespace LexModelBuildingService
} // namespace QtAws
