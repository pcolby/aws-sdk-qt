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

#include "updateapplicationversionresponse.h"
#include "updateapplicationversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElasticBeanstalk {

/**
 * @class  UpdateApplicationVersionResponse
 *
 * @brief  Handles ElasticBeanstalk UpdateApplicationVersion responses.
 *
 * @see    ElasticBeanstalkClient::updateApplicationVersion
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateApplicationVersionResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticBeanstalkResponse(new UpdateApplicationVersionResponsePrivate(this), parent)
{
    setRequest(new UpdateApplicationVersionRequest(request));
    setReply(reply);
}

const UpdateApplicationVersionRequest * UpdateApplicationVersionResponse::request() const
{
    Q_D(const UpdateApplicationVersionResponse);
    return static_cast<const UpdateApplicationVersionRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticBeanstalk UpdateApplicationVersion response.
 *
 * @param  response  Response to parse.
 */
void UpdateApplicationVersionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateApplicationVersionResponsePrivate
 *
 * @brief  Private implementation for UpdateApplicationVersionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateApplicationVersionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateApplicationVersionResponse instance.
 */
UpdateApplicationVersionResponsePrivate::UpdateApplicationVersionResponsePrivate(
    UpdateApplicationVersionQueueResponse * const q) : UpdateApplicationVersionPrivate(q)
{

}

/**
 * @brief  Parse an ElasticBeanstalk UpdateApplicationVersionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateApplicationVersionResponsePrivate::UpdateApplicationVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateApplicationVersionResponse"));
    /// @todo
}

} // namespace ElasticBeanstalk
} // namespace AWS
