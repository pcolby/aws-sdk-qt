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

#include "describeconfigrulesresponse.h"
#include "describeconfigrulesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ConfigService {

/**
 * @class  DescribeConfigRulesResponse
 *
 * @brief  Handles ConfigService DescribeConfigRules responses.
 *
 * @see    ConfigServiceClient::describeConfigRules
 */

/**
 * @brief  Constructs a new DescribeConfigRulesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeConfigRulesResponse::DescribeConfigRulesResponse(
        const DescribeConfigRulesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DescribeConfigRulesResponse(new DescribeConfigRulesResponsePrivate(this), parent)
{
    setRequest(new DescribeConfigRulesRequest(request));
    setReply(reply);
}

const DescribeConfigRulesRequest * DescribeConfigRulesResponse::request() const
{
    Q_D(const DescribeConfigRulesResponse);
    return static_cast<const DescribeConfigRulesRequest *>(d->request);
}

/**
 * @brief  Parse a ConfigService DescribeConfigRules response.
 *
 * @param  response  Response to parse.
 */
void DescribeConfigRulesResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeConfigRulesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeConfigRulesResponsePrivate
 *
 * @brief  Private implementation for DescribeConfigRulesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeConfigRulesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeConfigRulesResponse instance.
 */
DescribeConfigRulesResponsePrivate::DescribeConfigRulesResponsePrivate(
    DescribeConfigRulesResponse * const q) : ConfigServiceResponsePrivate(q)
{

}

/**
 * @brief  Parse an ConfigService DescribeConfigRulesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeConfigRulesResponsePrivate::parseDescribeConfigRulesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeConfigRulesResponse"));
    /// @todo
}

} // namespace ConfigService
} // namespace QtAws
