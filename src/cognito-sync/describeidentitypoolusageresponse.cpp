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

#include "describeidentitypoolusageresponse.h"
#include "describeidentitypoolusageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CognitoSync {

/**
 * @class  DescribeIdentityPoolUsageResponse
 *
 * @brief  Handles CognitoSync DescribeIdentityPoolUsage responses.
 *
 * @see    CognitoSyncClient::describeIdentityPoolUsage
 */

/**
 * @brief  Constructs a new DescribeIdentityPoolUsageResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeIdentityPoolUsageResponse::DescribeIdentityPoolUsageResponse(
        const DescribeIdentityPoolUsageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoSyncResponse(new DescribeIdentityPoolUsageResponsePrivate(this), parent)
{
    setRequest(new DescribeIdentityPoolUsageRequest(request));
    setReply(reply);
}

const DescribeIdentityPoolUsageRequest * DescribeIdentityPoolUsageResponse::request() const
{
    Q_D(const DescribeIdentityPoolUsageResponse);
    return static_cast<const DescribeIdentityPoolUsageRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoSync DescribeIdentityPoolUsage response.
 *
 * @param  response  Response to parse.
 */
void DescribeIdentityPoolUsageResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeIdentityPoolUsageResponsePrivate
 *
 * @brief  Private implementation for DescribeIdentityPoolUsageResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeIdentityPoolUsageResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeIdentityPoolUsageResponse instance.
 */
DescribeIdentityPoolUsageResponsePrivate::DescribeIdentityPoolUsageResponsePrivate(
    DescribeIdentityPoolUsageQueueResponse * const q) : DescribeIdentityPoolUsagePrivate(q)
{

}

/**
 * @brief  Parse an CognitoSync DescribeIdentityPoolUsageResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeIdentityPoolUsageResponsePrivate::DescribeIdentityPoolUsageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeIdentityPoolUsageResponse"));
    /// @todo
}

} // namespace CognitoSync
} // namespace AWS
