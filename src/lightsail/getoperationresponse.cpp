/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getoperationresponse.h"
#include "getoperationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Lightsail {

/**
 * @class  GetOperationResponse
 *
 * @brief  Handles Lightsail GetOperation responses.
 *
 * @see    LightsailClient::getOperation
 */

/**
 * @brief  Constructs a new GetOperationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetOperationResponse::GetOperationResponse(
        const GetOperationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new GetOperationResponsePrivate(this), parent)
{
    setRequest(new GetOperationRequest(request));
    setReply(reply);
}

const GetOperationRequest * GetOperationResponse::request() const
{
    Q_D(const GetOperationResponse);
    return static_cast<const GetOperationRequest *>(d->request);
}

/**
 * @brief  Parse a Lightsail GetOperation response.
 *
 * @param  response  Response to parse.
 */
void GetOperationResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetOperationResponsePrivate
 *
 * @brief  Private implementation for GetOperationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetOperationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetOperationResponse instance.
 */
GetOperationResponsePrivate::GetOperationResponsePrivate(
    GetOperationQueueResponse * const q) : GetOperationPrivate(q)
{

}

/**
 * @brief  Parse an Lightsail GetOperationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetOperationResponsePrivate::GetOperationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetOperationResponse"));
    /// @todo
}

} // namespace Lightsail
} // namespace AWS
