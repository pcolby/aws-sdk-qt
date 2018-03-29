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

#include "describecacheresponse.h"
#include "describecacheresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace StorageGateway {

/**
 * @class  DescribeCacheResponse
 *
 * @brief  Handles StorageGateway DescribeCache responses.
 *
 * @see    StorageGatewayClient::describeCache
 */

/**
 * @brief  Constructs a new DescribeCacheResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeCacheResponse::DescribeCacheResponse(
        const DescribeCacheRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StorageGatewayResponse(new DescribeCacheResponsePrivate(this), parent)
{
    setRequest(new DescribeCacheRequest(request));
    setReply(reply);
}

const DescribeCacheRequest * DescribeCacheResponse::request() const
{
    Q_D(const DescribeCacheResponse);
    return static_cast<const DescribeCacheRequest *>(d->request);
}

/**
 * @brief  Parse a StorageGateway DescribeCache response.
 *
 * @param  response  Response to parse.
 */
void DescribeCacheResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeCacheResponsePrivate
 *
 * @brief  Private implementation for DescribeCacheResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeCacheResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeCacheResponse instance.
 */
DescribeCacheResponsePrivate::DescribeCacheResponsePrivate(
    DescribeCacheResponse * const q) : StorageGatewayResponsePrivate(q)
{

}

/**
 * @brief  Parse an StorageGateway DescribeCacheResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeCacheResponsePrivate::DescribeCacheResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeCacheResponse"));
    /// @todo
}

} // namespace StorageGateway
} // namespace QtAws
