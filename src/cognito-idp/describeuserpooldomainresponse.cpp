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

#include "describeuserpooldomainresponse.h"
#include "describeuserpooldomainresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CognitoIdentityProvider {

/**
 * @class  DescribeUserPoolDomainResponse
 *
 * @brief  Handles CognitoIdentityProvider DescribeUserPoolDomain responses.
 *
 * @see    CognitoIdentityProviderClient::describeUserPoolDomain
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeUserPoolDomainResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityProviderResponse(new DescribeUserPoolDomainResponsePrivate(this), parent)
{
    setRequest(new DescribeUserPoolDomainRequest(request));
    setReply(reply);
}

const DescribeUserPoolDomainRequest * DescribeUserPoolDomainResponse::request() const
{
    Q_D(const DescribeUserPoolDomainResponse);
    return static_cast<const DescribeUserPoolDomainRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentityProvider DescribeUserPoolDomain response.
 *
 * @param  response  Response to parse.
 */
void DescribeUserPoolDomainResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeUserPoolDomainResponsePrivate
 *
 * @brief  Private implementation for DescribeUserPoolDomainResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeUserPoolDomainResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeUserPoolDomainResponse instance.
 */
DescribeUserPoolDomainResponsePrivate::DescribeUserPoolDomainResponsePrivate(
    DescribeUserPoolDomainQueueResponse * const q) : DescribeUserPoolDomainPrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentityProvider DescribeUserPoolDomainResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeUserPoolDomainResponsePrivate::DescribeUserPoolDomainResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeUserPoolDomainResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace AWS
