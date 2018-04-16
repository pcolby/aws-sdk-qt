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

#include "describeuserpooldomainresponse.h"
#include "describeuserpooldomainresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentityProvider {

/*!
 * \class QtAws::CognitoIdentityProvider::DescribeUserPoolDomainResponse
 *
 * \brief The DescribeUserPoolDomainResponse class provides an interace for CognitoIdentityProvider DescribeUserPoolDomain responses.
 *
 * \ingroup CognitoIdentityProvider
 *
 *  Using the Amazon Cognito User Pools API, you can create a user pool to manage directories and users. You can
 *  authenticate a user to obtain tokens related to user identity and access
 * 
 *  policies>
 * 
 *  This API reference provides information about user pools in Amazon Cognito User
 * 
 *  Pools>
 * 
 *  For more information, see the Amazon Cognito
 *
 * \sa CognitoIdentityProviderClient::describeUserPoolDomain
 */

/*!
 * @brief  Constructs a new DescribeUserPoolDomainResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeUserPoolDomainResponse::DescribeUserPoolDomainResponse(
        const DescribeUserPoolDomainRequest &request,
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

/*!
 * @brief  Parse a CognitoIdentityProvider DescribeUserPoolDomain response.
 *
 * @param  response  Response to parse.
 */
void DescribeUserPoolDomainResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeUserPoolDomainResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DescribeUserPoolDomainResponsePrivate
 *
 * \brief Private implementation for DescribeUserPoolDomainResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeUserPoolDomainResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeUserPoolDomainResponse instance.
 */
DescribeUserPoolDomainResponsePrivate::DescribeUserPoolDomainResponsePrivate(
    DescribeUserPoolDomainResponse * const q) : CognitoIdentityProviderResponsePrivate(q)
{

}

/*!
 * @brief  Parse an CognitoIdentityProvider DescribeUserPoolDomainResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeUserPoolDomainResponsePrivate::parseDescribeUserPoolDomainResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeUserPoolDomainResponse"));
    /// @todo
}

} // namespace CognitoIdentityProvider
} // namespace QtAws
