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

#include "deletereceiptrulesetresponse.h"
#include "deletereceiptrulesetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SES {

/**
 * @class  DeleteReceiptRuleSetResponse
 *
 * @brief  Handles SES DeleteReceiptRuleSet responses.
 *
 * @see    SESClient::deleteReceiptRuleSet
 */

/**
 * @brief  Constructs a new DeleteReceiptRuleSetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteReceiptRuleSetResponse::DeleteReceiptRuleSetResponse(
        const DeleteReceiptRuleSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DeleteReceiptRuleSetResponse(new DeleteReceiptRuleSetResponsePrivate(this), parent)
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
    Q_D(DeleteReceiptRuleSetResponse);
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
    DeleteReceiptRuleSetResponse * const q) : SESResponsePrivate(q)
{

}

/**
 * @brief  Parse an SES DeleteReceiptRuleSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteReceiptRuleSetResponsePrivate::parseDeleteReceiptRuleSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteReceiptRuleSetResponse"));
    /// @todo
}

} // namespace SES
} // namespace QtAws
