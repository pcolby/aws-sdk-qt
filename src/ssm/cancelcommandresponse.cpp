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

#include "cancelcommandresponse.h"
#include "cancelcommandresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SSM {

/**
 * @class  CancelCommandResponse
 *
 * @brief  Handles SSM CancelCommand responses.
 *
 * @see    SSMClient::cancelCommand
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CancelCommandResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new CancelCommandResponsePrivate(this), parent)
{
    setRequest(new CancelCommandRequest(request));
    setReply(reply);
}

const CancelCommandRequest * CancelCommandResponse::request() const
{
    Q_D(const CancelCommandResponse);
    return static_cast<const CancelCommandRequest *>(d->request);
}

/**
 * @brief  Parse a SSM CancelCommand response.
 *
 * @param  response  Response to parse.
 */
void CancelCommandResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CancelCommandResponsePrivate
 *
 * @brief  Private implementation for CancelCommandResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CancelCommandResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CancelCommandResponse instance.
 */
CancelCommandResponsePrivate::CancelCommandResponsePrivate(
    CancelCommandQueueResponse * const q) : CancelCommandPrivate(q)
{

}

/**
 * @brief  Parse an SSM CancelCommandResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CancelCommandResponsePrivate::CancelCommandResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelCommandResponse"));
    /// @todo
}

} // namespace SSM
} // namespace AWS
