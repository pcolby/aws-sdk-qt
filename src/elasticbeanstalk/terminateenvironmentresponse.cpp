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

#include "terminateenvironmentresponse.h"
#include "terminateenvironmentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ElasticBeanstalk {

/**
 * @class  TerminateEnvironmentResponse
 *
 * @brief  Handles ElasticBeanstalk TerminateEnvironment responses.
 *
 * @see    ElasticBeanstalkClient::terminateEnvironment
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
TerminateEnvironmentResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ElasticBeanstalkResponse(new TerminateEnvironmentResponsePrivate(this), parent)
{
    setRequest(new TerminateEnvironmentRequest(request));
    setReply(reply);
}

const TerminateEnvironmentRequest * TerminateEnvironmentResponse::request() const
{
    Q_D(const TerminateEnvironmentResponse);
    return static_cast<const TerminateEnvironmentRequest *>(d->request);
}

/**
 * @brief  Parse a ElasticBeanstalk TerminateEnvironment response.
 *
 * @param  response  Response to parse.
 */
void TerminateEnvironmentResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  TerminateEnvironmentResponsePrivate
 *
 * @brief  Private implementation for TerminateEnvironmentResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new TerminateEnvironmentResponsePrivate object.
 *
 * @param  q  Pointer to this object's public TerminateEnvironmentResponse instance.
 */
TerminateEnvironmentResponsePrivate::TerminateEnvironmentResponsePrivate(
    TerminateEnvironmentQueueResponse * const q) : TerminateEnvironmentPrivate(q)
{

}

/**
 * @brief  Parse an ElasticBeanstalk TerminateEnvironmentResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void TerminateEnvironmentResponsePrivate::TerminateEnvironmentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TerminateEnvironmentResponse"));
    /// @todo
}

} // namespace ElasticBeanstalk
} // namespace AWS
