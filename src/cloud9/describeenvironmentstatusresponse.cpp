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

#include "describeenvironmentstatusresponse.h"
#include "describeenvironmentstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Cloud9 {

/**
 * @class  DescribeEnvironmentStatusResponse
 *
 * @brief  Handles Cloud9 DescribeEnvironmentStatus responses.
 *
 * @see    Cloud9Client::describeEnvironmentStatus
 */

/**
 * @brief  Constructs a new DescribeEnvironmentStatusResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeEnvironmentStatusResponse::DescribeEnvironmentStatusResponse(
        const DescribeEnvironmentStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : Cloud9Response(new DescribeEnvironmentStatusResponsePrivate(this), parent)
{
    setRequest(new DescribeEnvironmentStatusRequest(request));
    setReply(reply);
}

const DescribeEnvironmentStatusRequest * DescribeEnvironmentStatusResponse::request() const
{
    Q_D(const DescribeEnvironmentStatusResponse);
    return static_cast<const DescribeEnvironmentStatusRequest *>(d->request);
}

/**
 * @brief  Parse a Cloud9 DescribeEnvironmentStatus response.
 *
 * @param  response  Response to parse.
 */
void DescribeEnvironmentStatusResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeEnvironmentStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeEnvironmentStatusResponsePrivate
 *
 * @brief  Private implementation for DescribeEnvironmentStatusResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeEnvironmentStatusResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeEnvironmentStatusResponse instance.
 */
DescribeEnvironmentStatusResponsePrivate::DescribeEnvironmentStatusResponsePrivate(
    DescribeEnvironmentStatusResponse * const q) : Cloud9ResponsePrivate(q)
{

}

/**
 * @brief  Parse an Cloud9 DescribeEnvironmentStatusResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeEnvironmentStatusResponsePrivate::parseDescribeEnvironmentStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeEnvironmentStatusResponse"));
    /// @todo
}

} // namespace Cloud9
} // namespace QtAws
