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

#include "startondemandreplicationrunresponse.h"
#include "startondemandreplicationrunresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SMS {

/**
 * @class  StartOnDemandReplicationRunResponse
 *
 * @brief  Handles SMS StartOnDemandReplicationRun responses.
 *
 * @see    SMSClient::startOnDemandReplicationRun
 */

/**
 * @brief  Constructs a new StartOnDemandReplicationRunResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
StartOnDemandReplicationRunResponse::StartOnDemandReplicationRunResponse(
        const StartOnDemandReplicationRunRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StartOnDemandReplicationRunResponse(new StartOnDemandReplicationRunResponsePrivate(this), parent)
{
    setRequest(new StartOnDemandReplicationRunRequest(request));
    setReply(reply);
}

const StartOnDemandReplicationRunRequest * StartOnDemandReplicationRunResponse::request() const
{
    Q_D(const StartOnDemandReplicationRunResponse);
    return static_cast<const StartOnDemandReplicationRunRequest *>(d->request);
}

/**
 * @brief  Parse a SMS StartOnDemandReplicationRun response.
 *
 * @param  response  Response to parse.
 */
void StartOnDemandReplicationRunResponse::parseSuccess(QIODevice &response)
{
    Q_D(StartOnDemandReplicationRunResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  StartOnDemandReplicationRunResponsePrivate
 *
 * @brief  Private implementation for StartOnDemandReplicationRunResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new StartOnDemandReplicationRunResponsePrivate object.
 *
 * @param  q  Pointer to this object's public StartOnDemandReplicationRunResponse instance.
 */
StartOnDemandReplicationRunResponsePrivate::StartOnDemandReplicationRunResponsePrivate(
    StartOnDemandReplicationRunResponse * const q) : SMSResponsePrivate(q)
{

}

/**
 * @brief  Parse an SMS StartOnDemandReplicationRunResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void StartOnDemandReplicationRunResponsePrivate::parseStartOnDemandReplicationRunResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("StartOnDemandReplicationRunResponse"));
    /// @todo
}

} // namespace SMS
} // namespace QtAws
