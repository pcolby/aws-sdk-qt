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

#include "deregisterpatchbaselineforpatchgroupresponse.h"
#include "deregisterpatchbaselineforpatchgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSM {

/**
 * @class  DeregisterPatchBaselineForPatchGroupResponse
 *
 * @brief  Handles SSM DeregisterPatchBaselineForPatchGroup responses.
 *
 * @see    SSMClient::deregisterPatchBaselineForPatchGroup
 */

/**
 * @brief  Constructs a new DeregisterPatchBaselineForPatchGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeregisterPatchBaselineForPatchGroupResponse::DeregisterPatchBaselineForPatchGroupResponse(
        const DeregisterPatchBaselineForPatchGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new DeregisterPatchBaselineForPatchGroupResponsePrivate(this), parent)
{
    setRequest(new DeregisterPatchBaselineForPatchGroupRequest(request));
    setReply(reply);
}

const DeregisterPatchBaselineForPatchGroupRequest * DeregisterPatchBaselineForPatchGroupResponse::request() const
{
    Q_D(const DeregisterPatchBaselineForPatchGroupResponse);
    return static_cast<const DeregisterPatchBaselineForPatchGroupRequest *>(d->request);
}

/**
 * @brief  Parse a SSM DeregisterPatchBaselineForPatchGroup response.
 *
 * @param  response  Response to parse.
 */
void DeregisterPatchBaselineForPatchGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(DeregisterPatchBaselineForPatchGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeregisterPatchBaselineForPatchGroupResponsePrivate
 *
 * @brief  Private implementation for DeregisterPatchBaselineForPatchGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeregisterPatchBaselineForPatchGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeregisterPatchBaselineForPatchGroupResponse instance.
 */
DeregisterPatchBaselineForPatchGroupResponsePrivate::DeregisterPatchBaselineForPatchGroupResponsePrivate(
    DeregisterPatchBaselineForPatchGroupResponse * const q) : SSMResponsePrivate(q)
{

}

/**
 * @brief  Parse an SSM DeregisterPatchBaselineForPatchGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeregisterPatchBaselineForPatchGroupResponsePrivate::parseDeregisterPatchBaselineForPatchGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeregisterPatchBaselineForPatchGroupResponse"));
    /// @todo
}

} // namespace SSM
} // namespace QtAws
