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

#include "disassociatekmskeyresponse.h"
#include "disassociatekmskeyresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudWatchLogs {

/**
 * @class  DisassociateKmsKeyResponse
 *
 * @brief  Handles CloudWatchLogs DisassociateKmsKey responses.
 *
 * @see    CloudWatchLogsClient::disassociateKmsKey
 */

/**
 * @brief  Constructs a new DisassociateKmsKeyResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DisassociateKmsKeyResponse::DisassociateKmsKeyResponse(
        const DisassociateKmsKeyRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudWatchLogsResponse(new DisassociateKmsKeyResponsePrivate(this), parent)
{
    setRequest(new DisassociateKmsKeyRequest(request));
    setReply(reply);
}

const DisassociateKmsKeyRequest * DisassociateKmsKeyResponse::request() const
{
    Q_D(const DisassociateKmsKeyResponse);
    return static_cast<const DisassociateKmsKeyRequest *>(d->request);
}

/**
 * @brief  Parse a CloudWatchLogs DisassociateKmsKey response.
 *
 * @param  response  Response to parse.
 */
void DisassociateKmsKeyResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DisassociateKmsKeyResponsePrivate
 *
 * @brief  Private implementation for DisassociateKmsKeyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DisassociateKmsKeyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DisassociateKmsKeyResponse instance.
 */
DisassociateKmsKeyResponsePrivate::DisassociateKmsKeyResponsePrivate(
    DisassociateKmsKeyQueueResponse * const q) : DisassociateKmsKeyPrivate(q)
{

}

/**
 * @brief  Parse an CloudWatchLogs DisassociateKmsKeyResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DisassociateKmsKeyResponsePrivate::DisassociateKmsKeyResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DisassociateKmsKeyResponse"));
    /// @todo
}

} // namespace CloudWatchLogs
} // namespace QtAws
