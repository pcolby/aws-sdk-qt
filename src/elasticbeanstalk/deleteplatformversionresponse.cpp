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

#include "deleteplatformversionresponse.h"
#include "deleteplatformversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElasticBeanstalk {

/**
 * @class  DeletePlatformVersionResponse
 *
 * @brief  Handles ElasticBeanstalk DeletePlatformVersion responses.
 *
 * @see    ElasticBeanstalkClient::deletePlatformVersion
 */

/**
 * @brief  Constructs a new DeletePlatformVersionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeletePlatformVersionResponse::DeletePlatformVersionResponse(
        const DeletePlatformVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticBeanstalkResponse(new DeletePlatformVersionResponsePrivate(this), parent)
{
    setRequest(new DeletePlatformVersionRequest(request));
    setReply(reply);
}

const DeletePlatformVersionRequest * DeletePlatformVersionResponse::request() const
{
    Q_D(const DeletePlatformVersionResponse);
    return static_cast<const DeletePlatformVersionRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticBeanstalk DeletePlatformVersion response.
 *
 * @param  response  Response to parse.
 */
void DeletePlatformVersionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeletePlatformVersionResponsePrivate
 *
 * @brief  Private implementation for DeletePlatformVersionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeletePlatformVersionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeletePlatformVersionResponse instance.
 */
DeletePlatformVersionResponsePrivate::DeletePlatformVersionResponsePrivate(
    DeletePlatformVersionQueueResponse * const q) : DeletePlatformVersionPrivate(q)
{

}

/**
 * @brief  Parse an ElasticBeanstalk DeletePlatformVersionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeletePlatformVersionResponsePrivate::DeletePlatformVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeletePlatformVersionResponse"));
    /// @todo
}

} // namespace ElasticBeanstalk
} // namespace AWS
