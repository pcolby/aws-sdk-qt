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

#include "describeidentityusageresponse.h"
#include "describeidentityusageresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoSync {

/**
 * @class  DescribeIdentityUsageResponse
 *
 * @brief  Handles CognitoSync DescribeIdentityUsage responses.
 *
 * @see    CognitoSyncClient::describeIdentityUsage
 */

/**
 * @brief  Constructs a new DescribeIdentityUsageResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeIdentityUsageResponse::DescribeIdentityUsageResponse(
        const DescribeIdentityUsageRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoSyncResponse(new DescribeIdentityUsageResponsePrivate(this), parent)
{
    setRequest(new DescribeIdentityUsageRequest(request));
    setReply(reply);
}

const DescribeIdentityUsageRequest * DescribeIdentityUsageResponse::request() const
{
    Q_D(const DescribeIdentityUsageResponse);
    return static_cast<const DescribeIdentityUsageRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoSync DescribeIdentityUsage response.
 *
 * @param  response  Response to parse.
 */
void DescribeIdentityUsageResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeIdentityUsageResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeIdentityUsageResponsePrivate
 *
 * @brief  Private implementation for DescribeIdentityUsageResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeIdentityUsageResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeIdentityUsageResponse instance.
 */
DescribeIdentityUsageResponsePrivate::DescribeIdentityUsageResponsePrivate(
    DescribeIdentityUsageResponse * const q) : CognitoSyncResponsePrivate(q)
{

}

/**
 * @brief  Parse an CognitoSync DescribeIdentityUsageResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeIdentityUsageResponsePrivate::DescribeIdentityUsageResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeIdentityUsageResponse"));
    /// @todo
}

} // namespace CognitoSync
} // namespace QtAws
