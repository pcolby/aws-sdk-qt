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

#include "updateconfigurationseteventdestinationresponse.h"
#include "updateconfigurationseteventdestinationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SES {

/**
 * @class  UpdateConfigurationSetEventDestinationResponse
 *
 * @brief  Handles SES UpdateConfigurationSetEventDestination responses.
 *
 * @see    SESClient::updateConfigurationSetEventDestination
 */

/**
 * @brief  Constructs a new UpdateConfigurationSetEventDestinationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateConfigurationSetEventDestinationResponse::UpdateConfigurationSetEventDestinationResponse(
        const UpdateConfigurationSetEventDestinationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : UpdateConfigurationSetEventDestinationResponse(new UpdateConfigurationSetEventDestinationResponsePrivate(this), parent)
{
    setRequest(new UpdateConfigurationSetEventDestinationRequest(request));
    setReply(reply);
}

const UpdateConfigurationSetEventDestinationRequest * UpdateConfigurationSetEventDestinationResponse::request() const
{
    Q_D(const UpdateConfigurationSetEventDestinationResponse);
    return static_cast<const UpdateConfigurationSetEventDestinationRequest *>(d->request);
}

/**
 * @brief  Parse a SES UpdateConfigurationSetEventDestination response.
 *
 * @param  response  Response to parse.
 */
void UpdateConfigurationSetEventDestinationResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateConfigurationSetEventDestinationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateConfigurationSetEventDestinationResponsePrivate
 *
 * @brief  Private implementation for UpdateConfigurationSetEventDestinationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateConfigurationSetEventDestinationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateConfigurationSetEventDestinationResponse instance.
 */
UpdateConfigurationSetEventDestinationResponsePrivate::UpdateConfigurationSetEventDestinationResponsePrivate(
    UpdateConfigurationSetEventDestinationResponse * const q) : SESResponsePrivate(q)
{

}

/**
 * @brief  Parse an SES UpdateConfigurationSetEventDestinationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateConfigurationSetEventDestinationResponsePrivate::parseUpdateConfigurationSetEventDestinationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateConfigurationSetEventDestinationResponse"));
    /// @todo
}

} // namespace SES
} // namespace QtAws
