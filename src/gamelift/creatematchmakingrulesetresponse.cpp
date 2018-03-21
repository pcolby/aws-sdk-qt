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

#include "creatematchmakingrulesetresponse.h"
#include "creatematchmakingrulesetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace GameLift {

/**
 * @class  CreateMatchmakingRuleSetResponse
 *
 * @brief  Handles GameLift CreateMatchmakingRuleSet responses.
 *
 * @see    GameLiftClient::createMatchmakingRuleSet
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateMatchmakingRuleSetResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameLiftResponse(new CreateMatchmakingRuleSetResponsePrivate(this), parent)
{
    setRequest(new CreateMatchmakingRuleSetRequest(request));
    setReply(reply);
}

const CreateMatchmakingRuleSetRequest * CreateMatchmakingRuleSetResponse::request() const
{
    Q_D(const CreateMatchmakingRuleSetResponse);
    return static_cast<const CreateMatchmakingRuleSetRequest *>(d->request);
}

/**
 * @brief  Parse a GameLift CreateMatchmakingRuleSet response.
 *
 * @param  response  Response to parse.
 */
void CreateMatchmakingRuleSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateMatchmakingRuleSetResponsePrivate
 *
 * @brief  Private implementation for CreateMatchmakingRuleSetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateMatchmakingRuleSetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateMatchmakingRuleSetResponse instance.
 */
CreateMatchmakingRuleSetResponsePrivate::CreateMatchmakingRuleSetResponsePrivate(
    CreateMatchmakingRuleSetQueueResponse * const q) : CreateMatchmakingRuleSetPrivate(q)
{

}

/**
 * @brief  Parse an GameLift CreateMatchmakingRuleSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateMatchmakingRuleSetResponsePrivate::CreateMatchmakingRuleSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateMatchmakingRuleSetResponse"));
    /// @todo
}

} // namespace GameLift
} // namespace AWS
