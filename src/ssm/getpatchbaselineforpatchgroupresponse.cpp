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

#include "getpatchbaselineforpatchgroupresponse.h"
#include "getpatchbaselineforpatchgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace SSM {

/**
 * @class  GetPatchBaselineForPatchGroupResponse
 *
 * @brief  Handles SSM GetPatchBaselineForPatchGroup responses.
 *
 * @see    SSMClient::getPatchBaselineForPatchGroup
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetPatchBaselineForPatchGroupResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new GetPatchBaselineForPatchGroupResponsePrivate(this), parent)
{
    setRequest(new GetPatchBaselineForPatchGroupRequest(request));
    setReply(reply);
}

const GetPatchBaselineForPatchGroupRequest * GetPatchBaselineForPatchGroupResponse::request() const
{
    Q_D(const GetPatchBaselineForPatchGroupResponse);
    return static_cast<const GetPatchBaselineForPatchGroupRequest *>(d->request);
}

/**
 * @brief  Parse a SSM GetPatchBaselineForPatchGroup response.
 *
 * @param  response  Response to parse.
 */
void GetPatchBaselineForPatchGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetPatchBaselineForPatchGroupResponsePrivate
 *
 * @brief  Private implementation for GetPatchBaselineForPatchGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetPatchBaselineForPatchGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetPatchBaselineForPatchGroupResponse instance.
 */
GetPatchBaselineForPatchGroupResponsePrivate::GetPatchBaselineForPatchGroupResponsePrivate(
    GetPatchBaselineForPatchGroupQueueResponse * const q) : GetPatchBaselineForPatchGroupPrivate(q)
{

}

/**
 * @brief  Parse an SSM GetPatchBaselineForPatchGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetPatchBaselineForPatchGroupResponsePrivate::GetPatchBaselineForPatchGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetPatchBaselineForPatchGroupResponse"));
    /// @todo
}
