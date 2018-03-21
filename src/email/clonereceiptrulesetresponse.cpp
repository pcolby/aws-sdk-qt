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

#include "clonereceiptrulesetresponse.h"
#include "clonereceiptrulesetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SES {

/**
 * @class  CloneReceiptRuleSetResponse
 *
 * @brief  Handles SES CloneReceiptRuleSet responses.
 *
 * @see    SESClient::cloneReceiptRuleSet
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CloneReceiptRuleSetResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESResponse(new CloneReceiptRuleSetResponsePrivate(this), parent)
{
    setRequest(new CloneReceiptRuleSetRequest(request));
    setReply(reply);
}

const CloneReceiptRuleSetRequest * CloneReceiptRuleSetResponse::request() const
{
    Q_D(const CloneReceiptRuleSetResponse);
    return static_cast<const CloneReceiptRuleSetRequest *>(d->request);
}

/**
 * @brief  Parse a SES CloneReceiptRuleSet response.
 *
 * @param  response  Response to parse.
 */
void CloneReceiptRuleSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CloneReceiptRuleSetResponsePrivate
 *
 * @brief  Private implementation for CloneReceiptRuleSetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CloneReceiptRuleSetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CloneReceiptRuleSetResponse instance.
 */
CloneReceiptRuleSetResponsePrivate::CloneReceiptRuleSetResponsePrivate(
    CloneReceiptRuleSetQueueResponse * const q) : CloneReceiptRuleSetPrivate(q)
{

}

/**
 * @brief  Parse an SES CloneReceiptRuleSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CloneReceiptRuleSetResponsePrivate::CloneReceiptRuleSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CloneReceiptRuleSetResponse"));
    /// @todo
}

} // namespace SES
} // namespace AWS
