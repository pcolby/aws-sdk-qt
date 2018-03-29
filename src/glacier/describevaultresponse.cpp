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

#include "describevaultresponse.h"
#include "describevaultresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Glacier {

/**
 * @class  DescribeVaultResponse
 *
 * @brief  Handles Glacier DescribeVault responses.
 *
 * @see    GlacierClient::describeVault
 */

/**
 * @brief  Constructs a new DescribeVaultResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeVaultResponse::DescribeVaultResponse(
        const DescribeVaultRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlacierResponse(new DescribeVaultResponsePrivate(this), parent)
{
    setRequest(new DescribeVaultRequest(request));
    setReply(reply);
}

const DescribeVaultRequest * DescribeVaultResponse::request() const
{
    Q_D(const DescribeVaultResponse);
    return static_cast<const DescribeVaultRequest *>(d->request);
}

/**
 * @brief  Parse a Glacier DescribeVault response.
 *
 * @param  response  Response to parse.
 */
void DescribeVaultResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeVaultResponsePrivate
 *
 * @brief  Private implementation for DescribeVaultResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeVaultResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeVaultResponse instance.
 */
DescribeVaultResponsePrivate::DescribeVaultResponsePrivate(
    DescribeVaultQueueResponse * const q) : DescribeVaultPrivate(q)
{

}

/**
 * @brief  Parse an Glacier DescribeVaultResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeVaultResponsePrivate::DescribeVaultResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeVaultResponse"));
    /// @todo
}

} // namespace Glacier
} // namespace AWS
