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

#include "deletenamedqueryresponse.h"
#include "deletenamedqueryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Athena {

/**
 * @class  DeleteNamedQueryResponse
 *
 * @brief  Handles Athena DeleteNamedQuery responses.
 *
 * @see    AthenaClient::deleteNamedQuery
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteNamedQueryResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AthenaResponse(new DeleteNamedQueryResponsePrivate(this), parent)
{
    setRequest(new DeleteNamedQueryRequest(request));
    setReply(reply);
}

const DeleteNamedQueryRequest * DeleteNamedQueryResponse::request() const
{
    Q_D(const DeleteNamedQueryResponse);
    return static_cast<const DeleteNamedQueryRequest *>(d->request);
}

/**
 * @brief  Parse a Athena DeleteNamedQuery response.
 *
 * @param  response  Response to parse.
 */
void DeleteNamedQueryResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteNamedQueryResponsePrivate
 *
 * @brief  Private implementation for DeleteNamedQueryResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteNamedQueryResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteNamedQueryResponse instance.
 */
DeleteNamedQueryResponsePrivate::DeleteNamedQueryResponsePrivate(
    DeleteNamedQueryQueueResponse * const q) : DeleteNamedQueryPrivate(q)
{

}

/**
 * @brief  Parse an Athena DeleteNamedQueryResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteNamedQueryResponsePrivate::DeleteNamedQueryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteNamedQueryResponse"));
    /// @todo
}
