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

#include "restoredbinstancefroms3response.h"
#include "restoredbinstancefroms3response_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RDS {

/**
 * @class  RestoreDBInstanceFromS3Response
 *
 * @brief  Handles RDS RestoreDBInstanceFromS3 responses.
 *
 * @see    RDSClient::restoreDBInstanceFromS3
 */

/**
 * @brief  Constructs a new RestoreDBInstanceFromS3Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RestoreDBInstanceFromS3Response::RestoreDBInstanceFromS3Response(
        const RestoreDBInstanceFromS3Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new RestoreDBInstanceFromS3ResponsePrivate(this), parent)
{
    setRequest(new RestoreDBInstanceFromS3Request(request));
    setReply(reply);
}

const RestoreDBInstanceFromS3Request * RestoreDBInstanceFromS3Response::request() const
{
    Q_D(const RestoreDBInstanceFromS3Response);
    return static_cast<const RestoreDBInstanceFromS3Request *>(d->request);
}

/**
 * @brief  Parse a RDS RestoreDBInstanceFromS3 response.
 *
 * @param  response  Response to parse.
 */
void RestoreDBInstanceFromS3Response::parseSuccess(QIODevice &response)
{
    Q_D(RestoreDBInstanceFromS3Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RestoreDBInstanceFromS3ResponsePrivate
 *
 * @brief  Private implementation for RestoreDBInstanceFromS3Response.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RestoreDBInstanceFromS3ResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RestoreDBInstanceFromS3Response instance.
 */
RestoreDBInstanceFromS3ResponsePrivate::RestoreDBInstanceFromS3ResponsePrivate(
    RestoreDBInstanceFromS3Response * const q) : RDSResponsePrivate(q)
{

}

/**
 * @brief  Parse an RDS RestoreDBInstanceFromS3Response element.
 *
 * @param  xml  XML stream to parse.
 */
void RestoreDBInstanceFromS3ResponsePrivate::RestoreDBInstanceFromS3Response(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RestoreDBInstanceFromS3Response"));
    /// @todo
}

} // namespace RDS
} // namespace QtAws
