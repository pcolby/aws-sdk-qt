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

#include "stopdatacollectionbyagentidsresponse.h"
#include "stopdatacollectionbyagentidsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApplicationDiscoveryService {

/**
 * @class  StopDataCollectionByAgentIdsResponse
 *
 * @brief  Handles ApplicationDiscoveryService StopDataCollectionByAgentIds responses.
 *
 * @see    ApplicationDiscoveryServiceClient::stopDataCollectionByAgentIds
 */

/**
 * @brief  Constructs a new StopDataCollectionByAgentIdsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StopDataCollectionByAgentIdsResponse::StopDataCollectionByAgentIdsResponse(
        const StopDataCollectionByAgentIdsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ApplicationDiscoveryServiceResponse(new StopDataCollectionByAgentIdsResponsePrivate(this), parent)
{
    setRequest(new StopDataCollectionByAgentIdsRequest(request));
    setReply(reply);
}

const StopDataCollectionByAgentIdsRequest * StopDataCollectionByAgentIdsResponse::request() const
{
    Q_D(const StopDataCollectionByAgentIdsResponse);
    return static_cast<const StopDataCollectionByAgentIdsRequest *>(d->request);
}

/**
 * @brief  Parse a ApplicationDiscoveryService StopDataCollectionByAgentIds response.
 *
 * @param  response  Response to parse.
 */
void StopDataCollectionByAgentIdsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StopDataCollectionByAgentIdsResponsePrivate
 *
 * @brief  Private implementation for StopDataCollectionByAgentIdsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StopDataCollectionByAgentIdsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StopDataCollectionByAgentIdsResponse instance.
 */
StopDataCollectionByAgentIdsResponsePrivate::StopDataCollectionByAgentIdsResponsePrivate(
    StopDataCollectionByAgentIdsResponse * const q) : ApplicationDiscoveryServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an ApplicationDiscoveryService StopDataCollectionByAgentIdsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StopDataCollectionByAgentIdsResponsePrivate::StopDataCollectionByAgentIdsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StopDataCollectionByAgentIdsResponse"));
    /// @todo
}

} // namespace ApplicationDiscoveryService
} // namespace QtAws
