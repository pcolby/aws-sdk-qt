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

#include "describelayersresponse.h"
#include "describelayersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace OpsWorks {

/**
 * @class  DescribeLayersResponse
 *
 * @brief  Handles OpsWorks DescribeLayers responses.
 *
 * @see    OpsWorksClient::describeLayers
 */

/**
 * @brief  Constructs a new DescribeLayersResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeLayersResponse::DescribeLayersResponse(
        const DescribeLayersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : OpsWorksResponse(new DescribeLayersResponsePrivate(this), parent)
{
    setRequest(new DescribeLayersRequest(request));
    setReply(reply);
}

const DescribeLayersRequest * DescribeLayersResponse::request() const
{
    Q_D(const DescribeLayersResponse);
    return static_cast<const DescribeLayersRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorks DescribeLayers response.
 *
 * @param  response  Response to parse.
 */
void DescribeLayersResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeLayersResponsePrivate
 *
 * @brief  Private implementation for DescribeLayersResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeLayersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeLayersResponse instance.
 */
DescribeLayersResponsePrivate::DescribeLayersResponsePrivate(
    DescribeLayersQueueResponse * const q) : DescribeLayersPrivate(q)
{

}

/**
 * @brief  Parse an OpsWorks DescribeLayersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeLayersResponsePrivate::DescribeLayersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeLayersResponse"));
    /// @todo
}

} // namespace OpsWorks
} // namespace AWS
