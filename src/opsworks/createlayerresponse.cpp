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

#include "createlayerresponse.h"
#include "createlayerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace OpsWorks {

/**
 * @class  CreateLayerResponse
 *
 * @brief  Handles OpsWorks CreateLayer responses.
 *
 * @see    OpsWorksClient::createLayer
 */

/**
 * @brief  Constructs a new CreateLayerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateLayerResponse::CreateLayerResponse(
        const CreateLayerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksResponse(new CreateLayerResponsePrivate(this), parent)
{
    setRequest(new CreateLayerRequest(request));
    setReply(reply);
}

const CreateLayerRequest * CreateLayerResponse::request() const
{
    Q_D(const CreateLayerResponse);
    return static_cast<const CreateLayerRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorks CreateLayer response.
 *
 * @param  response  Response to parse.
 */
void CreateLayerResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateLayerResponsePrivate
 *
 * @brief  Private implementation for CreateLayerResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateLayerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateLayerResponse instance.
 */
CreateLayerResponsePrivate::CreateLayerResponsePrivate(
    CreateLayerQueueResponse * const q) : CreateLayerPrivate(q)
{

}

/**
 * @brief  Parse an OpsWorks CreateLayerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateLayerResponsePrivate::CreateLayerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateLayerResponse"));
    /// @todo
}

} // namespace OpsWorks
} // namespace AWS
