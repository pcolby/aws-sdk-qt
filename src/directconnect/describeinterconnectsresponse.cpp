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

#include "describeinterconnectsresponse.h"
#include "describeinterconnectsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace DirectConnect {

/**
 * @class  DescribeInterconnectsResponse
 *
 * @brief  Handles DirectConnect DescribeInterconnects responses.
 *
 * @see    DirectConnectClient::describeInterconnects
 */

/**
 * @brief  Constructs a new DescribeInterconnectsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeInterconnectsResponse::DescribeInterconnectsResponse(
        const DescribeInterconnectsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DirectConnectResponse(new DescribeInterconnectsResponsePrivate(this), parent)
{
    setRequest(new DescribeInterconnectsRequest(request));
    setReply(reply);
}

const DescribeInterconnectsRequest * DescribeInterconnectsResponse::request() const
{
    Q_D(const DescribeInterconnectsResponse);
    return static_cast<const DescribeInterconnectsRequest *>(d->request);
}

/**
 * @brief  Parse a DirectConnect DescribeInterconnects response.
 *
 * @param  response  Response to parse.
 */
void DescribeInterconnectsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeInterconnectsResponsePrivate
 *
 * @brief  Private implementation for DescribeInterconnectsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeInterconnectsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeInterconnectsResponse instance.
 */
DescribeInterconnectsResponsePrivate::DescribeInterconnectsResponsePrivate(
    DescribeInterconnectsQueueResponse * const q) : DescribeInterconnectsPrivate(q)
{

}

/**
 * @brief  Parse an DirectConnect DescribeInterconnectsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeInterconnectsResponsePrivate::DescribeInterconnectsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeInterconnectsResponse"));
    /// @todo
}

} // namespace DirectConnect
} // namespace AWS
