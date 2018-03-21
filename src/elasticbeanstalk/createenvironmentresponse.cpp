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

#include "createenvironmentresponse.h"
#include "createenvironmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElasticBeanstalk {

/**
 * @class  CreateEnvironmentResponse
 *
 * @brief  Handles ElasticBeanstalk CreateEnvironment responses.
 *
 * @see    ElasticBeanstalkClient::createEnvironment
 */

/**
 * @brief  Constructs a new CreateEnvironmentResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateEnvironmentResponse::CreateEnvironmentResponse(
        const CreateEnvironmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticBeanstalkResponse(new CreateEnvironmentResponsePrivate(this), parent)
{
    setRequest(new CreateEnvironmentRequest(request));
    setReply(reply);
}

const CreateEnvironmentRequest * CreateEnvironmentResponse::request() const
{
    Q_D(const CreateEnvironmentResponse);
    return static_cast<const CreateEnvironmentRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticBeanstalk CreateEnvironment response.
 *
 * @param  response  Response to parse.
 */
void CreateEnvironmentResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateEnvironmentResponsePrivate
 *
 * @brief  Private implementation for CreateEnvironmentResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateEnvironmentResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateEnvironmentResponse instance.
 */
CreateEnvironmentResponsePrivate::CreateEnvironmentResponsePrivate(
    CreateEnvironmentQueueResponse * const q) : CreateEnvironmentPrivate(q)
{

}

/**
 * @brief  Parse an ElasticBeanstalk CreateEnvironmentResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateEnvironmentResponsePrivate::CreateEnvironmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateEnvironmentResponse"));
    /// @todo
}

} // namespace ElasticBeanstalk
} // namespace AWS
