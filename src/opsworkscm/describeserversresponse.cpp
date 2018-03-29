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

#include "describeserversresponse.h"
#include "describeserversresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace OpsWorksCM {

/**
 * @class  DescribeServersResponse
 *
 * @brief  Handles OpsWorksCM DescribeServers responses.
 *
 * @see    OpsWorksCMClient::describeServers
 */

/**
 * @brief  Constructs a new DescribeServersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeServersResponse::DescribeServersResponse(
        const DescribeServersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksCMResponse(new DescribeServersResponsePrivate(this), parent)
{
    setRequest(new DescribeServersRequest(request));
    setReply(reply);
}

const DescribeServersRequest * DescribeServersResponse::request() const
{
    Q_D(const DescribeServersResponse);
    return static_cast<const DescribeServersRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorksCM DescribeServers response.
 *
 * @param  response  Response to parse.
 */
void DescribeServersResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeServersResponsePrivate
 *
 * @brief  Private implementation for DescribeServersResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeServersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeServersResponse instance.
 */
DescribeServersResponsePrivate::DescribeServersResponsePrivate(
    DescribeServersQueueResponse * const q) : DescribeServersPrivate(q)
{

}

/**
 * @brief  Parse an OpsWorksCM DescribeServersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeServersResponsePrivate::DescribeServersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeServersResponse"));
    /// @todo
}

} // namespace OpsWorksCM
} // namespace AWS
