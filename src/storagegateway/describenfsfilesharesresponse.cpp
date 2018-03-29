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

#include "describenfsfilesharesresponse.h"
#include "describenfsfilesharesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace StorageGateway {

/**
 * @class  DescribeNFSFileSharesResponse
 *
 * @brief  Handles StorageGateway DescribeNFSFileShares responses.
 *
 * @see    StorageGatewayClient::describeNFSFileShares
 */

/**
 * @brief  Constructs a new DescribeNFSFileSharesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeNFSFileSharesResponse::DescribeNFSFileSharesResponse(
        const DescribeNFSFileSharesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StorageGatewayResponse(new DescribeNFSFileSharesResponsePrivate(this), parent)
{
    setRequest(new DescribeNFSFileSharesRequest(request));
    setReply(reply);
}

const DescribeNFSFileSharesRequest * DescribeNFSFileSharesResponse::request() const
{
    Q_D(const DescribeNFSFileSharesResponse);
    return static_cast<const DescribeNFSFileSharesRequest *>(d->request);
}

/**
 * @brief  Parse a StorageGateway DescribeNFSFileShares response.
 *
 * @param  response  Response to parse.
 */
void DescribeNFSFileSharesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeNFSFileSharesResponsePrivate
 *
 * @brief  Private implementation for DescribeNFSFileSharesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeNFSFileSharesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeNFSFileSharesResponse instance.
 */
DescribeNFSFileSharesResponsePrivate::DescribeNFSFileSharesResponsePrivate(
    DescribeNFSFileSharesQueueResponse * const q) : DescribeNFSFileSharesPrivate(q)
{

}

/**
 * @brief  Parse an StorageGateway DescribeNFSFileSharesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeNFSFileSharesResponsePrivate::DescribeNFSFileSharesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeNFSFileSharesResponse"));
    /// @todo
}

} // namespace StorageGateway
} // namespace QtAws
