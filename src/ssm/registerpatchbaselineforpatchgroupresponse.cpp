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

#include "registerpatchbaselineforpatchgroupresponse.h"
#include "registerpatchbaselineforpatchgroupresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSM {

/**
 * @class  RegisterPatchBaselineForPatchGroupResponse
 *
 * @brief  Handles SSM RegisterPatchBaselineForPatchGroup responses.
 *
 * @see    SSMClient::registerPatchBaselineForPatchGroup
 */

/**
 * @brief  Constructs a new RegisterPatchBaselineForPatchGroupResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RegisterPatchBaselineForPatchGroupResponse::RegisterPatchBaselineForPatchGroupResponse(
        const RegisterPatchBaselineForPatchGroupRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new RegisterPatchBaselineForPatchGroupResponsePrivate(this), parent)
{
    setRequest(new RegisterPatchBaselineForPatchGroupRequest(request));
    setReply(reply);
}

const RegisterPatchBaselineForPatchGroupRequest * RegisterPatchBaselineForPatchGroupResponse::request() const
{
    Q_D(const RegisterPatchBaselineForPatchGroupResponse);
    return static_cast<const RegisterPatchBaselineForPatchGroupRequest *>(d->request);
}

/**
 * @brief  Parse a SSM RegisterPatchBaselineForPatchGroup response.
 *
 * @param  response  Response to parse.
 */
void RegisterPatchBaselineForPatchGroupResponse::parseSuccess(QIODevice &response)
{
    Q_D(RegisterPatchBaselineForPatchGroupResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RegisterPatchBaselineForPatchGroupResponsePrivate
 *
 * @brief  Private implementation for RegisterPatchBaselineForPatchGroupResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RegisterPatchBaselineForPatchGroupResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RegisterPatchBaselineForPatchGroupResponse instance.
 */
RegisterPatchBaselineForPatchGroupResponsePrivate::RegisterPatchBaselineForPatchGroupResponsePrivate(
    RegisterPatchBaselineForPatchGroupResponse * const q) : SSMResponsePrivate(q)
{

}

/**
 * @brief  Parse an SSM RegisterPatchBaselineForPatchGroupResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RegisterPatchBaselineForPatchGroupResponsePrivate::RegisterPatchBaselineForPatchGroupResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RegisterPatchBaselineForPatchGroupResponse"));
    /// @todo
}

} // namespace SSM
} // namespace QtAws
