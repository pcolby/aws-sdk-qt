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

#include "updateconstraintresponse.h"
#include "updateconstraintresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/**
 * @class  UpdateConstraintResponse
 *
 * @brief  Handles ServiceCatalog UpdateConstraint responses.
 *
 * @see    ServiceCatalogClient::updateConstraint
 */

/**
 * @brief  Constructs a new UpdateConstraintResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateConstraintResponse::UpdateConstraintResponse(
        const UpdateConstraintRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new UpdateConstraintResponsePrivate(this), parent)
{
    setRequest(new UpdateConstraintRequest(request));
    setReply(reply);
}

const UpdateConstraintRequest * UpdateConstraintResponse::request() const
{
    Q_D(const UpdateConstraintResponse);
    return static_cast<const UpdateConstraintRequest *>(d->request);
}

/**
 * @brief  Parse a ServiceCatalog UpdateConstraint response.
 *
 * @param  response  Response to parse.
 */
void UpdateConstraintResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateConstraintResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateConstraintResponsePrivate
 *
 * @brief  Private implementation for UpdateConstraintResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateConstraintResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateConstraintResponse instance.
 */
UpdateConstraintResponsePrivate::UpdateConstraintResponsePrivate(
    UpdateConstraintResponse * const q) : ServiceCatalogResponsePrivate(q)
{

}

/**
 * @brief  Parse an ServiceCatalog UpdateConstraintResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateConstraintResponsePrivate::parseUpdateConstraintResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateConstraintResponse"));
    /// @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
