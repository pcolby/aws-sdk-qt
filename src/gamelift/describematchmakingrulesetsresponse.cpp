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

#include "describematchmakingrulesetsresponse.h"
#include "describematchmakingrulesetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameLift {

/**
 * @class  DescribeMatchmakingRuleSetsResponse
 *
 * @brief  Handles GameLift DescribeMatchmakingRuleSets responses.
 *
 * @see    GameLiftClient::describeMatchmakingRuleSets
 */

/**
 * @brief  Constructs a new DescribeMatchmakingRuleSetsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeMatchmakingRuleSetsResponse::DescribeMatchmakingRuleSetsResponse(
        const DescribeMatchmakingRuleSetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameLiftResponse(new DescribeMatchmakingRuleSetsResponsePrivate(this), parent)
{
    setRequest(new DescribeMatchmakingRuleSetsRequest(request));
    setReply(reply);
}

const DescribeMatchmakingRuleSetsRequest * DescribeMatchmakingRuleSetsResponse::request() const
{
    Q_D(const DescribeMatchmakingRuleSetsResponse);
    return static_cast<const DescribeMatchmakingRuleSetsRequest *>(d->request);
}

/**
 * @brief  Parse a GameLift DescribeMatchmakingRuleSets response.
 *
 * @param  response  Response to parse.
 */
void DescribeMatchmakingRuleSetsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeMatchmakingRuleSetsResponsePrivate
 *
 * @brief  Private implementation for DescribeMatchmakingRuleSetsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeMatchmakingRuleSetsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeMatchmakingRuleSetsResponse instance.
 */
DescribeMatchmakingRuleSetsResponsePrivate::DescribeMatchmakingRuleSetsResponsePrivate(
    DescribeMatchmakingRuleSetsResponse * const q) : GameLiftResponsePrivate(q)
{

}

/**
 * @brief  Parse an GameLift DescribeMatchmakingRuleSetsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeMatchmakingRuleSetsResponsePrivate::DescribeMatchmakingRuleSetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeMatchmakingRuleSetsResponse"));
    /// @todo
}

} // namespace GameLift
} // namespace QtAws
