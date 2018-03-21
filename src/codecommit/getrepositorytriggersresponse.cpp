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

#include "getrepositorytriggersresponse.h"
#include "getrepositorytriggersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CodeCommit {

/**
 * @class  GetRepositoryTriggersResponse
 *
 * @brief  Handles CodeCommit GetRepositoryTriggers responses.
 *
 * @see    CodeCommitClient::getRepositoryTriggers
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetRepositoryTriggersResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeCommitResponse(new GetRepositoryTriggersResponsePrivate(this), parent)
{
    setRequest(new GetRepositoryTriggersRequest(request));
    setReply(reply);
}

const GetRepositoryTriggersRequest * GetRepositoryTriggersResponse::request() const
{
    Q_D(const GetRepositoryTriggersResponse);
    return static_cast<const GetRepositoryTriggersRequest *>(d->request);
}

/**
 * @brief  Parse a CodeCommit GetRepositoryTriggers response.
 *
 * @param  response  Response to parse.
 */
void GetRepositoryTriggersResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetRepositoryTriggersResponsePrivate
 *
 * @brief  Private implementation for GetRepositoryTriggersResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetRepositoryTriggersResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetRepositoryTriggersResponse instance.
 */
GetRepositoryTriggersResponsePrivate::GetRepositoryTriggersResponsePrivate(
    GetRepositoryTriggersQueueResponse * const q) : GetRepositoryTriggersPrivate(q)
{

}

/**
 * @brief  Parse an CodeCommit GetRepositoryTriggersResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetRepositoryTriggersResponsePrivate::GetRepositoryTriggersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRepositoryTriggersResponse"));
    /// @todo
}
