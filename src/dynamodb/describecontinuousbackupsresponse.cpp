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

#include "describecontinuousbackupsresponse.h"
#include "describecontinuousbackupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DynamoDB {

/**
 * @class  DescribeContinuousBackupsResponse
 *
 * @brief  Handles DynamoDB DescribeContinuousBackups responses.
 *
 * @see    DynamoDBClient::describeContinuousBackups
 */

/**
 * @brief  Constructs a new DescribeContinuousBackupsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeContinuousBackupsResponse::DescribeContinuousBackupsResponse(
        const DescribeContinuousBackupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DynamoDBResponse(new DescribeContinuousBackupsResponsePrivate(this), parent)
{
    setRequest(new DescribeContinuousBackupsRequest(request));
    setReply(reply);
}

const DescribeContinuousBackupsRequest * DescribeContinuousBackupsResponse::request() const
{
    Q_D(const DescribeContinuousBackupsResponse);
    return static_cast<const DescribeContinuousBackupsRequest *>(d->request);
}

/**
 * @brief  Parse a DynamoDB DescribeContinuousBackups response.
 *
 * @param  response  Response to parse.
 */
void DescribeContinuousBackupsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeContinuousBackupsResponsePrivate
 *
 * @brief  Private implementation for DescribeContinuousBackupsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeContinuousBackupsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeContinuousBackupsResponse instance.
 */
DescribeContinuousBackupsResponsePrivate::DescribeContinuousBackupsResponsePrivate(
    DescribeContinuousBackupsQueueResponse * const q) : DescribeContinuousBackupsPrivate(q)
{

}

/**
 * @brief  Parse an DynamoDB DescribeContinuousBackupsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeContinuousBackupsResponsePrivate::DescribeContinuousBackupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeContinuousBackupsResponse"));
    /// @todo
}

} // namespace DynamoDB
} // namespace QtAws
