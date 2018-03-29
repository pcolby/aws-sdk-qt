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

#include "updatetypedlinkfacetresponse.h"
#include "updatetypedlinkfacetresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/**
 * @class  UpdateTypedLinkFacetResponse
 *
 * @brief  Handles CloudDirectory UpdateTypedLinkFacet responses.
 *
 * @see    CloudDirectoryClient::updateTypedLinkFacet
 */

/**
 * @brief  Constructs a new UpdateTypedLinkFacetResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateTypedLinkFacetResponse::UpdateTypedLinkFacetResponse(
        const UpdateTypedLinkFacetRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : UpdateTypedLinkFacetResponse(new UpdateTypedLinkFacetResponsePrivate(this), parent)
{
    setRequest(new UpdateTypedLinkFacetRequest(request));
    setReply(reply);
}

const UpdateTypedLinkFacetRequest * UpdateTypedLinkFacetResponse::request() const
{
    Q_D(const UpdateTypedLinkFacetResponse);
    return static_cast<const UpdateTypedLinkFacetRequest *>(d->request);
}

/**
 * @brief  Parse a CloudDirectory UpdateTypedLinkFacet response.
 *
 * @param  response  Response to parse.
 */
void UpdateTypedLinkFacetResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateTypedLinkFacetResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateTypedLinkFacetResponsePrivate
 *
 * @brief  Private implementation for UpdateTypedLinkFacetResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateTypedLinkFacetResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateTypedLinkFacetResponse instance.
 */
UpdateTypedLinkFacetResponsePrivate::UpdateTypedLinkFacetResponsePrivate(
    UpdateTypedLinkFacetResponse * const q) : CloudDirectoryResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudDirectory UpdateTypedLinkFacetResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateTypedLinkFacetResponsePrivate::parseUpdateTypedLinkFacetResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateTypedLinkFacetResponse"));
    /// @todo
}

} // namespace CloudDirectory
} // namespace QtAws
