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

#include "updateconfigurationsetreputationmetricsenabledresponse.h"
#include "updateconfigurationsetreputationmetricsenabledresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SES {

/**
 * @class  UpdateConfigurationSetReputationMetricsEnabledResponse
 *
 * @brief  Handles SES UpdateConfigurationSetReputationMetricsEnabled responses.
 *
 * @see    SESClient::updateConfigurationSetReputationMetricsEnabled
 */

/**
 * @brief  Constructs a new UpdateConfigurationSetReputationMetricsEnabledResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateConfigurationSetReputationMetricsEnabledResponse::UpdateConfigurationSetReputationMetricsEnabledResponse(
        const UpdateConfigurationSetReputationMetricsEnabledRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESResponse(new UpdateConfigurationSetReputationMetricsEnabledResponsePrivate(this), parent)
{
    setRequest(new UpdateConfigurationSetReputationMetricsEnabledRequest(request));
    setReply(reply);
}

const UpdateConfigurationSetReputationMetricsEnabledRequest * UpdateConfigurationSetReputationMetricsEnabledResponse::request() const
{
    Q_D(const UpdateConfigurationSetReputationMetricsEnabledResponse);
    return static_cast<const UpdateConfigurationSetReputationMetricsEnabledRequest *>(d->request);
}

/**
 * @brief  Parse a SES UpdateConfigurationSetReputationMetricsEnabled response.
 *
 * @param  response  Response to parse.
 */
void UpdateConfigurationSetReputationMetricsEnabledResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateConfigurationSetReputationMetricsEnabledResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateConfigurationSetReputationMetricsEnabledResponsePrivate
 *
 * @brief  Private implementation for UpdateConfigurationSetReputationMetricsEnabledResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateConfigurationSetReputationMetricsEnabledResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateConfigurationSetReputationMetricsEnabledResponse instance.
 */
UpdateConfigurationSetReputationMetricsEnabledResponsePrivate::UpdateConfigurationSetReputationMetricsEnabledResponsePrivate(
    UpdateConfigurationSetReputationMetricsEnabledResponse * const q) : SESResponsePrivate(q)
{

}

/**
 * @brief  Parse an SES UpdateConfigurationSetReputationMetricsEnabledResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateConfigurationSetReputationMetricsEnabledResponsePrivate::UpdateConfigurationSetReputationMetricsEnabledResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateConfigurationSetReputationMetricsEnabledResponse"));
    /// @todo
}

} // namespace SES
} // namespace QtAws
