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

#include "getaccountsendingenabledresponse.h"
#include "getaccountsendingenabledresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SES {

/**
 * @class  GetAccountSendingEnabledResponse
 *
 * @brief  Handles SES GetAccountSendingEnabled responses.
 *
 * @see    SESClient::getAccountSendingEnabled
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetAccountSendingEnabledResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESResponse(new GetAccountSendingEnabledResponsePrivate(this), parent)
{
    setRequest(new GetAccountSendingEnabledRequest(request));
    setReply(reply);
}

const GetAccountSendingEnabledRequest * GetAccountSendingEnabledResponse::request() const
{
    Q_D(const GetAccountSendingEnabledResponse);
    return static_cast<const GetAccountSendingEnabledRequest *>(d->request);
}

/**
 * @brief  Parse a SES GetAccountSendingEnabled response.
 *
 * @param  response  Response to parse.
 */
void GetAccountSendingEnabledResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetAccountSendingEnabledResponsePrivate
 *
 * @brief  Private implementation for GetAccountSendingEnabledResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetAccountSendingEnabledResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetAccountSendingEnabledResponse instance.
 */
GetAccountSendingEnabledResponsePrivate::GetAccountSendingEnabledResponsePrivate(
    GetAccountSendingEnabledQueueResponse * const q) : GetAccountSendingEnabledPrivate(q)
{

}

/**
 * @brief  Parse an SES GetAccountSendingEnabledResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetAccountSendingEnabledResponsePrivate::GetAccountSendingEnabledResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetAccountSendingEnabledResponse"));
    /// @todo
}

} // namespace SES
} // namespace AWS
