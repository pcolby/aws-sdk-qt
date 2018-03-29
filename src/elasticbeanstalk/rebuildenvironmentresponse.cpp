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

#include "rebuildenvironmentresponse.h"
#include "rebuildenvironmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElasticBeanstalk {

/**
 * @class  RebuildEnvironmentResponse
 *
 * @brief  Handles ElasticBeanstalk RebuildEnvironment responses.
 *
 * @see    ElasticBeanstalkClient::rebuildEnvironment
 */

/**
 * @brief  Constructs a new RebuildEnvironmentResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RebuildEnvironmentResponse::RebuildEnvironmentResponse(
        const RebuildEnvironmentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticBeanstalkResponse(new RebuildEnvironmentResponsePrivate(this), parent)
{
    setRequest(new RebuildEnvironmentRequest(request));
    setReply(reply);
}

const RebuildEnvironmentRequest * RebuildEnvironmentResponse::request() const
{
    Q_D(const RebuildEnvironmentResponse);
    return static_cast<const RebuildEnvironmentRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticBeanstalk RebuildEnvironment response.
 *
 * @param  response  Response to parse.
 */
void RebuildEnvironmentResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RebuildEnvironmentResponsePrivate
 *
 * @brief  Private implementation for RebuildEnvironmentResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RebuildEnvironmentResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RebuildEnvironmentResponse instance.
 */
RebuildEnvironmentResponsePrivate::RebuildEnvironmentResponsePrivate(
    RebuildEnvironmentQueueResponse * const q) : RebuildEnvironmentPrivate(q)
{

}

/**
 * @brief  Parse an ElasticBeanstalk RebuildEnvironmentResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RebuildEnvironmentResponsePrivate::RebuildEnvironmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RebuildEnvironmentResponse"));
    /// @todo
}

} // namespace ElasticBeanstalk
} // namespace AWS
