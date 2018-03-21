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

#include "updatesizeconstraintsetresponse.h"
#include "updatesizeconstraintsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace WAF {

/**
 * @class  UpdateSizeConstraintSetResponse
 *
 * @brief  Handles WAF UpdateSizeConstraintSet responses.
 *
 * @see    WAFClient::updateSizeConstraintSet
 */

/**
 * @brief  Constructs a new UpdateSizeConstraintSetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateSizeConstraintSetResponse::UpdateSizeConstraintSetResponse(
        const UpdateSizeConstraintSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFResponse(new UpdateSizeConstraintSetResponsePrivate(this), parent)
{
    setRequest(new UpdateSizeConstraintSetRequest(request));
    setReply(reply);
}

const UpdateSizeConstraintSetRequest * UpdateSizeConstraintSetResponse::request() const
{
    Q_D(const UpdateSizeConstraintSetResponse);
    return static_cast<const UpdateSizeConstraintSetRequest *>(d->request);
}

/**
 * @brief  Parse a WAF UpdateSizeConstraintSet response.
 *
 * @param  response  Response to parse.
 */
void UpdateSizeConstraintSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateSizeConstraintSetResponsePrivate
 *
 * @brief  Private implementation for UpdateSizeConstraintSetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateSizeConstraintSetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateSizeConstraintSetResponse instance.
 */
UpdateSizeConstraintSetResponsePrivate::UpdateSizeConstraintSetResponsePrivate(
    UpdateSizeConstraintSetQueueResponse * const q) : UpdateSizeConstraintSetPrivate(q)
{

}

/**
 * @brief  Parse an WAF UpdateSizeConstraintSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateSizeConstraintSetResponsePrivate::UpdateSizeConstraintSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateSizeConstraintSetResponse"));
    /// @todo
}

} // namespace WAF
} // namespace AWS
