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

#include "creatematchmakingrulesetresponse.h"
#include "creatematchmakingrulesetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameLift {

/**
 * @class  CreateMatchmakingRuleSetResponse
 *
 * @brief  Handles GameLift CreateMatchmakingRuleSet responses.
 *
 * @see    GameLiftClient::createMatchmakingRuleSet
 */

/**
 * @brief  Constructs a new CreateMatchmakingRuleSetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateMatchmakingRuleSetResponse::CreateMatchmakingRuleSetResponse(
        const CreateMatchmakingRuleSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CreateMatchmakingRuleSetResponse(new CreateMatchmakingRuleSetResponsePrivate(this), parent)
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
    Q_D(CreateMatchmakingRuleSetResponse);
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
    CreateMatchmakingRuleSetResponse * const q) : GameLiftResponsePrivate(q)
{

}

/**
 * @brief  Parse an GameLift CreateMatchmakingRuleSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateMatchmakingRuleSetResponsePrivate::parseCreateMatchmakingRuleSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateMatchmakingRuleSetResponse"));
    /// @todo
}

} // namespace GameLift
} // namespace QtAws
