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

#include "describegroupsresponse.h"
#include "describegroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WorkDocs {

/**
 * @class  DescribeGroupsResponse
 *
 * @brief  Handles WorkDocs DescribeGroups responses.
 *
 * @see    WorkDocsClient::describeGroups
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeGroupsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkDocsResponse(new DescribeGroupsResponsePrivate(this), parent)
{
    setRequest(new DescribeGroupsRequest(request));
    setReply(reply);
}

const DescribeGroupsRequest * DescribeGroupsResponse::request() const
{
    Q_D(const DescribeGroupsResponse);
    return static_cast<const DescribeGroupsRequest *>(d->request);
}

/**
 * @brief  Parse a WorkDocs DescribeGroups response.
 *
 * @param  response  Response to parse.
 */
void DescribeGroupsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeGroupsResponsePrivate
 *
 * @brief  Private implementation for DescribeGroupsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeGroupsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeGroupsResponse instance.
 */
DescribeGroupsResponsePrivate::DescribeGroupsResponsePrivate(
    DescribeGroupsQueueResponse * const q) : DescribeGroupsPrivate(q)
{

}

/**
 * @brief  Parse an WorkDocs DescribeGroupsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeGroupsResponsePrivate::DescribeGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeGroupsResponse"));
    /// @todo
}
