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

#include "describecompliancebyconfigruleresponse.h"
#include "describecompliancebyconfigruleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConfigService {

/**
 * @class  DescribeComplianceByConfigRuleResponse
 *
 * @brief  Handles ConfigService DescribeComplianceByConfigRule responses.
 *
 * @see    ConfigServiceClient::describeComplianceByConfigRule
 */

/**
 * @brief  Constructs a new DescribeComplianceByConfigRuleResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeComplianceByConfigRuleResponse::DescribeComplianceByConfigRuleResponse(
        const DescribeComplianceByConfigRuleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConfigServiceResponse(new DescribeComplianceByConfigRuleResponsePrivate(this), parent)
{
    setRequest(new DescribeComplianceByConfigRuleRequest(request));
    setReply(reply);
}

const DescribeComplianceByConfigRuleRequest * DescribeComplianceByConfigRuleResponse::request() const
{
    Q_D(const DescribeComplianceByConfigRuleResponse);
    return static_cast<const DescribeComplianceByConfigRuleRequest *>(d->request);
}

/**
 * @brief  Parse a ConfigService DescribeComplianceByConfigRule response.
 *
 * @param  response  Response to parse.
 */
void DescribeComplianceByConfigRuleResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeComplianceByConfigRuleResponsePrivate
 *
 * @brief  Private implementation for DescribeComplianceByConfigRuleResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeComplianceByConfigRuleResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeComplianceByConfigRuleResponse instance.
 */
DescribeComplianceByConfigRuleResponsePrivate::DescribeComplianceByConfigRuleResponsePrivate(
    DescribeComplianceByConfigRuleResponse * const q) : ConfigServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an ConfigService DescribeComplianceByConfigRuleResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeComplianceByConfigRuleResponsePrivate::DescribeComplianceByConfigRuleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeComplianceByConfigRuleResponse"));
    /// @todo
}

} // namespace ConfigService
} // namespace QtAws
