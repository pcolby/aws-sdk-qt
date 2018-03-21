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

#include "deletesizeconstraintsetresponse.h"
#include "deletesizeconstraintsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WAF {

/**
 * @class  DeleteSizeConstraintSetResponse
 *
 * @brief  Handles WAF DeleteSizeConstraintSet responses.
 *
 * @see    WAFClient::deleteSizeConstraintSet
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteSizeConstraintSetResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFResponse(new DeleteSizeConstraintSetResponsePrivate(this), parent)
{
    setRequest(new DeleteSizeConstraintSetRequest(request));
    setReply(reply);
}

const DeleteSizeConstraintSetRequest * DeleteSizeConstraintSetResponse::request() const
{
    Q_D(const DeleteSizeConstraintSetResponse);
    return static_cast<const DeleteSizeConstraintSetRequest *>(d->request);
}

/**
 * @brief  Parse a WAF DeleteSizeConstraintSet response.
 *
 * @param  response  Response to parse.
 */
void DeleteSizeConstraintSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteSizeConstraintSetResponsePrivate
 *
 * @brief  Private implementation for DeleteSizeConstraintSetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteSizeConstraintSetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteSizeConstraintSetResponse instance.
 */
DeleteSizeConstraintSetResponsePrivate::DeleteSizeConstraintSetResponsePrivate(
    DeleteSizeConstraintSetQueueResponse * const q) : DeleteSizeConstraintSetPrivate(q)
{

}

/**
 * @brief  Parse an WAF DeleteSizeConstraintSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteSizeConstraintSetResponsePrivate::DeleteSizeConstraintSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSizeConstraintSetResponse"));
    /// @todo
}

} // namespace WAF
} // namespace AWS
