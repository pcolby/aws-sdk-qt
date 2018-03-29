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

#include "deletetypedlinkfacetresponse.h"
#include "deletetypedlinkfacetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/**
 * @class  DeleteTypedLinkFacetResponse
 *
 * @brief  Handles CloudDirectory DeleteTypedLinkFacet responses.
 *
 * @see    CloudDirectoryClient::deleteTypedLinkFacet
 */

/**
 * @brief  Constructs a new DeleteTypedLinkFacetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteTypedLinkFacetResponse::DeleteTypedLinkFacetResponse(
        const DeleteTypedLinkFacetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new DeleteTypedLinkFacetResponsePrivate(this), parent)
{
    setRequest(new DeleteTypedLinkFacetRequest(request));
    setReply(reply);
}

const DeleteTypedLinkFacetRequest * DeleteTypedLinkFacetResponse::request() const
{
    Q_D(const DeleteTypedLinkFacetResponse);
    return static_cast<const DeleteTypedLinkFacetRequest *>(d->request);
}

/**
 * @brief  Parse a CloudDirectory DeleteTypedLinkFacet response.
 *
 * @param  response  Response to parse.
 */
void DeleteTypedLinkFacetResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteTypedLinkFacetResponsePrivate
 *
 * @brief  Private implementation for DeleteTypedLinkFacetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteTypedLinkFacetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteTypedLinkFacetResponse instance.
 */
DeleteTypedLinkFacetResponsePrivate::DeleteTypedLinkFacetResponsePrivate(
    DeleteTypedLinkFacetQueueResponse * const q) : DeleteTypedLinkFacetPrivate(q)
{

}

/**
 * @brief  Parse an CloudDirectory DeleteTypedLinkFacetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteTypedLinkFacetResponsePrivate::DeleteTypedLinkFacetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteTypedLinkFacetResponse"));
    /// @todo
}

} // namespace CloudDirectory
} // namespace QtAws
