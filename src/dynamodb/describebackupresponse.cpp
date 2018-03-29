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

#include "describebackupresponse.h"
#include "describebackupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DynamoDB {

/**
 * @class  DescribeBackupResponse
 *
 * @brief  Handles DynamoDB DescribeBackup responses.
 *
 * @see    DynamoDBClient::describeBackup
 */

/**
 * @brief  Constructs a new DescribeBackupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeBackupResponse::DescribeBackupResponse(
        const DescribeBackupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DynamoDBResponse(new DescribeBackupResponsePrivate(this), parent)
{
    setRequest(new DescribeBackupRequest(request));
    setReply(reply);
}

const DescribeBackupRequest * DescribeBackupResponse::request() const
{
    Q_D(const DescribeBackupResponse);
    return static_cast<const DescribeBackupRequest *>(d->request);
}

/**
 * @brief  Parse a DynamoDB DescribeBackup response.
 *
 * @param  response  Response to parse.
 */
void DescribeBackupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeBackupResponsePrivate
 *
 * @brief  Private implementation for DescribeBackupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeBackupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeBackupResponse instance.
 */
DescribeBackupResponsePrivate::DescribeBackupResponsePrivate(
    DescribeBackupQueueResponse * const q) : DescribeBackupPrivate(q)
{

}

/**
 * @brief  Parse an DynamoDB DescribeBackupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeBackupResponsePrivate::DescribeBackupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeBackupResponse"));
    /// @todo
}

} // namespace DynamoDB
} // namespace QtAws
