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

#include "describepatchgroupsresponse.h"
#include "describepatchgroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SSM {

/**
 * @class  DescribePatchGroupsResponse
 *
 * @brief  Handles SSM DescribePatchGroups responses.
 *
 * @see    SSMClient::describePatchGroups
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribePatchGroupsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new DescribePatchGroupsResponsePrivate(this), parent)
{
    setRequest(new DescribePatchGroupsRequest(request));
    setReply(reply);
}

const DescribePatchGroupsRequest * DescribePatchGroupsResponse::request() const
{
    Q_D(const DescribePatchGroupsResponse);
    return static_cast<const DescribePatchGroupsRequest *>(d->request);
}

/**
 * @brief  Parse a SSM DescribePatchGroups response.
 *
 * @param  response  Response to parse.
 */
void DescribePatchGroupsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribePatchGroupsResponsePrivate
 *
 * @brief  Private implementation for DescribePatchGroupsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribePatchGroupsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribePatchGroupsResponse instance.
 */
DescribePatchGroupsResponsePrivate::DescribePatchGroupsResponsePrivate(
    DescribePatchGroupsQueueResponse * const q) : DescribePatchGroupsPrivate(q)
{

}

/**
 * @brief  Parse an SSM DescribePatchGroupsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribePatchGroupsResponsePrivate::DescribePatchGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribePatchGroupsResponse"));
    /// @todo
}
