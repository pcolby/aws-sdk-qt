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

#include "deleteconstraintresponse.h"
#include "deleteconstraintresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceCatalog {

/**
 * @class  DeleteConstraintResponse
 *
 * @brief  Handles ServiceCatalog DeleteConstraint responses.
 *
 * @see    ServiceCatalogClient::deleteConstraint
 */

/**
 * @brief  Constructs a new DeleteConstraintResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteConstraintResponse::DeleteConstraintResponse(
        const DeleteConstraintRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new DeleteConstraintResponsePrivate(this), parent)
{
    setRequest(new DeleteConstraintRequest(request));
    setReply(reply);
}

const DeleteConstraintRequest * DeleteConstraintResponse::request() const
{
    Q_D(const DeleteConstraintResponse);
    return static_cast<const DeleteConstraintRequest *>(d->request);
}

/**
 * @brief  Parse a ServiceCatalog DeleteConstraint response.
 *
 * @param  response  Response to parse.
 */
void DeleteConstraintResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteConstraintResponsePrivate
 *
 * @brief  Private implementation for DeleteConstraintResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteConstraintResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteConstraintResponse instance.
 */
DeleteConstraintResponsePrivate::DeleteConstraintResponsePrivate(
    DeleteConstraintQueueResponse * const q) : DeleteConstraintPrivate(q)
{

}

/**
 * @brief  Parse an ServiceCatalog DeleteConstraintResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteConstraintResponsePrivate::DeleteConstraintResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteConstraintResponse"));
    /// @todo
}

} // namespace ServiceCatalog
} // namespace QtAws
