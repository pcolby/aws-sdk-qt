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

#include "describeruntimeconfigurationresponse.h"
#include "describeruntimeconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameLift {

/**
 * @class  DescribeRuntimeConfigurationResponse
 *
 * @brief  Handles GameLift DescribeRuntimeConfiguration responses.
 *
 * @see    GameLiftClient::describeRuntimeConfiguration
 */

/**
 * @brief  Constructs a new DescribeRuntimeConfigurationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeRuntimeConfigurationResponse::DescribeRuntimeConfigurationResponse(
        const DescribeRuntimeConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameLiftResponse(new DescribeRuntimeConfigurationResponsePrivate(this), parent)
{
    setRequest(new DescribeRuntimeConfigurationRequest(request));
    setReply(reply);
}

const DescribeRuntimeConfigurationRequest * DescribeRuntimeConfigurationResponse::request() const
{
    Q_D(const DescribeRuntimeConfigurationResponse);
    return static_cast<const DescribeRuntimeConfigurationRequest *>(d->request);
}

/**
 * @brief  Parse a GameLift DescribeRuntimeConfiguration response.
 *
 * @param  response  Response to parse.
 */
void DescribeRuntimeConfigurationResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeRuntimeConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeRuntimeConfigurationResponsePrivate
 *
 * @brief  Private implementation for DescribeRuntimeConfigurationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeRuntimeConfigurationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeRuntimeConfigurationResponse instance.
 */
DescribeRuntimeConfigurationResponsePrivate::DescribeRuntimeConfigurationResponsePrivate(
    DescribeRuntimeConfigurationResponse * const q) : GameLiftResponsePrivate(q)
{

}

/**
 * @brief  Parse an GameLift DescribeRuntimeConfigurationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeRuntimeConfigurationResponsePrivate::DescribeRuntimeConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeRuntimeConfigurationResponse"));
    /// @todo
}

} // namespace GameLift
} // namespace QtAws
