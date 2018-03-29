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

#include "validateconfigurationsettingsresponse.h"
#include "validateconfigurationsettingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticBeanstalk {

/**
 * @class  ValidateConfigurationSettingsResponse
 *
 * @brief  Handles ElasticBeanstalk ValidateConfigurationSettings responses.
 *
 * @see    ElasticBeanstalkClient::validateConfigurationSettings
 */

/**
 * @brief  Constructs a new ValidateConfigurationSettingsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ValidateConfigurationSettingsResponse::ValidateConfigurationSettingsResponse(
        const ValidateConfigurationSettingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticBeanstalkResponse(new ValidateConfigurationSettingsResponsePrivate(this), parent)
{
    setRequest(new ValidateConfigurationSettingsRequest(request));
    setReply(reply);
}

const ValidateConfigurationSettingsRequest * ValidateConfigurationSettingsResponse::request() const
{
    Q_D(const ValidateConfigurationSettingsResponse);
    return static_cast<const ValidateConfigurationSettingsRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticBeanstalk ValidateConfigurationSettings response.
 *
 * @param  response  Response to parse.
 */
void ValidateConfigurationSettingsResponse::parseSuccess(QIODevice &response)
{
    Q_D(ValidateConfigurationSettingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ValidateConfigurationSettingsResponsePrivate
 *
 * @brief  Private implementation for ValidateConfigurationSettingsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ValidateConfigurationSettingsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ValidateConfigurationSettingsResponse instance.
 */
ValidateConfigurationSettingsResponsePrivate::ValidateConfigurationSettingsResponsePrivate(
    ValidateConfigurationSettingsResponse * const q) : ElasticBeanstalkResponsePrivate(q)
{

}

/**
 * @brief  Parse an ElasticBeanstalk ValidateConfigurationSettingsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ValidateConfigurationSettingsResponsePrivate::ValidateConfigurationSettingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ValidateConfigurationSettingsResponse"));
    /// @todo
}

} // namespace ElasticBeanstalk
} // namespace QtAws
