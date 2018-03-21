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

#include "deletelabelsresponse.h"
#include "deletelabelsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WorkDocs {

/**
 * @class  DeleteLabelsResponse
 *
 * @brief  Handles WorkDocs DeleteLabels responses.
 *
 * @see    WorkDocsClient::deleteLabels
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteLabelsResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkDocsResponse(new DeleteLabelsResponsePrivate(this), parent)
{
    setRequest(new DeleteLabelsRequest(request));
    setReply(reply);
}

const DeleteLabelsRequest * DeleteLabelsResponse::request() const
{
    Q_D(const DeleteLabelsResponse);
    return static_cast<const DeleteLabelsRequest *>(d->request);
}

/**
 * @brief  Parse a WorkDocs DeleteLabels response.
 *
 * @param  response  Response to parse.
 */
void DeleteLabelsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteLabelsResponsePrivate
 *
 * @brief  Private implementation for DeleteLabelsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteLabelsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteLabelsResponse instance.
 */
DeleteLabelsResponsePrivate::DeleteLabelsResponsePrivate(
    DeleteLabelsQueueResponse * const q) : DeleteLabelsPrivate(q)
{

}

/**
 * @brief  Parse an WorkDocs DeleteLabelsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteLabelsResponsePrivate::DeleteLabelsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteLabelsResponse"));
    /// @todo
}
