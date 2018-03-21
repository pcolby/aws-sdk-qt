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

#include "getappresponse.h"
#include "getappresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Pinpoint {

/**
 * @class  GetAppResponse
 *
 * @brief  Handles Pinpoint GetApp responses.
 *
 * @see    PinpointClient::getApp
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetAppResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetAppResponsePrivate(this), parent)
{
    setRequest(new GetAppRequest(request));
    setReply(reply);
}

const GetAppRequest * GetAppResponse::request() const
{
    Q_D(const GetAppResponse);
    return static_cast<const GetAppRequest *>(d->request);
}

/**
 * @brief  Parse a Pinpoint GetApp response.
 *
 * @param  response  Response to parse.
 */
void GetAppResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetAppResponsePrivate
 *
 * @brief  Private implementation for GetAppResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetAppResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetAppResponse instance.
 */
GetAppResponsePrivate::GetAppResponsePrivate(
    GetAppQueueResponse * const q) : GetAppPrivate(q)
{

}

/**
 * @brief  Parse an Pinpoint GetAppResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetAppResponsePrivate::GetAppResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAppResponse"));
    /// @todo
}
