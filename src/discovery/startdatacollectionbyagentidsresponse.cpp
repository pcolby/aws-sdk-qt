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

#include "startdatacollectionbyagentidsresponse.h"
#include "startdatacollectionbyagentidsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApplicationDiscoveryService {

/**
 * @class  StartDataCollectionByAgentIdsResponse
 *
 * @brief  Handles ApplicationDiscoveryService StartDataCollectionByAgentIds responses.
 *
 * @see    ApplicationDiscoveryServiceClient::startDataCollectionByAgentIds
 */

/**
 * @brief  Constructs a new StartDataCollectionByAgentIdsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartDataCollectionByAgentIdsResponse::StartDataCollectionByAgentIdsResponse(
        const StartDataCollectionByAgentIdsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApplicationDiscoveryServiceResponse(new StartDataCollectionByAgentIdsResponsePrivate(this), parent)
{
    setRequest(new StartDataCollectionByAgentIdsRequest(request));
    setReply(reply);
}

const StartDataCollectionByAgentIdsRequest * StartDataCollectionByAgentIdsResponse::request() const
{
    Q_D(const StartDataCollectionByAgentIdsResponse);
    return static_cast<const StartDataCollectionByAgentIdsRequest *>(d->request);
}

/**
 * @brief  Parse a ApplicationDiscoveryService StartDataCollectionByAgentIds response.
 *
 * @param  response  Response to parse.
 */
void StartDataCollectionByAgentIdsResponse::parseSuccess(QIODevice &response)
{
    Q_D(StartDataCollectionByAgentIdsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StartDataCollectionByAgentIdsResponsePrivate
 *
 * @brief  Private implementation for StartDataCollectionByAgentIdsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartDataCollectionByAgentIdsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StartDataCollectionByAgentIdsResponse instance.
 */
StartDataCollectionByAgentIdsResponsePrivate::StartDataCollectionByAgentIdsResponsePrivate(
    StartDataCollectionByAgentIdsResponse * const q) : ApplicationDiscoveryServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an ApplicationDiscoveryService StartDataCollectionByAgentIdsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StartDataCollectionByAgentIdsResponsePrivate::parseStartDataCollectionByAgentIdsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartDataCollectionByAgentIdsResponse"));
    /// @todo
}

} // namespace ApplicationDiscoveryService
} // namespace QtAws
