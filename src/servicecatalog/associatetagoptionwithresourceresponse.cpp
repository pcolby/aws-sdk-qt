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

#include "associatetagoptionwithresourceresponse.h"
#include "associatetagoptionwithresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace ServiceCatalog {

/**
 * @class  AssociateTagOptionWithResourceResponse
 *
 * @brief  Handles ServiceCatalog AssociateTagOptionWithResource responses.
 *
 * @see    ServiceCatalogClient::associateTagOptionWithResource
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AssociateTagOptionWithResourceResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceCatalogResponse(new AssociateTagOptionWithResourceResponsePrivate(this), parent)
{
    setRequest(new AssociateTagOptionWithResourceRequest(request));
    setReply(reply);
}

const AssociateTagOptionWithResourceRequest * AssociateTagOptionWithResourceResponse::request() const
{
    Q_D(const AssociateTagOptionWithResourceResponse);
    return static_cast<const AssociateTagOptionWithResourceRequest *>(d->request);
}

/**
 * @brief  Parse a ServiceCatalog AssociateTagOptionWithResource response.
 *
 * @param  response  Response to parse.
 */
void AssociateTagOptionWithResourceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AssociateTagOptionWithResourceResponsePrivate
 *
 * @brief  Private implementation for AssociateTagOptionWithResourceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AssociateTagOptionWithResourceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AssociateTagOptionWithResourceResponse instance.
 */
AssociateTagOptionWithResourceResponsePrivate::AssociateTagOptionWithResourceResponsePrivate(
    AssociateTagOptionWithResourceQueueResponse * const q) : AssociateTagOptionWithResourcePrivate(q)
{

}

/**
 * @brief  Parse an ServiceCatalog AssociateTagOptionWithResourceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AssociateTagOptionWithResourceResponsePrivate::AssociateTagOptionWithResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AssociateTagOptionWithResourceResponse"));
    /// @todo
}

} // namespace ServiceCatalog
} // namespace AWS
