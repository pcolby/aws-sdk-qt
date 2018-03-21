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

#include "describeidentitypoolresponse.h"
#include "describeidentitypoolresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CognitoIdentity {

/**
 * @class  DescribeIdentityPoolResponse
 *
 * @brief  Handles CognitoIdentity DescribeIdentityPool responses.
 *
 * @see    CognitoIdentityClient::describeIdentityPool
 */

/**
 * @brief  Constructs a new DescribeIdentityPoolResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeIdentityPoolResponse::DescribeIdentityPoolResponse(
        const DescribeIdentityPoolRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CognitoIdentityResponse(new DescribeIdentityPoolResponsePrivate(this), parent)
{
    setRequest(new DescribeIdentityPoolRequest(request));
    setReply(reply);
}

const DescribeIdentityPoolRequest * DescribeIdentityPoolResponse::request() const
{
    Q_D(const DescribeIdentityPoolResponse);
    return static_cast<const DescribeIdentityPoolRequest *>(d->request);
}

/**
 * @brief  Parse a CognitoIdentity DescribeIdentityPool response.
 *
 * @param  response  Response to parse.
 */
void DescribeIdentityPoolResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeIdentityPoolResponsePrivate
 *
 * @brief  Private implementation for DescribeIdentityPoolResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeIdentityPoolResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeIdentityPoolResponse instance.
 */
DescribeIdentityPoolResponsePrivate::DescribeIdentityPoolResponsePrivate(
    DescribeIdentityPoolQueueResponse * const q) : DescribeIdentityPoolPrivate(q)
{

}

/**
 * @brief  Parse an CognitoIdentity DescribeIdentityPoolResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeIdentityPoolResponsePrivate::DescribeIdentityPoolResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeIdentityPoolResponse"));
    /// @todo
}

} // namespace CognitoIdentity
} // namespace AWS
