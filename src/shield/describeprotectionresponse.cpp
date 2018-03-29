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

#include "describeprotectionresponse.h"
#include "describeprotectionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Shield {

/**
 * @class  DescribeProtectionResponse
 *
 * @brief  Handles Shield DescribeProtection responses.
 *
 * @see    ShieldClient::describeProtection
 */

/**
 * @brief  Constructs a new DescribeProtectionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeProtectionResponse::DescribeProtectionResponse(
        const DescribeProtectionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ShieldResponse(new DescribeProtectionResponsePrivate(this), parent)
{
    setRequest(new DescribeProtectionRequest(request));
    setReply(reply);
}

const DescribeProtectionRequest * DescribeProtectionResponse::request() const
{
    Q_D(const DescribeProtectionResponse);
    return static_cast<const DescribeProtectionRequest *>(d->request);
}

/**
 * @brief  Parse a Shield DescribeProtection response.
 *
 * @param  response  Response to parse.
 */
void DescribeProtectionResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeProtectionResponsePrivate
 *
 * @brief  Private implementation for DescribeProtectionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeProtectionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeProtectionResponse instance.
 */
DescribeProtectionResponsePrivate::DescribeProtectionResponsePrivate(
    DescribeProtectionQueueResponse * const q) : DescribeProtectionPrivate(q)
{

}

/**
 * @brief  Parse an Shield DescribeProtectionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeProtectionResponsePrivate::DescribeProtectionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeProtectionResponse"));
    /// @todo
}

} // namespace Shield
} // namespace AWS
