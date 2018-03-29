/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deletesizeconstraintsetresponse.h"
#include "deletesizeconstraintsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WAFRegional {

/**
 * @class  DeleteSizeConstraintSetResponse
 *
 * @brief  Handles WAFRegional DeleteSizeConstraintSet responses.
 *
 * @see    WAFRegionalClient::deleteSizeConstraintSet
 */

/**
 * @brief  Constructs a new DeleteSizeConstraintSetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteSizeConstraintSetResponse::DeleteSizeConstraintSetResponse(
        const DeleteSizeConstraintSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WAFRegionalResponse(new DeleteSizeConstraintSetResponsePrivate(this), parent)
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
 * @brief  Parse a WAFRegional DeleteSizeConstraintSet response.
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
    DeleteSizeConstraintSetResponse * const q) : WAFRegionalResponsePrivate(q)
{

}

/**
 * @brief  Parse an WAFRegional DeleteSizeConstraintSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteSizeConstraintSetResponsePrivate::DeleteSizeConstraintSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteSizeConstraintSetResponse"));
    /// @todo
}

} // namespace WAFRegional
} // namespace QtAws
