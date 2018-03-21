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

#include "rebootworkspacesresponse.h"
#include "rebootworkspacesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WorkSpaces {

/**
 * @class  RebootWorkspacesResponse
 *
 * @brief  Handles WorkSpaces RebootWorkspaces responses.
 *
 * @see    WorkSpacesClient::rebootWorkspaces
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RebootWorkspacesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesResponse(new RebootWorkspacesResponsePrivate(this), parent)
{
    setRequest(new RebootWorkspacesRequest(request));
    setReply(reply);
}

const RebootWorkspacesRequest * RebootWorkspacesResponse::request() const
{
    Q_D(const RebootWorkspacesResponse);
    return static_cast<const RebootWorkspacesRequest *>(d->request);
}

/**
 * @brief  Parse a WorkSpaces RebootWorkspaces response.
 *
 * @param  response  Response to parse.
 */
void RebootWorkspacesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RebootWorkspacesResponsePrivate
 *
 * @brief  Private implementation for RebootWorkspacesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RebootWorkspacesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RebootWorkspacesResponse instance.
 */
RebootWorkspacesResponsePrivate::RebootWorkspacesResponsePrivate(
    RebootWorkspacesQueueResponse * const q) : RebootWorkspacesPrivate(q)
{

}

/**
 * @brief  Parse an WorkSpaces RebootWorkspacesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RebootWorkspacesResponsePrivate::RebootWorkspacesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RebootWorkspacesResponse"));
    /// @todo
}
