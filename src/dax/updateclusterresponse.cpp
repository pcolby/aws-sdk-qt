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

#include "updateclusterresponse.h"
#include "updateclusterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace DAX {

/**
 * @class  UpdateClusterResponse
 *
 * @brief  Handles DAX UpdateCluster responses.
 *
 * @see    DAXClient::updateCluster
 */

/**
 * @brief  Constructs a new UpdateClusterResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateClusterResponse::UpdateClusterResponse(
        const UpdateClusterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DAXResponse(new UpdateClusterResponsePrivate(this), parent)
{
    setRequest(new UpdateClusterRequest(request));
    setReply(reply);
}

const UpdateClusterRequest * UpdateClusterResponse::request() const
{
    Q_D(const UpdateClusterResponse);
    return static_cast<const UpdateClusterRequest *>(d->request);
}

/**
 * @brief  Parse a DAX UpdateCluster response.
 *
 * @param  response  Response to parse.
 */
void UpdateClusterResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateClusterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateClusterResponsePrivate
 *
 * @brief  Private implementation for UpdateClusterResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateClusterResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateClusterResponse instance.
 */
UpdateClusterResponsePrivate::UpdateClusterResponsePrivate(
    UpdateClusterResponse * const q) : DAXResponsePrivate(q)
{

}

/**
 * @brief  Parse an DAX UpdateClusterResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateClusterResponsePrivate::UpdateClusterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateClusterResponse"));
    /// @todo
}

} // namespace DAX
} // namespace QtAws
