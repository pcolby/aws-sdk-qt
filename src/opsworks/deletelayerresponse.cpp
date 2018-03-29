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

#include "deletelayerresponse.h"
#include "deletelayerresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace OpsWorks {

/**
 * @class  DeleteLayerResponse
 *
 * @brief  Handles OpsWorks DeleteLayer responses.
 *
 * @see    OpsWorksClient::deleteLayer
 */

/**
 * @brief  Constructs a new DeleteLayerResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteLayerResponse::DeleteLayerResponse(
        const DeleteLayerRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksResponse(new DeleteLayerResponsePrivate(this), parent)
{
    setRequest(new DeleteLayerRequest(request));
    setReply(reply);
}

const DeleteLayerRequest * DeleteLayerResponse::request() const
{
    Q_D(const DeleteLayerResponse);
    return static_cast<const DeleteLayerRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorks DeleteLayer response.
 *
 * @param  response  Response to parse.
 */
void DeleteLayerResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteLayerResponsePrivate
 *
 * @brief  Private implementation for DeleteLayerResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteLayerResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteLayerResponse instance.
 */
DeleteLayerResponsePrivate::DeleteLayerResponsePrivate(
    DeleteLayerQueueResponse * const q) : DeleteLayerPrivate(q)
{

}

/**
 * @brief  Parse an OpsWorks DeleteLayerResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteLayerResponsePrivate::DeleteLayerResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteLayerResponse"));
    /// @todo
}

} // namespace OpsWorks
} // namespace AWS
