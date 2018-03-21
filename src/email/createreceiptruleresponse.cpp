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

#include "createreceiptruleresponse.h"
#include "createreceiptruleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SES {

/**
 * @class  CreateReceiptRuleResponse
 *
 * @brief  Handles SES CreateReceiptRule responses.
 *
 * @see    SESClient::createReceiptRule
 */

/**
 * @brief  Constructs a new CreateReceiptRuleResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateReceiptRuleResponse::CreateReceiptRuleResponse(
        const CreateReceiptRuleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESResponse(new CreateReceiptRuleResponsePrivate(this), parent)
{
    setRequest(new CreateReceiptRuleRequest(request));
    setReply(reply);
}

const CreateReceiptRuleRequest * CreateReceiptRuleResponse::request() const
{
    Q_D(const CreateReceiptRuleResponse);
    return static_cast<const CreateReceiptRuleRequest *>(d->request);
}

/**
 * @brief  Parse a SES CreateReceiptRule response.
 *
 * @param  response  Response to parse.
 */
void CreateReceiptRuleResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateReceiptRuleResponsePrivate
 *
 * @brief  Private implementation for CreateReceiptRuleResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateReceiptRuleResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateReceiptRuleResponse instance.
 */
CreateReceiptRuleResponsePrivate::CreateReceiptRuleResponsePrivate(
    CreateReceiptRuleQueueResponse * const q) : CreateReceiptRulePrivate(q)
{

}

/**
 * @brief  Parse an SES CreateReceiptRuleResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateReceiptRuleResponsePrivate::CreateReceiptRuleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateReceiptRuleResponse"));
    /// @todo
}

} // namespace SES
} // namespace AWS
