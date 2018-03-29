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

#include "describeuserpoolresponse.h"
#include "describeuserpoolresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/**
 * @class  DescribeUserPoolResponse
 *
 * @brief  Handles CognitoIdentityProvider DescribeUserPool responses.
 *
 * @see    CognitoIdentityProviderClient::describeUserPool
 */

/**
 * @brief  Constructs a new DescribeUserPoolResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeUserPoolResponse::DescribeUserPoolResponse(
        const DescribeUserPoolRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new DescribeUserPoolResponsePrivate(this), parent)
{
    setRequest(new DescribeUserPoolRequest(request));
    setReply(reply);
}

const DescribeUserPoolRequest * DescribeUserPoolResponse::request() const
{
    Q_D(const DescribeUserPoolResponse);
    return static_cast<const DescribeUserPoolRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider DescribeUserPool response.
 *
 * @param  response  Response to parse.
 */
void DescribeUserPoolResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeUserPoolResponsePrivate
 *
 * @brief  Private implementation for DescribeUserPoolResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeUserPoolResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeUserPoolResponse instance.
 */
DescribeUserPoolResponsePrivate::DescribeUserPoolResponsePrivate(
    DescribeUserPoolResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider DescribeUserPoolResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeUserPoolResponsePrivate::DescribeUserPoolResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeUserPoolResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
