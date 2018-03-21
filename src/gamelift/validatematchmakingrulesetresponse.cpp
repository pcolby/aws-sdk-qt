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

#include "validatematchmakingrulesetresponse.h"
#include "validatematchmakingrulesetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace GameLift {

/**
 * @class  ValidateMatchmakingRuleSetResponse
 *
 * @brief  Handles GameLift ValidateMatchmakingRuleSet responses.
 *
 * @see    GameLiftClient::validateMatchmakingRuleSet
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ValidateMatchmakingRuleSetResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameLiftResponse(new ValidateMatchmakingRuleSetResponsePrivate(this), parent)
{
    setRequest(new ValidateMatchmakingRuleSetRequest(request));
    setReply(reply);
}

const ValidateMatchmakingRuleSetRequest * ValidateMatchmakingRuleSetResponse::request() const
{
    Q_D(const ValidateMatchmakingRuleSetResponse);
    return static_cast<const ValidateMatchmakingRuleSetRequest *>(d->request);
}

/**
 * @brief  Parse a GameLift ValidateMatchmakingRuleSet response.
 *
 * @param  response  Response to parse.
 */
void ValidateMatchmakingRuleSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ValidateMatchmakingRuleSetResponsePrivate
 *
 * @brief  Private implementation for ValidateMatchmakingRuleSetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ValidateMatchmakingRuleSetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ValidateMatchmakingRuleSetResponse instance.
 */
ValidateMatchmakingRuleSetResponsePrivate::ValidateMatchmakingRuleSetResponsePrivate(
    ValidateMatchmakingRuleSetQueueResponse * const q) : ValidateMatchmakingRuleSetPrivate(q)
{

}

/**
 * @brief  Parse an GameLift ValidateMatchmakingRuleSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ValidateMatchmakingRuleSetResponsePrivate::ValidateMatchmakingRuleSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ValidateMatchmakingRuleSetResponse"));
    /// @todo
}

} // namespace GameLift
} // namespace AWS
