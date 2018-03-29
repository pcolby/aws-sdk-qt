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

#include "describeuserpoolclientresponse.h"
#include "describeuserpoolclientresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  DescribeUserPoolClientResponse
 *
 * @brief  Handles CognitoIdentityProvider DescribeUserPoolClient responses.
 *
 * @see    CognitoIdentityProviderClient::describeUserPoolClient
 */

/**
 * @brief  Constructs a new DescribeUserPoolClientResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeUserPoolClientResponse::DescribeUserPoolClientResponse(
        const DescribeUserPoolClientRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new DescribeUserPoolClientResponsePrivate(this), parent)
{
    setRequest(new DescribeUserPoolClientRequest(request));
    setReply(reply);
}

const DescribeUserPoolClientRequest * DescribeUserPoolClientResponse::request() const
{
    Q_D(const DescribeUserPoolClientResponse);
    return static_cast<const DescribeUserPoolClientRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider DescribeUserPoolClient response.
 *
 * @param  response  Response to parse.
 */
void DescribeUserPoolClientResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeUserPoolClientResponsePrivate
 *
 * @brief  Private implementation for DescribeUserPoolClientResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeUserPoolClientResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeUserPoolClientResponse instance.
 */
DescribeUserPoolClientResponsePrivate::DescribeUserPoolClientResponsePrivate(
    DescribeUserPoolClientQueueResponse * const q) : DescribeUserPoolClientPrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider DescribeUserPoolClientResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeUserPoolClientResponsePrivate::DescribeUserPoolClientResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeUserPoolClientResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace AWS
