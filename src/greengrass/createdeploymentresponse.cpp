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

#include "createdeploymentresponse.h"
#include "createdeploymentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/**
 * @class  CreateDeploymentResponse
 *
 * @brief  Handles Greengrass CreateDeployment responses.
 *
 * @see    GreengrassClient::createDeployment
 */

/**
 * @brief  Constructs a new CreateDeploymentResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateDeploymentResponse::CreateDeploymentResponse(
        const CreateDeploymentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CreateDeploymentResponse(new CreateDeploymentResponsePrivate(this), parent)
{
    setRequest(new CreateDeploymentRequest(request));
    setReply(reply);
}

const CreateDeploymentRequest * CreateDeploymentResponse::request() const
{
    Q_D(const CreateDeploymentResponse);
    return static_cast<const CreateDeploymentRequest *>(d->request);
}

/**
 * @brief  Parse a Greengrass CreateDeployment response.
 *
 * @param  response  Response to parse.
 */
void CreateDeploymentResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateDeploymentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateDeploymentResponsePrivate
 *
 * @brief  Private implementation for CreateDeploymentResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateDeploymentResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateDeploymentResponse instance.
 */
CreateDeploymentResponsePrivate::CreateDeploymentResponsePrivate(
    CreateDeploymentResponse * const q) : GreengrassResponsePrivate(q)
{

}

/**
 * @brief  Parse an Greengrass CreateDeploymentResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateDeploymentResponsePrivate::parseCreateDeploymentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateDeploymentResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace QtAws
