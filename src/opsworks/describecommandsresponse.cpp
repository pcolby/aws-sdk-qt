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

#include "describecommandsresponse.h"
#include "describecommandsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace OpsWorks {

/**
 * @class  DescribeCommandsResponse
 *
 * @brief  Handles OpsWorks DescribeCommands responses.
 *
 * @see    OpsWorksClient::describeCommands
 */

/**
 * @brief  Constructs a new DescribeCommandsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeCommandsResponse::DescribeCommandsResponse(
        const DescribeCommandsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksResponse(new DescribeCommandsResponsePrivate(this), parent)
{
    setRequest(new DescribeCommandsRequest(request));
    setReply(reply);
}

const DescribeCommandsRequest * DescribeCommandsResponse::request() const
{
    Q_D(const DescribeCommandsResponse);
    return static_cast<const DescribeCommandsRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorks DescribeCommands response.
 *
 * @param  response  Response to parse.
 */
void DescribeCommandsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeCommandsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeCommandsResponsePrivate
 *
 * @brief  Private implementation for DescribeCommandsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeCommandsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeCommandsResponse instance.
 */
DescribeCommandsResponsePrivate::DescribeCommandsResponsePrivate(
    DescribeCommandsResponse * const q) : OpsWorksResponsePrivate(q)
{

}

/**
 * @brief  Parse an OpsWorks DescribeCommandsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeCommandsResponsePrivate::parseDescribeCommandsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeCommandsResponse"));
    /// @todo
}

} // namespace OpsWorks
} // namespace QtAws
