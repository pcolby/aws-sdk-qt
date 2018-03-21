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

#include "associatekmskeyresponse.h"
#include "associatekmskeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudWatchLogs {

/**
 * @class  AssociateKmsKeyResponse
 *
 * @brief  Handles CloudWatchLogs AssociateKmsKey responses.
 *
 * @see    CloudWatchLogsClient::associateKmsKey
 */

/**
 * @brief  Constructs a new AssociateKmsKeyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AssociateKmsKeyResponse::AssociateKmsKeyResponse(
        const AssociateKmsKeyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchLogsResponse(new AssociateKmsKeyResponsePrivate(this), parent)
{
    setRequest(new AssociateKmsKeyRequest(request));
    setReply(reply);
}

const AssociateKmsKeyRequest * AssociateKmsKeyResponse::request() const
{
    Q_D(const AssociateKmsKeyResponse);
    return static_cast<const AssociateKmsKeyRequest *>(d->request);
}

/**
 * @brief  Parse a CloudWatchLogs AssociateKmsKey response.
 *
 * @param  response  Response to parse.
 */
void AssociateKmsKeyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AssociateKmsKeyResponsePrivate
 *
 * @brief  Private implementation for AssociateKmsKeyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AssociateKmsKeyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AssociateKmsKeyResponse instance.
 */
AssociateKmsKeyResponsePrivate::AssociateKmsKeyResponsePrivate(
    AssociateKmsKeyQueueResponse * const q) : AssociateKmsKeyPrivate(q)
{

}

/**
 * @brief  Parse an CloudWatchLogs AssociateKmsKeyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AssociateKmsKeyResponsePrivate::AssociateKmsKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateKmsKeyResponse"));
    /// @todo
}

} // namespace CloudWatchLogs
} // namespace AWS
