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

#include "describeoriginendpointresponse.h"
#include "describeoriginendpointresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MediaPackage {

/**
 * @class  DescribeOriginEndpointResponse
 *
 * @brief  Handles MediaPackage DescribeOriginEndpoint responses.
 *
 * @see    MediaPackageClient::describeOriginEndpoint
 */

/**
 * @brief  Constructs a new DescribeOriginEndpointResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeOriginEndpointResponse::DescribeOriginEndpointResponse(
        const DescribeOriginEndpointRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DescribeOriginEndpointResponse(new DescribeOriginEndpointResponsePrivate(this), parent)
{
    setRequest(new DescribeOriginEndpointRequest(request));
    setReply(reply);
}

const DescribeOriginEndpointRequest * DescribeOriginEndpointResponse::request() const
{
    Q_D(const DescribeOriginEndpointResponse);
    return static_cast<const DescribeOriginEndpointRequest *>(d->request);
}

/**
 * @brief  Parse a MediaPackage DescribeOriginEndpoint response.
 *
 * @param  response  Response to parse.
 */
void DescribeOriginEndpointResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeOriginEndpointResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeOriginEndpointResponsePrivate
 *
 * @brief  Private implementation for DescribeOriginEndpointResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeOriginEndpointResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeOriginEndpointResponse instance.
 */
DescribeOriginEndpointResponsePrivate::DescribeOriginEndpointResponsePrivate(
    DescribeOriginEndpointResponse * const q) : MediaPackageResponsePrivate(q)
{

}

/**
 * @brief  Parse an MediaPackage DescribeOriginEndpointResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeOriginEndpointResponsePrivate::parseDescribeOriginEndpointResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeOriginEndpointResponse"));
    /// @todo
}

} // namespace MediaPackage
} // namespace QtAws
