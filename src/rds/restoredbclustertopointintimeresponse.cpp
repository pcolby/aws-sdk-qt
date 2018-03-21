/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "restoredbclustertopointintimeresponse.h"
#include "restoredbclustertopointintimeresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace RDS {

/**
 * @class  RestoreDBClusterToPointInTimeResponse
 *
 * @brief  Handles RDS RestoreDBClusterToPointInTime responses.
 *
 * @see    RDSClient::restoreDBClusterToPointInTime
 */

/**
 * @brief  Constructs a new RestoreDBClusterToPointInTimeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RestoreDBClusterToPointInTimeResponse::RestoreDBClusterToPointInTimeResponse(
        const RestoreDBClusterToPointInTimeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new RestoreDBClusterToPointInTimeResponsePrivate(this), parent)
{
    setRequest(new RestoreDBClusterToPointInTimeRequest(request));
    setReply(reply);
}

const RestoreDBClusterToPointInTimeRequest * RestoreDBClusterToPointInTimeResponse::request() const
{
    Q_D(const RestoreDBClusterToPointInTimeResponse);
    return static_cast<const RestoreDBClusterToPointInTimeRequest *>(d->request);
}

/**
 * @brief  Parse a RDS RestoreDBClusterToPointInTime response.
 *
 * @param  response  Response to parse.
 */
void RestoreDBClusterToPointInTimeResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RestoreDBClusterToPointInTimeResponsePrivate
 *
 * @brief  Private implementation for RestoreDBClusterToPointInTimeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RestoreDBClusterToPointInTimeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RestoreDBClusterToPointInTimeResponse instance.
 */
RestoreDBClusterToPointInTimeResponsePrivate::RestoreDBClusterToPointInTimeResponsePrivate(
    RestoreDBClusterToPointInTimeQueueResponse * const q) : RestoreDBClusterToPointInTimePrivate(q)
{

}

/**
 * @brief  Parse an RDS RestoreDBClusterToPointInTimeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RestoreDBClusterToPointInTimeResponsePrivate::RestoreDBClusterToPointInTimeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RestoreDBClusterToPointInTimeResponse"));
    /// @todo
}

} // namespace RDS
} // namespace AWS
