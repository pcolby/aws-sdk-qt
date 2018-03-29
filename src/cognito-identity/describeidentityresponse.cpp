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

#include "describeidentityresponse.h"
#include "describeidentityresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CognitoIdentity {

/**
 * @class  DescribeIdentityResponse
 *
 * @brief  Handles CognitoIdentity DescribeIdentity responses.
 *
 * @see    CognitoIdentityClient::describeIdentity
 */

/**
 * @brief  Constructs a new DescribeIdentityResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeIdentityResponse::DescribeIdentityResponse(
        const DescribeIdentityRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityResponse(new DescribeIdentityResponsePrivate(this), parent)
{
    setRequest(new DescribeIdentityRequest(request));
    setReply(reply);
}

const DescribeIdentityRequest * DescribeIdentityResponse::request() const
{
    Q_D(const DescribeIdentityResponse);
    return static_cast<const DescribeIdentityRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentity DescribeIdentity response.
 *
 * @param  response  Response to parse.
 */
void DescribeIdentityResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeIdentityResponsePrivate
 *
 * @brief  Private implementation for DescribeIdentityResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeIdentityResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeIdentityResponse instance.
 */
DescribeIdentityResponsePrivate::DescribeIdentityResponsePrivate(
    DescribeIdentityQueueResponse * const q) : DescribeIdentityPrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentity DescribeIdentityResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeIdentityResponsePrivate::DescribeIdentityResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeIdentityResponse"));
    /// @todo
}

} // namespace CognitoIdentity
} // namespace QtAws
