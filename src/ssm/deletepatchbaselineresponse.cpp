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

#include "deletepatchbaselineresponse.h"
#include "deletepatchbaselineresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSM {

/**
 * @class  DeletePatchBaselineResponse
 *
 * @brief  Handles SSM DeletePatchBaseline responses.
 *
 * @see    SSMClient::deletePatchBaseline
 */

/**
 * @brief  Constructs a new DeletePatchBaselineResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeletePatchBaselineResponse::DeletePatchBaselineResponse(
        const DeletePatchBaselineRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new DeletePatchBaselineResponsePrivate(this), parent)
{
    setRequest(new DeletePatchBaselineRequest(request));
    setReply(reply);
}

const DeletePatchBaselineRequest * DeletePatchBaselineResponse::request() const
{
    Q_D(const DeletePatchBaselineResponse);
    return static_cast<const DeletePatchBaselineRequest *>(d->request);
}

/**
 * @brief  Parse a SSM DeletePatchBaseline response.
 *
 * @param  response  Response to parse.
 */
void DeletePatchBaselineResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeletePatchBaselineResponsePrivate
 *
 * @brief  Private implementation for DeletePatchBaselineResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeletePatchBaselineResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeletePatchBaselineResponse instance.
 */
DeletePatchBaselineResponsePrivate::DeletePatchBaselineResponsePrivate(
    DeletePatchBaselineQueueResponse * const q) : DeletePatchBaselinePrivate(q)
{

}

/**
 * @brief  Parse an SSM DeletePatchBaselineResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeletePatchBaselineResponsePrivate::DeletePatchBaselineResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeletePatchBaselineResponse"));
    /// @todo
}

} // namespace SSM
} // namespace QtAws
