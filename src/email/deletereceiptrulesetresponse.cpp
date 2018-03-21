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

#include "deletereceiptrulesetresponse.h"
#include "deletereceiptrulesetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SES {

/**
 * @class  DeleteReceiptRuleSetResponse
 *
 * @brief  Handles SES DeleteReceiptRuleSet responses.
 *
 * @see    SESClient::deleteReceiptRuleSet
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteReceiptRuleSetResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESResponse(new DeleteReceiptRuleSetResponsePrivate(this), parent)
{
    setRequest(new DeleteReceiptRuleSetRequest(request));
    setReply(reply);
}

const DeleteReceiptRuleSetRequest * DeleteReceiptRuleSetResponse::request() const
{
    Q_D(const DeleteReceiptRuleSetResponse);
    return static_cast<const DeleteReceiptRuleSetRequest *>(d->request);
}

/**
 * @brief  Parse a SES DeleteReceiptRuleSet response.
 *
 * @param  response  Response to parse.
 */
void DeleteReceiptRuleSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteReceiptRuleSetResponsePrivate
 *
 * @brief  Private implementation for DeleteReceiptRuleSetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteReceiptRuleSetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteReceiptRuleSetResponse instance.
 */
DeleteReceiptRuleSetResponsePrivate::DeleteReceiptRuleSetResponsePrivate(
    DeleteReceiptRuleSetQueueResponse * const q) : DeleteReceiptRuleSetPrivate(q)
{

}

/**
 * @brief  Parse an SES DeleteReceiptRuleSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteReceiptRuleSetResponsePrivate::DeleteReceiptRuleSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteReceiptRuleSetResponse"));
    /// @todo
}

} // namespace SES
} // namespace AWS
