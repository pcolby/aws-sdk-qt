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

#include "createreceiptrulesetresponse.h"
#include "createreceiptrulesetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SES {

/**
 * @class  CreateReceiptRuleSetResponse
 *
 * @brief  Handles SES CreateReceiptRuleSet responses.
 *
 * @see    SESClient::createReceiptRuleSet
 */

/**
 * @brief  Constructs a new CreateReceiptRuleSetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateReceiptRuleSetResponse::CreateReceiptRuleSetResponse(
        const CreateReceiptRuleSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESResponse(new CreateReceiptRuleSetResponsePrivate(this), parent)
{
    setRequest(new CreateReceiptRuleSetRequest(request));
    setReply(reply);
}

const CreateReceiptRuleSetRequest * CreateReceiptRuleSetResponse::request() const
{
    Q_D(const CreateReceiptRuleSetResponse);
    return static_cast<const CreateReceiptRuleSetRequest *>(d->request);
}

/**
 * @brief  Parse a SES CreateReceiptRuleSet response.
 *
 * @param  response  Response to parse.
 */
void CreateReceiptRuleSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateReceiptRuleSetResponsePrivate
 *
 * @brief  Private implementation for CreateReceiptRuleSetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateReceiptRuleSetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateReceiptRuleSetResponse instance.
 */
CreateReceiptRuleSetResponsePrivate::CreateReceiptRuleSetResponsePrivate(
    CreateReceiptRuleSetResponse * const q) : SESResponsePrivate(q)
{

}

/**
 * @brief  Parse an SES CreateReceiptRuleSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateReceiptRuleSetResponsePrivate::CreateReceiptRuleSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateReceiptRuleSetResponse"));
    /// @todo
}

} // namespace SES
} // namespace QtAws
