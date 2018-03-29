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

#include "describetaperecoverypointsresponse.h"
#include "describetaperecoverypointsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace StorageGateway {

/**
 * @class  DescribeTapeRecoveryPointsResponse
 *
 * @brief  Handles StorageGateway DescribeTapeRecoveryPoints responses.
 *
 * @see    StorageGatewayClient::describeTapeRecoveryPoints
 */

/**
 * @brief  Constructs a new DescribeTapeRecoveryPointsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeTapeRecoveryPointsResponse::DescribeTapeRecoveryPointsResponse(
        const DescribeTapeRecoveryPointsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StorageGatewayResponse(new DescribeTapeRecoveryPointsResponsePrivate(this), parent)
{
    setRequest(new DescribeTapeRecoveryPointsRequest(request));
    setReply(reply);
}

const DescribeTapeRecoveryPointsRequest * DescribeTapeRecoveryPointsResponse::request() const
{
    Q_D(const DescribeTapeRecoveryPointsResponse);
    return static_cast<const DescribeTapeRecoveryPointsRequest *>(d->request);
}

/**
 * @brief  Parse a StorageGateway DescribeTapeRecoveryPoints response.
 *
 * @param  response  Response to parse.
 */
void DescribeTapeRecoveryPointsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeTapeRecoveryPointsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeTapeRecoveryPointsResponsePrivate
 *
 * @brief  Private implementation for DescribeTapeRecoveryPointsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeTapeRecoveryPointsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeTapeRecoveryPointsResponse instance.
 */
DescribeTapeRecoveryPointsResponsePrivate::DescribeTapeRecoveryPointsResponsePrivate(
    DescribeTapeRecoveryPointsResponse * const q) : StorageGatewayResponsePrivate(q)
{

}

/**
 * @brief  Parse an StorageGateway DescribeTapeRecoveryPointsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeTapeRecoveryPointsResponsePrivate::parseDescribeTapeRecoveryPointsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeTapeRecoveryPointsResponse"));
    /// @todo
}

} // namespace StorageGateway
} // namespace QtAws
