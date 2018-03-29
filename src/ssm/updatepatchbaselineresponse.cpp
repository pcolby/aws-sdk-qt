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

#include "updatepatchbaselineresponse.h"
#include "updatepatchbaselineresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSM {

/**
 * @class  UpdatePatchBaselineResponse
 *
 * @brief  Handles SSM UpdatePatchBaseline responses.
 *
 * @see    SSMClient::updatePatchBaseline
 */

/**
 * @brief  Constructs a new UpdatePatchBaselineResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdatePatchBaselineResponse::UpdatePatchBaselineResponse(
        const UpdatePatchBaselineRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new UpdatePatchBaselineResponsePrivate(this), parent)
{
    setRequest(new UpdatePatchBaselineRequest(request));
    setReply(reply);
}

const UpdatePatchBaselineRequest * UpdatePatchBaselineResponse::request() const
{
    Q_D(const UpdatePatchBaselineResponse);
    return static_cast<const UpdatePatchBaselineRequest *>(d->request);
}

/**
 * @brief  Parse a SSM UpdatePatchBaseline response.
 *
 * @param  response  Response to parse.
 */
void UpdatePatchBaselineResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdatePatchBaselineResponsePrivate
 *
 * @brief  Private implementation for UpdatePatchBaselineResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdatePatchBaselineResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdatePatchBaselineResponse instance.
 */
UpdatePatchBaselineResponsePrivate::UpdatePatchBaselineResponsePrivate(
    UpdatePatchBaselineResponse * const q) : SSMResponsePrivate(q)
{

}

/**
 * @brief  Parse an SSM UpdatePatchBaselineResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdatePatchBaselineResponsePrivate::UpdatePatchBaselineResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdatePatchBaselineResponse"));
    /// @todo
}

} // namespace SSM
} // namespace QtAws
