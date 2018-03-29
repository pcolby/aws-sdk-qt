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

#include "createsizeconstraintsetresponse.h"
#include "createsizeconstraintsetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WAF {

/**
 * @class  CreateSizeConstraintSetResponse
 *
 * @brief  Handles WAF CreateSizeConstraintSet responses.
 *
 * @see    WAFClient::createSizeConstraintSet
 */

/**
 * @brief  Constructs a new CreateSizeConstraintSetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateSizeConstraintSetResponse::CreateSizeConstraintSetResponse(
        const CreateSizeConstraintSetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CreateSizeConstraintSetResponse(new CreateSizeConstraintSetResponsePrivate(this), parent)
{
    setRequest(new CreateSizeConstraintSetRequest(request));
    setReply(reply);
}

const CreateSizeConstraintSetRequest * CreateSizeConstraintSetResponse::request() const
{
    Q_D(const CreateSizeConstraintSetResponse);
    return static_cast<const CreateSizeConstraintSetRequest *>(d->request);
}

/**
 * @brief  Parse a WAF CreateSizeConstraintSet response.
 *
 * @param  response  Response to parse.
 */
void CreateSizeConstraintSetResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateSizeConstraintSetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateSizeConstraintSetResponsePrivate
 *
 * @brief  Private implementation for CreateSizeConstraintSetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateSizeConstraintSetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateSizeConstraintSetResponse instance.
 */
CreateSizeConstraintSetResponsePrivate::CreateSizeConstraintSetResponsePrivate(
    CreateSizeConstraintSetResponse * const q) : WAFResponsePrivate(q)
{

}

/**
 * @brief  Parse an WAF CreateSizeConstraintSetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateSizeConstraintSetResponsePrivate::parseCreateSizeConstraintSetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateSizeConstraintSetResponse"));
    /// @todo
}

} // namespace WAF
} // namespace QtAws
