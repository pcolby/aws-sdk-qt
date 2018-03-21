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

#include "cancelarchivalresponse.h"
#include "cancelarchivalresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace StorageGateway {

/**
 * @class  CancelArchivalResponse
 *
 * @brief  Handles StorageGateway CancelArchival responses.
 *
 * @see    StorageGatewayClient::cancelArchival
 */

/**
 * @brief  Constructs a new CancelArchivalResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CancelArchivalResponse::CancelArchivalResponse(
        const CancelArchivalRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StorageGatewayResponse(new CancelArchivalResponsePrivate(this), parent)
{
    setRequest(new CancelArchivalRequest(request));
    setReply(reply);
}

const CancelArchivalRequest * CancelArchivalResponse::request() const
{
    Q_D(const CancelArchivalResponse);
    return static_cast<const CancelArchivalRequest *>(d->request);
}

/**
 * @brief  Parse a StorageGateway CancelArchival response.
 *
 * @param  response  Response to parse.
 */
void CancelArchivalResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CancelArchivalResponsePrivate
 *
 * @brief  Private implementation for CancelArchivalResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CancelArchivalResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CancelArchivalResponse instance.
 */
CancelArchivalResponsePrivate::CancelArchivalResponsePrivate(
    CancelArchivalQueueResponse * const q) : CancelArchivalPrivate(q)
{

}

/**
 * @brief  Parse an StorageGateway CancelArchivalResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CancelArchivalResponsePrivate::CancelArchivalResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelArchivalResponse"));
    /// @todo
}

} // namespace StorageGateway
} // namespace AWS
