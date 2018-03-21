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

#include "describeidentityproviderresponse.h"
#include "describeidentityproviderresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  DescribeIdentityProviderResponse
 *
 * @brief  Handles CognitoIdentityProvider DescribeIdentityProvider responses.
 *
 * @see    CognitoIdentityProviderClient::describeIdentityProvider
 */

/**
 * @brief  Constructs a new DescribeIdentityProviderResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeIdentityProviderResponse::DescribeIdentityProviderResponse(
        const DescribeIdentityProviderRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new DescribeIdentityProviderResponsePrivate(this), parent)
{
    setRequest(new DescribeIdentityProviderRequest(request));
    setReply(reply);
}

const DescribeIdentityProviderRequest * DescribeIdentityProviderResponse::request() const
{
    Q_D(const DescribeIdentityProviderResponse);
    return static_cast<const DescribeIdentityProviderRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider DescribeIdentityProvider response.
 *
 * @param  response  Response to parse.
 */
void DescribeIdentityProviderResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeIdentityProviderResponsePrivate
 *
 * @brief  Private implementation for DescribeIdentityProviderResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeIdentityProviderResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeIdentityProviderResponse instance.
 */
DescribeIdentityProviderResponsePrivate::DescribeIdentityProviderResponsePrivate(
    DescribeIdentityProviderQueueResponse * const q) : DescribeIdentityProviderPrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider DescribeIdentityProviderResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeIdentityProviderResponsePrivate::DescribeIdentityProviderResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeIdentityProviderResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace AWS
