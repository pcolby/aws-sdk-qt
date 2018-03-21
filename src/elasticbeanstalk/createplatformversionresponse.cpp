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

#include "createplatformversionresponse.h"
#include "createplatformversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElasticBeanstalk {

/**
 * @class  CreatePlatformVersionResponse
 *
 * @brief  Handles ElasticBeanstalk CreatePlatformVersion responses.
 *
 * @see    ElasticBeanstalkClient::createPlatformVersion
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreatePlatformVersionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticBeanstalkResponse(new CreatePlatformVersionResponsePrivate(this), parent)
{
    setRequest(new CreatePlatformVersionRequest(request));
    setReply(reply);
}

const CreatePlatformVersionRequest * CreatePlatformVersionResponse::request() const
{
    Q_D(const CreatePlatformVersionResponse);
    return static_cast<const CreatePlatformVersionRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticBeanstalk CreatePlatformVersion response.
 *
 * @param  response  Response to parse.
 */
void CreatePlatformVersionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreatePlatformVersionResponsePrivate
 *
 * @brief  Private implementation for CreatePlatformVersionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreatePlatformVersionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreatePlatformVersionResponse instance.
 */
CreatePlatformVersionResponsePrivate::CreatePlatformVersionResponsePrivate(
    CreatePlatformVersionQueueResponse * const q) : CreatePlatformVersionPrivate(q)
{

}

/**
 * @brief  Parse an ElasticBeanstalk CreatePlatformVersionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreatePlatformVersionResponsePrivate::CreatePlatformVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreatePlatformVersionResponse"));
    /// @todo
}
