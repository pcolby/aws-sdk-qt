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

#include "getfacetresponse.h"
#include "getfacetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudDirectory {

/**
 * @class  GetFacetResponse
 *
 * @brief  Handles CloudDirectory GetFacet responses.
 *
 * @see    CloudDirectoryClient::getFacet
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetFacetResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new GetFacetResponsePrivate(this), parent)
{
    setRequest(new GetFacetRequest(request));
    setReply(reply);
}

const GetFacetRequest * GetFacetResponse::request() const
{
    Q_D(const GetFacetResponse);
    return static_cast<const GetFacetRequest *>(d->request);
}

/**
 * @brief  Parse a CloudDirectory GetFacet response.
 *
 * @param  response  Response to parse.
 */
void GetFacetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetFacetResponsePrivate
 *
 * @brief  Private implementation for GetFacetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetFacetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetFacetResponse instance.
 */
GetFacetResponsePrivate::GetFacetResponsePrivate(
    GetFacetQueueResponse * const q) : GetFacetPrivate(q)
{

}

/**
 * @brief  Parse an CloudDirectory GetFacetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetFacetResponsePrivate::GetFacetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetFacetResponse"));
    /// @todo
}

} // namespace CloudDirectory
} // namespace AWS
