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

#include "deletereceiptruleresponse.h"
#include "deletereceiptruleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SES {

/**
 * @class  DeleteReceiptRuleResponse
 *
 * @brief  Handles SES DeleteReceiptRule responses.
 *
 * @see    SESClient::deleteReceiptRule
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteReceiptRuleResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESResponse(new DeleteReceiptRuleResponsePrivate(this), parent)
{
    setRequest(new DeleteReceiptRuleRequest(request));
    setReply(reply);
}

const DeleteReceiptRuleRequest * DeleteReceiptRuleResponse::request() const
{
    Q_D(const DeleteReceiptRuleResponse);
    return static_cast<const DeleteReceiptRuleRequest *>(d->request);
}

/**
 * @brief  Parse a SES DeleteReceiptRule response.
 *
 * @param  response  Response to parse.
 */
void DeleteReceiptRuleResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteReceiptRuleResponsePrivate
 *
 * @brief  Private implementation for DeleteReceiptRuleResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteReceiptRuleResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteReceiptRuleResponse instance.
 */
DeleteReceiptRuleResponsePrivate::DeleteReceiptRuleResponsePrivate(
    DeleteReceiptRuleQueueResponse * const q) : DeleteReceiptRulePrivate(q)
{

}

/**
 * @brief  Parse an SES DeleteReceiptRuleResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteReceiptRuleResponsePrivate::DeleteReceiptRuleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteReceiptRuleResponse"));
    /// @todo
}

} // namespace SES
} // namespace AWS
