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

#include "createenvironmentec2response.h"
#include "createenvironmentec2response_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Cloud9 {

/**
 * @class  CreateEnvironmentEC2Response
 *
 * @brief  Handles Cloud9 CreateEnvironmentEC2 responses.
 *
 * @see    Cloud9Client::createEnvironmentEC2
 */

/**
 * @brief  Constructs a new CreateEnvironmentEC2Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateEnvironmentEC2Response::CreateEnvironmentEC2Response(
        const CreateEnvironmentEC2Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Cloud9Response(new CreateEnvironmentEC2ResponsePrivate(this), parent)
{
    setRequest(new CreateEnvironmentEC2Request(request));
    setReply(reply);
}

const CreateEnvironmentEC2Request * CreateEnvironmentEC2Response::request() const
{
    Q_D(const CreateEnvironmentEC2Response);
    return static_cast<const CreateEnvironmentEC2Request *>(d->request);
}

/**
 * @brief  Parse a Cloud9 CreateEnvironmentEC2 response.
 *
 * @param  response  Response to parse.
 */
void CreateEnvironmentEC2Response::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateEnvironmentEC2ResponsePrivate
 *
 * @brief  Private implementation for CreateEnvironmentEC2Response.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateEnvironmentEC2ResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateEnvironmentEC2Response instance.
 */
CreateEnvironmentEC2ResponsePrivate::CreateEnvironmentEC2ResponsePrivate(
    CreateEnvironmentEC2QueueResponse * const q) : CreateEnvironmentEC2Private(q)
{

}

/**
 * @brief  Parse an Cloud9 CreateEnvironmentEC2Response element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateEnvironmentEC2ResponsePrivate::CreateEnvironmentEC2Response(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateEnvironmentEC2Response"));
    /// @todo
}

} // namespace Cloud9
} // namespace AWS
