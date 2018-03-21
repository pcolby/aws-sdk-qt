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

#include "terminateworkspacesresponse.h"
#include "terminateworkspacesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WorkSpaces {

/**
 * @class  TerminateWorkspacesResponse
 *
 * @brief  Handles WorkSpaces TerminateWorkspaces responses.
 *
 * @see    WorkSpacesClient::terminateWorkspaces
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
TerminateWorkspacesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesResponse(new TerminateWorkspacesResponsePrivate(this), parent)
{
    setRequest(new TerminateWorkspacesRequest(request));
    setReply(reply);
}

const TerminateWorkspacesRequest * TerminateWorkspacesResponse::request() const
{
    Q_D(const TerminateWorkspacesResponse);
    return static_cast<const TerminateWorkspacesRequest *>(d->request);
}

/**
 * @brief  Parse a WorkSpaces TerminateWorkspaces response.
 *
 * @param  response  Response to parse.
 */
void TerminateWorkspacesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  TerminateWorkspacesResponsePrivate
 *
 * @brief  Private implementation for TerminateWorkspacesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new TerminateWorkspacesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public TerminateWorkspacesResponse instance.
 */
TerminateWorkspacesResponsePrivate::TerminateWorkspacesResponsePrivate(
    TerminateWorkspacesQueueResponse * const q) : TerminateWorkspacesPrivate(q)
{

}

/**
 * @brief  Parse an WorkSpaces TerminateWorkspacesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void TerminateWorkspacesResponsePrivate::TerminateWorkspacesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("TerminateWorkspacesResponse"));
    /// @todo
}

} // namespace WorkSpaces
} // namespace AWS
