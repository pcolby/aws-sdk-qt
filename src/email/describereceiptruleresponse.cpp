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

#include "describereceiptruleresponse.h"
#include "describereceiptruleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SES {

/**
 * @class  DescribeReceiptRuleResponse
 *
 * @brief  Handles SES DescribeReceiptRule responses.
 *
 * @see    SESClient::describeReceiptRule
 */

/**
 * @brief  Constructs a new DescribeReceiptRuleResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeReceiptRuleResponse::DescribeReceiptRuleResponse(
        const DescribeReceiptRuleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DescribeReceiptRuleResponse(new DescribeReceiptRuleResponsePrivate(this), parent)
{
    setRequest(new DescribeReceiptRuleRequest(request));
    setReply(reply);
}

const DescribeReceiptRuleRequest * DescribeReceiptRuleResponse::request() const
{
    Q_D(const DescribeReceiptRuleResponse);
    return static_cast<const DescribeReceiptRuleRequest *>(d->request);
}

/**
 * @brief  Parse a SES DescribeReceiptRule response.
 *
 * @param  response  Response to parse.
 */
void DescribeReceiptRuleResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeReceiptRuleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeReceiptRuleResponsePrivate
 *
 * @brief  Private implementation for DescribeReceiptRuleResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeReceiptRuleResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeReceiptRuleResponse instance.
 */
DescribeReceiptRuleResponsePrivate::DescribeReceiptRuleResponsePrivate(
    DescribeReceiptRuleResponse * const q) : SESResponsePrivate(q)
{

}

/**
 * @brief  Parse an SES DescribeReceiptRuleResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeReceiptRuleResponsePrivate::parseDescribeReceiptRuleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeReceiptRuleResponse"));
    /// @todo
}

} // namespace SES
} // namespace QtAws
