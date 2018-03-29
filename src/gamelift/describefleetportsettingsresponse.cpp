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

#include "describefleetportsettingsresponse.h"
#include "describefleetportsettingsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameLift {

/**
 * @class  DescribeFleetPortSettingsResponse
 *
 * @brief  Handles GameLift DescribeFleetPortSettings responses.
 *
 * @see    GameLiftClient::describeFleetPortSettings
 */

/**
 * @brief  Constructs a new DescribeFleetPortSettingsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeFleetPortSettingsResponse::DescribeFleetPortSettingsResponse(
        const DescribeFleetPortSettingsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameLiftResponse(new DescribeFleetPortSettingsResponsePrivate(this), parent)
{
    setRequest(new DescribeFleetPortSettingsRequest(request));
    setReply(reply);
}

const DescribeFleetPortSettingsRequest * DescribeFleetPortSettingsResponse::request() const
{
    Q_D(const DescribeFleetPortSettingsResponse);
    return static_cast<const DescribeFleetPortSettingsRequest *>(d->request);
}

/**
 * @brief  Parse a GameLift DescribeFleetPortSettings response.
 *
 * @param  response  Response to parse.
 */
void DescribeFleetPortSettingsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeFleetPortSettingsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeFleetPortSettingsResponsePrivate
 *
 * @brief  Private implementation for DescribeFleetPortSettingsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeFleetPortSettingsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeFleetPortSettingsResponse instance.
 */
DescribeFleetPortSettingsResponsePrivate::DescribeFleetPortSettingsResponsePrivate(
    DescribeFleetPortSettingsResponse * const q) : GameLiftResponsePrivate(q)
{

}

/**
 * @brief  Parse an GameLift DescribeFleetPortSettingsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeFleetPortSettingsResponsePrivate::DescribeFleetPortSettingsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeFleetPortSettingsResponse"));
    /// @todo
}

} // namespace GameLift
} // namespace QtAws
