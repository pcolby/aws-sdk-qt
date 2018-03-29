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

#include "deletequeryloggingconfigresponse.h"
#include "deletequeryloggingconfigresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Route53 {

/**
 * @class  DeleteQueryLoggingConfigResponse
 *
 * @brief  Handles Route53 DeleteQueryLoggingConfig responses.
 *
 * @see    Route53Client::deleteQueryLoggingConfig
 */

/**
 * @brief  Constructs a new DeleteQueryLoggingConfigResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteQueryLoggingConfigResponse::DeleteQueryLoggingConfigResponse(
        const DeleteQueryLoggingConfigRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Route53Response(new DeleteQueryLoggingConfigResponsePrivate(this), parent)
{
    setRequest(new DeleteQueryLoggingConfigRequest(request));
    setReply(reply);
}

const DeleteQueryLoggingConfigRequest * DeleteQueryLoggingConfigResponse::request() const
{
    Q_D(const DeleteQueryLoggingConfigResponse);
    return static_cast<const DeleteQueryLoggingConfigRequest *>(d->request);
}

/**
 * @brief  Parse a Route53 DeleteQueryLoggingConfig response.
 *
 * @param  response  Response to parse.
 */
void DeleteQueryLoggingConfigResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteQueryLoggingConfigResponsePrivate
 *
 * @brief  Private implementation for DeleteQueryLoggingConfigResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteQueryLoggingConfigResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteQueryLoggingConfigResponse instance.
 */
DeleteQueryLoggingConfigResponsePrivate::DeleteQueryLoggingConfigResponsePrivate(
    DeleteQueryLoggingConfigQueueResponse * const q) : DeleteQueryLoggingConfigPrivate(q)
{

}

/**
 * @brief  Parse an Route53 DeleteQueryLoggingConfigResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteQueryLoggingConfigResponsePrivate::DeleteQueryLoggingConfigResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteQueryLoggingConfigResponse"));
    /// @todo
}

} // namespace Route53
} // namespace AWS
