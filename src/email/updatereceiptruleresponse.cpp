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

#include "updatereceiptruleresponse.h"
#include "updatereceiptruleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SES {

/**
 * @class  UpdateReceiptRuleResponse
 *
 * @brief  Handles SES UpdateReceiptRule responses.
 *
 * @see    SESClient::updateReceiptRule
 */

/**
 * @brief  Constructs a new UpdateReceiptRuleResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateReceiptRuleResponse::UpdateReceiptRuleResponse(
        const UpdateReceiptRuleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESResponse(new UpdateReceiptRuleResponsePrivate(this), parent)
{
    setRequest(new UpdateReceiptRuleRequest(request));
    setReply(reply);
}

const UpdateReceiptRuleRequest * UpdateReceiptRuleResponse::request() const
{
    Q_D(const UpdateReceiptRuleResponse);
    return static_cast<const UpdateReceiptRuleRequest *>(d->request);
}

/**
 * @brief  Parse a SES UpdateReceiptRule response.
 *
 * @param  response  Response to parse.
 */
void UpdateReceiptRuleResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateReceiptRuleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateReceiptRuleResponsePrivate
 *
 * @brief  Private implementation for UpdateReceiptRuleResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateReceiptRuleResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateReceiptRuleResponse instance.
 */
UpdateReceiptRuleResponsePrivate::UpdateReceiptRuleResponsePrivate(
    UpdateReceiptRuleResponse * const q) : SESResponsePrivate(q)
{

}

/**
 * @brief  Parse an SES UpdateReceiptRuleResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateReceiptRuleResponsePrivate::UpdateReceiptRuleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateReceiptRuleResponse"));
    /// @todo
}

} // namespace SES
} // namespace QtAws
