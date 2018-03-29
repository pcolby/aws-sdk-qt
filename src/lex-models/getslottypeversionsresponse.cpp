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

#include "getslottypeversionsresponse.h"
#include "getslottypeversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuildingService {

/**
 * @class  GetSlotTypeVersionsResponse
 *
 * @brief  Handles LexModelBuildingService GetSlotTypeVersions responses.
 *
 * @see    LexModelBuildingServiceClient::getSlotTypeVersions
 */

/**
 * @brief  Constructs a new GetSlotTypeVersionsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetSlotTypeVersionsResponse::GetSlotTypeVersionsResponse(
        const GetSlotTypeVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingServiceResponse(new GetSlotTypeVersionsResponsePrivate(this), parent)
{
    setRequest(new GetSlotTypeVersionsRequest(request));
    setReply(reply);
}

const GetSlotTypeVersionsRequest * GetSlotTypeVersionsResponse::request() const
{
    Q_D(const GetSlotTypeVersionsResponse);
    return static_cast<const GetSlotTypeVersionsRequest *>(d->request);
}

/**
 * @brief  Parse a LexModelBuildingService GetSlotTypeVersions response.
 *
 * @param  response  Response to parse.
 */
void GetSlotTypeVersionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetSlotTypeVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetSlotTypeVersionsResponsePrivate
 *
 * @brief  Private implementation for GetSlotTypeVersionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetSlotTypeVersionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetSlotTypeVersionsResponse instance.
 */
GetSlotTypeVersionsResponsePrivate::GetSlotTypeVersionsResponsePrivate(
    GetSlotTypeVersionsResponse * const q) : LexModelBuildingServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an LexModelBuildingService GetSlotTypeVersionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetSlotTypeVersionsResponsePrivate::GetSlotTypeVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetSlotTypeVersionsResponse"));
    /// @todo
}

} // namespace LexModelBuildingService
} // namespace QtAws
