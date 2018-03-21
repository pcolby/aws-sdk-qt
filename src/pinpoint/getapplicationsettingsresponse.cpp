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

#include "getapplicationsettingsresponse.h"
#include "getapplicationsettingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Pinpoint {

/**
 * @class  GetApplicationSettingsResponse
 *
 * @brief  Handles Pinpoint GetApplicationSettings responses.
 *
 * @see    PinpointClient::getApplicationSettings
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetApplicationSettingsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : PinpointResponse(new GetApplicationSettingsResponsePrivate(this), parent)
{
    setRequest(new GetApplicationSettingsRequest(request));
    setReply(reply);
}

const GetApplicationSettingsRequest * GetApplicationSettingsResponse::request() const
{
    Q_D(const GetApplicationSettingsResponse);
    return static_cast<const GetApplicationSettingsRequest *>(d->request);
}

/**
 * @brief  Parse a Pinpoint GetApplicationSettings response.
 *
 * @param  response  Response to parse.
 */
void GetApplicationSettingsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetApplicationSettingsResponsePrivate
 *
 * @brief  Private implementation for GetApplicationSettingsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetApplicationSettingsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetApplicationSettingsResponse instance.
 */
GetApplicationSettingsResponsePrivate::GetApplicationSettingsResponsePrivate(
    GetApplicationSettingsQueueResponse * const q) : GetApplicationSettingsPrivate(q)
{

}

/**
 * @brief  Parse an Pinpoint GetApplicationSettingsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetApplicationSettingsResponsePrivate::GetApplicationSettingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetApplicationSettingsResponse"));
    /// @todo
}
