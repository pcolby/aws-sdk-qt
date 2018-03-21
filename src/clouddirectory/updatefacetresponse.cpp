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

#include "updatefacetresponse.h"
#include "updatefacetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudDirectory {

/**
 * @class  UpdateFacetResponse
 *
 * @brief  Handles CloudDirectory UpdateFacet responses.
 *
 * @see    CloudDirectoryClient::updateFacet
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateFacetResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new UpdateFacetResponsePrivate(this), parent)
{
    setRequest(new UpdateFacetRequest(request));
    setReply(reply);
}

const UpdateFacetRequest * UpdateFacetResponse::request() const
{
    Q_D(const UpdateFacetResponse);
    return static_cast<const UpdateFacetRequest *>(d->request);
}

/**
 * @brief  Parse a CloudDirectory UpdateFacet response.
 *
 * @param  response  Response to parse.
 */
void UpdateFacetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateFacetResponsePrivate
 *
 * @brief  Private implementation for UpdateFacetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateFacetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateFacetResponse instance.
 */
UpdateFacetResponsePrivate::UpdateFacetResponsePrivate(
    UpdateFacetQueueResponse * const q) : UpdateFacetPrivate(q)
{

}

/**
 * @brief  Parse an CloudDirectory UpdateFacetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateFacetResponsePrivate::UpdateFacetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateFacetResponse"));
    /// @todo
}
