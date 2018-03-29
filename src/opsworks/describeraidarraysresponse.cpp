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

#include "describeraidarraysresponse.h"
#include "describeraidarraysresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace OpsWorks {

/**
 * @class  DescribeRaidArraysResponse
 *
 * @brief  Handles OpsWorks DescribeRaidArrays responses.
 *
 * @see    OpsWorksClient::describeRaidArrays
 */

/**
 * @brief  Constructs a new DescribeRaidArraysResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeRaidArraysResponse::DescribeRaidArraysResponse(
        const DescribeRaidArraysRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DescribeRaidArraysResponse(new DescribeRaidArraysResponsePrivate(this), parent)
{
    setRequest(new DescribeRaidArraysRequest(request));
    setReply(reply);
}

const DescribeRaidArraysRequest * DescribeRaidArraysResponse::request() const
{
    Q_D(const DescribeRaidArraysResponse);
    return static_cast<const DescribeRaidArraysRequest *>(d->request);
}

/**
 * @brief  Parse a OpsWorks DescribeRaidArrays response.
 *
 * @param  response  Response to parse.
 */
void DescribeRaidArraysResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeRaidArraysResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeRaidArraysResponsePrivate
 *
 * @brief  Private implementation for DescribeRaidArraysResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeRaidArraysResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeRaidArraysResponse instance.
 */
DescribeRaidArraysResponsePrivate::DescribeRaidArraysResponsePrivate(
    DescribeRaidArraysResponse * const q) : OpsWorksResponsePrivate(q)
{

}

/**
 * @brief  Parse an OpsWorks DescribeRaidArraysResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeRaidArraysResponsePrivate::parseDescribeRaidArraysResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeRaidArraysResponse"));
    /// @todo
}

} // namespace OpsWorks
} // namespace QtAws
