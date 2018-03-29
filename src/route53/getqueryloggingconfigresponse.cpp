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

#include "getqueryloggingconfigresponse.h"
#include "getqueryloggingconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Route53 {

/**
 * @class  GetQueryLoggingConfigResponse
 *
 * @brief  Handles Route53 GetQueryLoggingConfig responses.
 *
 * @see    Route53Client::getQueryLoggingConfig
 */

/**
 * @brief  Constructs a new GetQueryLoggingConfigResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetQueryLoggingConfigResponse::GetQueryLoggingConfigResponse(
        const GetQueryLoggingConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new GetQueryLoggingConfigResponsePrivate(this), parent)
{
    setRequest(new GetQueryLoggingConfigRequest(request));
    setReply(reply);
}

const GetQueryLoggingConfigRequest * GetQueryLoggingConfigResponse::request() const
{
    Q_D(const GetQueryLoggingConfigResponse);
    return static_cast<const GetQueryLoggingConfigRequest *>(d->request);
}

/**
 * @brief  Parse a Route53 GetQueryLoggingConfig response.
 *
 * @param  response  Response to parse.
 */
void GetQueryLoggingConfigResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetQueryLoggingConfigResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetQueryLoggingConfigResponsePrivate
 *
 * @brief  Private implementation for GetQueryLoggingConfigResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetQueryLoggingConfigResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetQueryLoggingConfigResponse instance.
 */
GetQueryLoggingConfigResponsePrivate::GetQueryLoggingConfigResponsePrivate(
    GetQueryLoggingConfigResponse * const q) : Route53ResponsePrivate(q)
{

}

/**
 * @brief  Parse an Route53 GetQueryLoggingConfigResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetQueryLoggingConfigResponsePrivate::parseGetQueryLoggingConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetQueryLoggingConfigResponse"));
    /// @todo
}

} // namespace Route53
} // namespace QtAws
