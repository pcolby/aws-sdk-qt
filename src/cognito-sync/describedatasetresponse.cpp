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

#include "describedatasetresponse.h"
#include "describedatasetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoSync {

/**
 * @class  DescribeDatasetResponse
 *
 * @brief  Handles CognitoSync DescribeDataset responses.
 *
 * @see    CognitoSyncClient::describeDataset
 */

/**
 * @brief  Constructs a new DescribeDatasetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeDatasetResponse::DescribeDatasetResponse(
        const DescribeDatasetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DescribeDatasetResponse(new DescribeDatasetResponsePrivate(this), parent)
{
    setRequest(new DescribeDatasetRequest(request));
    setReply(reply);
}

const DescribeDatasetRequest * DescribeDatasetResponse::request() const
{
    Q_D(const DescribeDatasetResponse);
    return static_cast<const DescribeDatasetRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoSync DescribeDataset response.
 *
 * @param  response  Response to parse.
 */
void DescribeDatasetResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeDatasetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeDatasetResponsePrivate
 *
 * @brief  Private implementation for DescribeDatasetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeDatasetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeDatasetResponse instance.
 */
DescribeDatasetResponsePrivate::DescribeDatasetResponsePrivate(
    DescribeDatasetResponse * const q) : CognitoSyncResponsePrivate(q)
{

}

/**
 * @brief  Parse an CognitoSync DescribeDatasetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeDatasetResponsePrivate::parseDescribeDatasetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeDatasetResponse"));
    /// @todo
}

} // namespace CognitoSync
} // namespace QtAws
