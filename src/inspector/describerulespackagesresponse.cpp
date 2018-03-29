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

#include "describerulespackagesresponse.h"
#include "describerulespackagesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Inspector {

/**
 * @class  DescribeRulesPackagesResponse
 *
 * @brief  Handles Inspector DescribeRulesPackages responses.
 *
 * @see    InspectorClient::describeRulesPackages
 */

/**
 * @brief  Constructs a new DescribeRulesPackagesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeRulesPackagesResponse::DescribeRulesPackagesResponse(
        const DescribeRulesPackagesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : InspectorResponse(new DescribeRulesPackagesResponsePrivate(this), parent)
{
    setRequest(new DescribeRulesPackagesRequest(request));
    setReply(reply);
}

const DescribeRulesPackagesRequest * DescribeRulesPackagesResponse::request() const
{
    Q_D(const DescribeRulesPackagesResponse);
    return static_cast<const DescribeRulesPackagesRequest *>(d->request);
}

/**
 * @brief  Parse a Inspector DescribeRulesPackages response.
 *
 * @param  response  Response to parse.
 */
void DescribeRulesPackagesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeRulesPackagesResponsePrivate
 *
 * @brief  Private implementation for DescribeRulesPackagesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeRulesPackagesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeRulesPackagesResponse instance.
 */
DescribeRulesPackagesResponsePrivate::DescribeRulesPackagesResponsePrivate(
    DescribeRulesPackagesQueueResponse * const q) : DescribeRulesPackagesPrivate(q)
{

}

/**
 * @brief  Parse an Inspector DescribeRulesPackagesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeRulesPackagesResponsePrivate::DescribeRulesPackagesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeRulesPackagesResponse"));
    /// @todo
}

} // namespace Inspector
} // namespace AWS
