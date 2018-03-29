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

#include "deleteenvironmentconfigurationresponse.h"
#include "deleteenvironmentconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ElasticBeanstalk {

/**
 * @class  DeleteEnvironmentConfigurationResponse
 *
 * @brief  Handles ElasticBeanstalk DeleteEnvironmentConfiguration responses.
 *
 * @see    ElasticBeanstalkClient::deleteEnvironmentConfiguration
 */

/**
 * @brief  Constructs a new DeleteEnvironmentConfigurationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteEnvironmentConfigurationResponse::DeleteEnvironmentConfigurationResponse(
        const DeleteEnvironmentConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticBeanstalkResponse(new DeleteEnvironmentConfigurationResponsePrivate(this), parent)
{
    setRequest(new DeleteEnvironmentConfigurationRequest(request));
    setReply(reply);
}

const DeleteEnvironmentConfigurationRequest * DeleteEnvironmentConfigurationResponse::request() const
{
    Q_D(const DeleteEnvironmentConfigurationResponse);
    return static_cast<const DeleteEnvironmentConfigurationRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticBeanstalk DeleteEnvironmentConfiguration response.
 *
 * @param  response  Response to parse.
 */
void DeleteEnvironmentConfigurationResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeleteEnvironmentConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteEnvironmentConfigurationResponsePrivate
 *
 * @brief  Private implementation for DeleteEnvironmentConfigurationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteEnvironmentConfigurationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteEnvironmentConfigurationResponse instance.
 */
DeleteEnvironmentConfigurationResponsePrivate::DeleteEnvironmentConfigurationResponsePrivate(
    DeleteEnvironmentConfigurationResponse * const q) : ElasticBeanstalkResponsePrivate(q)
{

}

/**
 * @brief  Parse an ElasticBeanstalk DeleteEnvironmentConfigurationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteEnvironmentConfigurationResponsePrivate::parseDeleteEnvironmentConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteEnvironmentConfigurationResponse"));
    /// @todo
}

} // namespace ElasticBeanstalk
} // namespace QtAws
