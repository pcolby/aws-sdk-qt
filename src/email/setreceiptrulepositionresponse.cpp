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

#include "setreceiptrulepositionresponse.h"
#include "setreceiptrulepositionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SES {

/**
 * @class  SetReceiptRulePositionResponse
 *
 * @brief  Handles SES SetReceiptRulePosition responses.
 *
 * @see    SESClient::setReceiptRulePosition
 */

/**
 * @brief  Constructs a new SetReceiptRulePositionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
SetReceiptRulePositionResponse::SetReceiptRulePositionResponse(
        const SetReceiptRulePositionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESResponse(new SetReceiptRulePositionResponsePrivate(this), parent)
{
    setRequest(new SetReceiptRulePositionRequest(request));
    setReply(reply);
}

const SetReceiptRulePositionRequest * SetReceiptRulePositionResponse::request() const
{
    Q_D(const SetReceiptRulePositionResponse);
    return static_cast<const SetReceiptRulePositionRequest *>(d->request);
}

/**
 * @brief  Parse a SES SetReceiptRulePosition response.
 *
 * @param  response  Response to parse.
 */
void SetReceiptRulePositionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  SetReceiptRulePositionResponsePrivate
 *
 * @brief  Private implementation for SetReceiptRulePositionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new SetReceiptRulePositionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public SetReceiptRulePositionResponse instance.
 */
SetReceiptRulePositionResponsePrivate::SetReceiptRulePositionResponsePrivate(
    SetReceiptRulePositionResponse * const q) : SESResponsePrivate(q)
{

}

/**
 * @brief  Parse an SES SetReceiptRulePositionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void SetReceiptRulePositionResponsePrivate::SetReceiptRulePositionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SetReceiptRulePositionResponse"));
    /// @todo
}

} // namespace SES
} // namespace QtAws
