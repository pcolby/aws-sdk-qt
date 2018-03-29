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

#include "updateconfigurationsetsendingenabledresponse.h"
#include "updateconfigurationsetsendingenabledresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SES {

/**
 * @class  UpdateConfigurationSetSendingEnabledResponse
 *
 * @brief  Handles SES UpdateConfigurationSetSendingEnabled responses.
 *
 * @see    SESClient::updateConfigurationSetSendingEnabled
 */

/**
 * @brief  Constructs a new UpdateConfigurationSetSendingEnabledResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateConfigurationSetSendingEnabledResponse::UpdateConfigurationSetSendingEnabledResponse(
        const UpdateConfigurationSetSendingEnabledRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESResponse(new UpdateConfigurationSetSendingEnabledResponsePrivate(this), parent)
{
    setRequest(new UpdateConfigurationSetSendingEnabledRequest(request));
    setReply(reply);
}

const UpdateConfigurationSetSendingEnabledRequest * UpdateConfigurationSetSendingEnabledResponse::request() const
{
    Q_D(const UpdateConfigurationSetSendingEnabledResponse);
    return static_cast<const UpdateConfigurationSetSendingEnabledRequest *>(d->request);
}

/**
 * @brief  Parse a SES UpdateConfigurationSetSendingEnabled response.
 *
 * @param  response  Response to parse.
 */
void UpdateConfigurationSetSendingEnabledResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateConfigurationSetSendingEnabledResponsePrivate
 *
 * @brief  Private implementation for UpdateConfigurationSetSendingEnabledResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateConfigurationSetSendingEnabledResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateConfigurationSetSendingEnabledResponse instance.
 */
UpdateConfigurationSetSendingEnabledResponsePrivate::UpdateConfigurationSetSendingEnabledResponsePrivate(
    UpdateConfigurationSetSendingEnabledQueueResponse * const q) : UpdateConfigurationSetSendingEnabledPrivate(q)
{

}

/**
 * @brief  Parse an SES UpdateConfigurationSetSendingEnabledResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateConfigurationSetSendingEnabledResponsePrivate::UpdateConfigurationSetSendingEnabledResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateConfigurationSetSendingEnabledResponse"));
    /// @todo
}

} // namespace SES
} // namespace AWS
