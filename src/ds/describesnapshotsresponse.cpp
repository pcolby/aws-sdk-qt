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

#include "describesnapshotsresponse.h"
#include "describesnapshotsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DirectoryService {

/**
 * @class  DescribeSnapshotsResponse
 *
 * @brief  Handles DirectoryService DescribeSnapshots responses.
 *
 * @see    DirectoryServiceClient::describeSnapshots
 */

/**
 * @brief  Constructs a new DescribeSnapshotsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeSnapshotsResponse::DescribeSnapshotsResponse(
        const DescribeSnapshotsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectoryServiceResponse(new DescribeSnapshotsResponsePrivate(this), parent)
{
    setRequest(new DescribeSnapshotsRequest(request));
    setReply(reply);
}

const DescribeSnapshotsRequest * DescribeSnapshotsResponse::request() const
{
    Q_D(const DescribeSnapshotsResponse);
    return static_cast<const DescribeSnapshotsRequest *>(d->request);
}

/**
 * @brief  Parse a DirectoryService DescribeSnapshots response.
 *
 * @param  response  Response to parse.
 */
void DescribeSnapshotsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeSnapshotsResponsePrivate
 *
 * @brief  Private implementation for DescribeSnapshotsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeSnapshotsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeSnapshotsResponse instance.
 */
DescribeSnapshotsResponsePrivate::DescribeSnapshotsResponsePrivate(
    DescribeSnapshotsQueueResponse * const q) : DescribeSnapshotsPrivate(q)
{

}

/**
 * @brief  Parse an DirectoryService DescribeSnapshotsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeSnapshotsResponsePrivate::DescribeSnapshotsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeSnapshotsResponse"));
    /// @todo
}

} // namespace DirectoryService
} // namespace QtAws
