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

#include "createconfigurationtemplateresponse.h"
#include "createconfigurationtemplateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticBeanstalk {

/**
 * @class  CreateConfigurationTemplateResponse
 *
 * @brief  Handles ElasticBeanstalk CreateConfigurationTemplate responses.
 *
 * @see    ElasticBeanstalkClient::createConfigurationTemplate
 */

/**
 * @brief  Constructs a new CreateConfigurationTemplateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateConfigurationTemplateResponse::CreateConfigurationTemplateResponse(
        const CreateConfigurationTemplateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticBeanstalkResponse(new CreateConfigurationTemplateResponsePrivate(this), parent)
{
    setRequest(new CreateConfigurationTemplateRequest(request));
    setReply(reply);
}

const CreateConfigurationTemplateRequest * CreateConfigurationTemplateResponse::request() const
{
    Q_D(const CreateConfigurationTemplateResponse);
    return static_cast<const CreateConfigurationTemplateRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticBeanstalk CreateConfigurationTemplate response.
 *
 * @param  response  Response to parse.
 */
void CreateConfigurationTemplateResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateConfigurationTemplateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateConfigurationTemplateResponsePrivate
 *
 * @brief  Private implementation for CreateConfigurationTemplateResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateConfigurationTemplateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateConfigurationTemplateResponse instance.
 */
CreateConfigurationTemplateResponsePrivate::CreateConfigurationTemplateResponsePrivate(
    CreateConfigurationTemplateResponse * const q) : ElasticBeanstalkResponsePrivate(q)
{

}

/**
 * @brief  Parse an ElasticBeanstalk CreateConfigurationTemplateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateConfigurationTemplateResponsePrivate::CreateConfigurationTemplateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateConfigurationTemplateResponse"));
    /// @todo
}

} // namespace ElasticBeanstalk
} // namespace QtAws
