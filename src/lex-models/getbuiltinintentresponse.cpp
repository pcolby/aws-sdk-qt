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

#include "getbuiltinintentresponse.h"
#include "getbuiltinintentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuildingService {

/**
 * @class  GetBuiltinIntentResponse
 *
 * @brief  Handles LexModelBuildingService GetBuiltinIntent responses.
 *
 * @see    LexModelBuildingServiceClient::getBuiltinIntent
 */

/**
 * @brief  Constructs a new GetBuiltinIntentResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetBuiltinIntentResponse::GetBuiltinIntentResponse(
        const GetBuiltinIntentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GetBuiltinIntentResponse(new GetBuiltinIntentResponsePrivate(this), parent)
{
    setRequest(new GetBuiltinIntentRequest(request));
    setReply(reply);
}

const GetBuiltinIntentRequest * GetBuiltinIntentResponse::request() const
{
    Q_D(const GetBuiltinIntentResponse);
    return static_cast<const GetBuiltinIntentRequest *>(d->request);
}

/**
 * @brief  Parse a LexModelBuildingService GetBuiltinIntent response.
 *
 * @param  response  Response to parse.
 */
void GetBuiltinIntentResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetBuiltinIntentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetBuiltinIntentResponsePrivate
 *
 * @brief  Private implementation for GetBuiltinIntentResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetBuiltinIntentResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetBuiltinIntentResponse instance.
 */
GetBuiltinIntentResponsePrivate::GetBuiltinIntentResponsePrivate(
    GetBuiltinIntentResponse * const q) : LexModelBuildingServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an LexModelBuildingService GetBuiltinIntentResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetBuiltinIntentResponsePrivate::parseGetBuiltinIntentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBuiltinIntentResponse"));
    /// @todo
}

} // namespace LexModelBuildingService
} // namespace QtAws
