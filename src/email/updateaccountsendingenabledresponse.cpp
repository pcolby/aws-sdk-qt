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

#include "updateaccountsendingenabledresponse.h"
#include "updateaccountsendingenabledresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SES {

/**
 * @class  UpdateAccountSendingEnabledResponse
 *
 * @brief  Handles SES UpdateAccountSendingEnabled responses.
 *
 * @see    SESClient::updateAccountSendingEnabled
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateAccountSendingEnabledResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESResponse(new UpdateAccountSendingEnabledResponsePrivate(this), parent)
{
    setRequest(new UpdateAccountSendingEnabledRequest(request));
    setReply(reply);
}

const UpdateAccountSendingEnabledRequest * UpdateAccountSendingEnabledResponse::request() const
{
    Q_D(const UpdateAccountSendingEnabledResponse);
    return static_cast<const UpdateAccountSendingEnabledRequest *>(d->request);
}

/**
 * @brief  Parse a SES UpdateAccountSendingEnabled response.
 *
 * @param  response  Response to parse.
 */
void UpdateAccountSendingEnabledResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateAccountSendingEnabledResponsePrivate
 *
 * @brief  Private implementation for UpdateAccountSendingEnabledResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateAccountSendingEnabledResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateAccountSendingEnabledResponse instance.
 */
UpdateAccountSendingEnabledResponsePrivate::UpdateAccountSendingEnabledResponsePrivate(
    UpdateAccountSendingEnabledQueueResponse * const q) : UpdateAccountSendingEnabledPrivate(q)
{

}

/**
 * @brief  Parse an SES UpdateAccountSendingEnabledResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateAccountSendingEnabledResponsePrivate::UpdateAccountSendingEnabledResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateAccountSendingEnabledResponse"));
    /// @todo
}

} // namespace SES
} // namespace AWS
