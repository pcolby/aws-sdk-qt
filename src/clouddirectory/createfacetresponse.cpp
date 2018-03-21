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

#include "createfacetresponse.h"
#include "createfacetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudDirectory {

/**
 * @class  CreateFacetResponse
 *
 * @brief  Handles CloudDirectory CreateFacet responses.
 *
 * @see    CloudDirectoryClient::createFacet
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateFacetResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new CreateFacetResponsePrivate(this), parent)
{
    setRequest(new CreateFacetRequest(request));
    setReply(reply);
}

const CreateFacetRequest * CreateFacetResponse::request() const
{
    Q_D(const CreateFacetResponse);
    return static_cast<const CreateFacetRequest *>(d->request);
}

/**
 * @brief  Parse a CloudDirectory CreateFacet response.
 *
 * @param  response  Response to parse.
 */
void CreateFacetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateFacetResponsePrivate
 *
 * @brief  Private implementation for CreateFacetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateFacetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateFacetResponse instance.
 */
CreateFacetResponsePrivate::CreateFacetResponsePrivate(
    CreateFacetQueueResponse * const q) : CreateFacetPrivate(q)
{

}

/**
 * @brief  Parse an CloudDirectory CreateFacetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateFacetResponsePrivate::CreateFacetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateFacetResponse"));
    /// @todo
}

} // namespace CloudDirectory
} // namespace AWS
