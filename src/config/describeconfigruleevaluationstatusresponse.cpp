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

#include "describeconfigruleevaluationstatusresponse.h"
#include "describeconfigruleevaluationstatusresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConfigService {

/**
 * @class  DescribeConfigRuleEvaluationStatusResponse
 *
 * @brief  Handles ConfigService DescribeConfigRuleEvaluationStatus responses.
 *
 * @see    ConfigServiceClient::describeConfigRuleEvaluationStatus
 */

/**
 * @brief  Constructs a new DescribeConfigRuleEvaluationStatusResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeConfigRuleEvaluationStatusResponse::DescribeConfigRuleEvaluationStatusResponse(
        const DescribeConfigRuleEvaluationStatusRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ConfigServiceResponse(new DescribeConfigRuleEvaluationStatusResponsePrivate(this), parent)
{
    setRequest(new DescribeConfigRuleEvaluationStatusRequest(request));
    setReply(reply);
}

const DescribeConfigRuleEvaluationStatusRequest * DescribeConfigRuleEvaluationStatusResponse::request() const
{
    Q_D(const DescribeConfigRuleEvaluationStatusResponse);
    return static_cast<const DescribeConfigRuleEvaluationStatusRequest *>(d->request);
}

/**
 * @brief  Parse a ConfigService DescribeConfigRuleEvaluationStatus response.
 *
 * @param  response  Response to parse.
 */
void DescribeConfigRuleEvaluationStatusResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeConfigRuleEvaluationStatusResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeConfigRuleEvaluationStatusResponsePrivate
 *
 * @brief  Private implementation for DescribeConfigRuleEvaluationStatusResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeConfigRuleEvaluationStatusResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeConfigRuleEvaluationStatusResponse instance.
 */
DescribeConfigRuleEvaluationStatusResponsePrivate::DescribeConfigRuleEvaluationStatusResponsePrivate(
    DescribeConfigRuleEvaluationStatusResponse * const q) : ConfigServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an ConfigService DescribeConfigRuleEvaluationStatusResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeConfigRuleEvaluationStatusResponsePrivate::DescribeConfigRuleEvaluationStatusResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeConfigRuleEvaluationStatusResponse"));
    /// @todo
}

} // namespace ConfigService
} // namespace QtAws
