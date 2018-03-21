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

#include "deletestacksetresponse.h"
#include "deletestacksetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudFormation {

/**
 * @class  DeleteStackSetResponse
 *
 * @brief  Handles CloudFormation DeleteStackSet responses.
 *
 * @see    CloudFormationClient::deleteStackSet
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteStackSetResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudFormationResponse(new DeleteStackSetResponsePrivate(this), parent)
{
    setRequest(new DeleteStackSetRequest(request));
    setReply(reply);
}

const DeleteStackSetRequest * DeleteStackSetResponse::request() const
{
    Q_D(const DeleteStackSetResponse);
    return static_cast<const DeleteStackSetRequest *>(d->request);
}

/**
 * @brief  Parse a CloudFormation DeleteStackSet response.
 *
 * @param  response  Response to parse.
 */
void DeleteStackSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteStackSetResponsePrivate
 *
 * @brief  Private implementation for DeleteStackSetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteStackSetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteStackSetResponse instance.
 */
DeleteStackSetResponsePrivate::DeleteStackSetResponsePrivate(
    DeleteStackSetQueueResponse * const q) : DeleteStackSetPrivate(q)
{

}

/**
 * @brief  Parse an CloudFormation DeleteStackSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteStackSetResponsePrivate::DeleteStackSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteStackSetResponse"));
    /// @todo
}
