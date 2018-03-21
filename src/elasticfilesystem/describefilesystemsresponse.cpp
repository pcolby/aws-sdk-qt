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

#include "describefilesystemsresponse.h"
#include "describefilesystemsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace EFS {

/**
 * @class  DescribeFileSystemsResponse
 *
 * @brief  Handles EFS DescribeFileSystems responses.
 *
 * @see    EFSClient::describeFileSystems
 */

/**
 * @brief  Constructs a new DescribeFileSystemsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeFileSystemsResponse::DescribeFileSystemsResponse(
        const DescribeFileSystemsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EFSResponse(new DescribeFileSystemsResponsePrivate(this), parent)
{
    setRequest(new DescribeFileSystemsRequest(request));
    setReply(reply);
}

const DescribeFileSystemsRequest * DescribeFileSystemsResponse::request() const
{
    Q_D(const DescribeFileSystemsResponse);
    return static_cast<const DescribeFileSystemsRequest *>(d->request);
}

/**
 * @brief  Parse a EFS DescribeFileSystems response.
 *
 * @param  response  Response to parse.
 */
void DescribeFileSystemsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeFileSystemsResponsePrivate
 *
 * @brief  Private implementation for DescribeFileSystemsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeFileSystemsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeFileSystemsResponse instance.
 */
DescribeFileSystemsResponsePrivate::DescribeFileSystemsResponsePrivate(
    DescribeFileSystemsQueueResponse * const q) : DescribeFileSystemsPrivate(q)
{

}

/**
 * @brief  Parse an EFS DescribeFileSystemsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeFileSystemsResponsePrivate::DescribeFileSystemsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeFileSystemsResponse"));
    /// @todo
}

} // namespace EFS
} // namespace AWS
