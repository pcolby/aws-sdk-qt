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

#include "updateconfigurationtemplateresponse.h"
#include "updateconfigurationtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElasticBeanstalk {

/**
 * @class  UpdateConfigurationTemplateResponse
 *
 * @brief  Handles ElasticBeanstalk UpdateConfigurationTemplate responses.
 *
 * @see    ElasticBeanstalkClient::updateConfigurationTemplate
 */

/**
 * @brief  Constructs a new UpdateConfigurationTemplateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateConfigurationTemplateResponse::UpdateConfigurationTemplateResponse(
        const UpdateConfigurationTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticBeanstalkResponse(new UpdateConfigurationTemplateResponsePrivate(this), parent)
{
    setRequest(new UpdateConfigurationTemplateRequest(request));
    setReply(reply);
}

const UpdateConfigurationTemplateRequest * UpdateConfigurationTemplateResponse::request() const
{
    Q_D(const UpdateConfigurationTemplateResponse);
    return static_cast<const UpdateConfigurationTemplateRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticBeanstalk UpdateConfigurationTemplate response.
 *
 * @param  response  Response to parse.
 */
void UpdateConfigurationTemplateResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateConfigurationTemplateResponsePrivate
 *
 * @brief  Private implementation for UpdateConfigurationTemplateResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateConfigurationTemplateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateConfigurationTemplateResponse instance.
 */
UpdateConfigurationTemplateResponsePrivate::UpdateConfigurationTemplateResponsePrivate(
    UpdateConfigurationTemplateQueueResponse * const q) : UpdateConfigurationTemplatePrivate(q)
{

}

/**
 * @brief  Parse an ElasticBeanstalk UpdateConfigurationTemplateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateConfigurationTemplateResponsePrivate::UpdateConfigurationTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateConfigurationTemplateResponse"));
    /// @todo
}

} // namespace ElasticBeanstalk
} // namespace AWS
