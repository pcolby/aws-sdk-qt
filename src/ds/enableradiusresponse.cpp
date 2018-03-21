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

#include "enableradiusresponse.h"
#include "enableradiusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DirectoryService {

/**
 * @class  EnableRadiusResponse
 *
 * @brief  Handles DirectoryService EnableRadius responses.
 *
 * @see    DirectoryServiceClient::enableRadius
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
EnableRadiusResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectoryServiceResponse(new EnableRadiusResponsePrivate(this), parent)
{
    setRequest(new EnableRadiusRequest(request));
    setReply(reply);
}

const EnableRadiusRequest * EnableRadiusResponse::request() const
{
    Q_D(const EnableRadiusResponse);
    return static_cast<const EnableRadiusRequest *>(d->request);
}

/**
 * @brief  Parse a DirectoryService EnableRadius response.
 *
 * @param  response  Response to parse.
 */
void EnableRadiusResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  EnableRadiusResponsePrivate
 *
 * @brief  Private implementation for EnableRadiusResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new EnableRadiusResponsePrivate object.
 *
 * @param  q  Pointer to this object's public EnableRadiusResponse instance.
 */
EnableRadiusResponsePrivate::EnableRadiusResponsePrivate(
    EnableRadiusQueueResponse * const q) : EnableRadiusPrivate(q)
{

}

/**
 * @brief  Parse an DirectoryService EnableRadiusResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void EnableRadiusResponsePrivate::EnableRadiusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("EnableRadiusResponse"));
    /// @todo
}
