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

#include "deletefacetresponse.h"
#include "deletefacetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace CloudDirectory {

/**
 * @class  DeleteFacetResponse
 *
 * @brief  Handles CloudDirectory DeleteFacet responses.
 *
 * @see    CloudDirectoryClient::deleteFacet
 */

/**
 * @brief  Constructs a new DeleteFacetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteFacetResponse::DeleteFacetResponse(
        const DeleteFacetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new DeleteFacetResponsePrivate(this), parent)
{
    setRequest(new DeleteFacetRequest(request));
    setReply(reply);
}

const DeleteFacetRequest * DeleteFacetResponse::request() const
{
    Q_D(const DeleteFacetResponse);
    return static_cast<const DeleteFacetRequest *>(d->request);
}

/**
 * @brief  Parse a CloudDirectory DeleteFacet response.
 *
 * @param  response  Response to parse.
 */
void DeleteFacetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteFacetResponsePrivate
 *
 * @brief  Private implementation for DeleteFacetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteFacetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteFacetResponse instance.
 */
DeleteFacetResponsePrivate::DeleteFacetResponsePrivate(
    DeleteFacetQueueResponse * const q) : DeleteFacetPrivate(q)
{

}

/**
 * @brief  Parse an CloudDirectory DeleteFacetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteFacetResponsePrivate::DeleteFacetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteFacetResponse"));
    /// @todo
}

} // namespace CloudDirectory
} // namespace AWS
