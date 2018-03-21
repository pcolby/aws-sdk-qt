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

#include "listrepositoriesresponse.h"
#include "listrepositoriesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CodeCommit {

/**
 * @class  ListRepositoriesResponse
 *
 * @brief  Handles CodeCommit ListRepositories responses.
 *
 * @see    CodeCommitClient::listRepositories
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ListRepositoriesResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CodeCommitResponse(new ListRepositoriesResponsePrivate(this), parent)
{
    setRequest(new ListRepositoriesRequest(request));
    setReply(reply);
}

const ListRepositoriesRequest * ListRepositoriesResponse::request() const
{
    Q_D(const ListRepositoriesResponse);
    return static_cast<const ListRepositoriesRequest *>(d->request);
}

/**
 * @brief  Parse a CodeCommit ListRepositories response.
 *
 * @param  response  Response to parse.
 */
void ListRepositoriesResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  ListRepositoriesResponsePrivate
 *
 * @brief  Private implementation for ListRepositoriesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ListRepositoriesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ListRepositoriesResponse instance.
 */
ListRepositoriesResponsePrivate::ListRepositoriesResponsePrivate(
    ListRepositoriesQueueResponse * const q) : ListRepositoriesPrivate(q)
{

}

/**
 * @brief  Parse an CodeCommit ListRepositoriesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ListRepositoriesResponsePrivate::ListRepositoriesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListRepositoriesResponse"));
    /// @todo
}
