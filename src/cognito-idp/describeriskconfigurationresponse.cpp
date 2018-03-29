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

#include "describeriskconfigurationresponse.h"
#include "describeriskconfigurationresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/**
 * @class  DescribeRiskConfigurationResponse
 *
 * @brief  Handles CognitoIdentityProvider DescribeRiskConfiguration responses.
 *
 * @see    CognitoIdentityProviderClient::describeRiskConfiguration
 */

/**
 * @brief  Constructs a new DescribeRiskConfigurationResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeRiskConfigurationResponse::DescribeRiskConfigurationResponse(
        const DescribeRiskConfigurationRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new DescribeRiskConfigurationResponsePrivate(this), parent)
{
    setRequest(new DescribeRiskConfigurationRequest(request));
    setReply(reply);
}

const DescribeRiskConfigurationRequest * DescribeRiskConfigurationResponse::request() const
{
    Q_D(const DescribeRiskConfigurationResponse);
    return static_cast<const DescribeRiskConfigurationRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider DescribeRiskConfiguration response.
 *
 * @param  response  Response to parse.
 */
void DescribeRiskConfigurationResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeRiskConfigurationResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeRiskConfigurationResponsePrivate
 *
 * @brief  Private implementation for DescribeRiskConfigurationResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeRiskConfigurationResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeRiskConfigurationResponse instance.
 */
DescribeRiskConfigurationResponsePrivate::DescribeRiskConfigurationResponsePrivate(
    DescribeRiskConfigurationResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider DescribeRiskConfigurationResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeRiskConfigurationResponsePrivate::DescribeRiskConfigurationResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeRiskConfigurationResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
