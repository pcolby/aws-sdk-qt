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

#include "createconfigurationresponse.h"
#include "createconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MQ {

/**
 * @class  CreateConfigurationResponse
 *
 * @brief  Handles MQ CreateConfiguration responses.
 *
 * @see    MQClient::createConfiguration
 */

/**
 * @brief  Constructs a new CreateConfigurationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateConfigurationResponse::CreateConfigurationResponse(
        const CreateConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CreateConfigurationResponse(new CreateConfigurationResponsePrivate(this), parent)
{
    setRequest(new CreateConfigurationRequest(request));
    setReply(reply);
}

const CreateConfigurationRequest * CreateConfigurationResponse::request() const
{
    Q_D(const CreateConfigurationResponse);
    return static_cast<const CreateConfigurationRequest *>(d->request);
}

/**
 * @brief  Parse a MQ CreateConfiguration response.
 *
 * @param  response  Response to parse.
 */
void CreateConfigurationResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateConfigurationResponsePrivate
 *
 * @brief  Private implementation for CreateConfigurationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateConfigurationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateConfigurationResponse instance.
 */
CreateConfigurationResponsePrivate::CreateConfigurationResponsePrivate(
    CreateConfigurationResponse * const q) : MQResponsePrivate(q)
{

}

/**
 * @brief  Parse an MQ CreateConfigurationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateConfigurationResponsePrivate::parseCreateConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateConfigurationResponse"));
    /// @todo
}

} // namespace MQ
} // namespace QtAws
