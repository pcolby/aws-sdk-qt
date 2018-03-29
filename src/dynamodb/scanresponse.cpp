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

#include "scanresponse.h"
#include "scanresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DynamoDB {

/**
 * @class  ScanResponse
 *
 * @brief  Handles DynamoDB Scan responses.
 *
 * @see    DynamoDBClient::scan
 */

/**
 * @brief  Constructs a new ScanResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ScanResponse::ScanResponse(
        const ScanRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ScanResponse(new ScanResponsePrivate(this), parent)
{
    setRequest(new ScanRequest(request));
    setReply(reply);
}

const ScanRequest * ScanResponse::request() const
{
    Q_D(const ScanResponse);
    return static_cast<const ScanRequest *>(d->request);
}

/**
 * @brief  Parse a DynamoDB Scan response.
 *
 * @param  response  Response to parse.
 */
void ScanResponse::parseSuccess(QIODevice &response)
{
    Q_D(ScanResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ScanResponsePrivate
 *
 * @brief  Private implementation for ScanResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ScanResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ScanResponse instance.
 */
ScanResponsePrivate::ScanResponsePrivate(
    ScanResponse * const q) : DynamoDBResponsePrivate(q)
{

}

/**
 * @brief  Parse an DynamoDB ScanResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ScanResponsePrivate::parseScanResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ScanResponse"));
    /// @todo
}

} // namespace DynamoDB
} // namespace QtAws
