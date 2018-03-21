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

#include "restoredbclusterfroms3response.h"
#include "restoredbclusterfroms3response_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace RDS {

/**
 * @class  RestoreDBClusterFromS3Response
 *
 * @brief  Handles RDS RestoreDBClusterFromS3 responses.
 *
 * @see    RDSClient::restoreDBClusterFromS3
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RestoreDBClusterFromS3Response::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new RestoreDBClusterFromS3ResponsePrivate(this), parent)
{
    setRequest(new RestoreDBClusterFromS3Request(request));
    setReply(reply);
}

const RestoreDBClusterFromS3Request * RestoreDBClusterFromS3Response::request() const
{
    Q_D(const RestoreDBClusterFromS3Response);
    return static_cast<const RestoreDBClusterFromS3Request *>(d->request);
}

/**
 * @brief  Parse a RDS RestoreDBClusterFromS3 response.
 *
 * @param  response  Response to parse.
 */
void RestoreDBClusterFromS3Response::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RestoreDBClusterFromS3ResponsePrivate
 *
 * @brief  Private implementation for RestoreDBClusterFromS3Response.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RestoreDBClusterFromS3ResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RestoreDBClusterFromS3Response instance.
 */
RestoreDBClusterFromS3ResponsePrivate::RestoreDBClusterFromS3ResponsePrivate(
    RestoreDBClusterFromS3QueueResponse * const q) : RestoreDBClusterFromS3Private(q)
{

}

/**
 * @brief  Parse an RDS RestoreDBClusterFromS3Response element.
 *
 * @param  xml  XML stream to parse.
 */
void RestoreDBClusterFromS3ResponsePrivate::RestoreDBClusterFromS3Response(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RestoreDBClusterFromS3Response"));
    /// @todo
}
