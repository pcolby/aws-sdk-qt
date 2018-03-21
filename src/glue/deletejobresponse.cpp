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

#include "deletejobresponse.h"
#include "deletejobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Glue {

/**
 * @class  DeleteJobResponse
 *
 * @brief  Handles Glue DeleteJob responses.
 *
 * @see    GlueClient::deleteJob
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteJobResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GlueResponse(new DeleteJobResponsePrivate(this), parent)
{
    setRequest(new DeleteJobRequest(request));
    setReply(reply);
}

const DeleteJobRequest * DeleteJobResponse::request() const
{
    Q_D(const DeleteJobResponse);
    return static_cast<const DeleteJobRequest *>(d->request);
}

/**
 * @brief  Parse a Glue DeleteJob response.
 *
 * @param  response  Response to parse.
 */
void DeleteJobResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteJobResponsePrivate
 *
 * @brief  Private implementation for DeleteJobResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteJobResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteJobResponse instance.
 */
DeleteJobResponsePrivate::DeleteJobResponsePrivate(
    DeleteJobQueueResponse * const q) : DeleteJobPrivate(q)
{

}

/**
 * @brief  Parse an Glue DeleteJobResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteJobResponsePrivate::DeleteJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteJobResponse"));
    /// @todo
}
