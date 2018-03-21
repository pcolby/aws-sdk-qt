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

#include "updateconfigurationsettrackingoptionsresponse.h"
#include "updateconfigurationsettrackingoptionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SES {

/**
 * @class  UpdateConfigurationSetTrackingOptionsResponse
 *
 * @brief  Handles SES UpdateConfigurationSetTrackingOptions responses.
 *
 * @see    SESClient::updateConfigurationSetTrackingOptions
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateConfigurationSetTrackingOptionsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESResponse(new UpdateConfigurationSetTrackingOptionsResponsePrivate(this), parent)
{
    setRequest(new UpdateConfigurationSetTrackingOptionsRequest(request));
    setReply(reply);
}

const UpdateConfigurationSetTrackingOptionsRequest * UpdateConfigurationSetTrackingOptionsResponse::request() const
{
    Q_D(const UpdateConfigurationSetTrackingOptionsResponse);
    return static_cast<const UpdateConfigurationSetTrackingOptionsRequest *>(d->request);
}

/**
 * @brief  Parse a SES UpdateConfigurationSetTrackingOptions response.
 *
 * @param  response  Response to parse.
 */
void UpdateConfigurationSetTrackingOptionsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateConfigurationSetTrackingOptionsResponsePrivate
 *
 * @brief  Private implementation for UpdateConfigurationSetTrackingOptionsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateConfigurationSetTrackingOptionsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateConfigurationSetTrackingOptionsResponse instance.
 */
UpdateConfigurationSetTrackingOptionsResponsePrivate::UpdateConfigurationSetTrackingOptionsResponsePrivate(
    UpdateConfigurationSetTrackingOptionsQueueResponse * const q) : UpdateConfigurationSetTrackingOptionsPrivate(q)
{

}

/**
 * @brief  Parse an SES UpdateConfigurationSetTrackingOptionsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateConfigurationSetTrackingOptionsResponsePrivate::UpdateConfigurationSetTrackingOptionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateConfigurationSetTrackingOptionsResponse"));
    /// @todo
}

} // namespace SES
} // namespace AWS
