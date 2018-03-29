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

#include "describeactivereceiptrulesetresponse.h"
#include "describeactivereceiptrulesetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SES {

/**
 * @class  DescribeActiveReceiptRuleSetResponse
 *
 * @brief  Handles SES DescribeActiveReceiptRuleSet responses.
 *
 * @see    SESClient::describeActiveReceiptRuleSet
 */

/**
 * @brief  Constructs a new DescribeActiveReceiptRuleSetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeActiveReceiptRuleSetResponse::DescribeActiveReceiptRuleSetResponse(
        const DescribeActiveReceiptRuleSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SESResponse(new DescribeActiveReceiptRuleSetResponsePrivate(this), parent)
{
    setRequest(new DescribeActiveReceiptRuleSetRequest(request));
    setReply(reply);
}

const DescribeActiveReceiptRuleSetRequest * DescribeActiveReceiptRuleSetResponse::request() const
{
    Q_D(const DescribeActiveReceiptRuleSetResponse);
    return static_cast<const DescribeActiveReceiptRuleSetRequest *>(d->request);
}

/**
 * @brief  Parse a SES DescribeActiveReceiptRuleSet response.
 *
 * @param  response  Response to parse.
 */
void DescribeActiveReceiptRuleSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeActiveReceiptRuleSetResponsePrivate
 *
 * @brief  Private implementation for DescribeActiveReceiptRuleSetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeActiveReceiptRuleSetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeActiveReceiptRuleSetResponse instance.
 */
DescribeActiveReceiptRuleSetResponsePrivate::DescribeActiveReceiptRuleSetResponsePrivate(
    DescribeActiveReceiptRuleSetQueueResponse * const q) : DescribeActiveReceiptRuleSetPrivate(q)
{

}

/**
 * @brief  Parse an SES DescribeActiveReceiptRuleSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeActiveReceiptRuleSetResponsePrivate::DescribeActiveReceiptRuleSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeActiveReceiptRuleSetResponse"));
    /// @todo
}

} // namespace SES
} // namespace AWS
