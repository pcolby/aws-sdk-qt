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

#include "deleteclusterresponse.h"
#include "deleteclusterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudHSMV2 {

/**
 * @class  DeleteClusterResponse
 *
 * @brief  Handles CloudHSMV2 DeleteCluster responses.
 *
 * @see    CloudHSMV2Client::deleteCluster
 */

/**
 * @brief  Constructs a new DeleteClusterResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteClusterResponse::DeleteClusterResponse(
        const DeleteClusterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudHSMV2Response(new DeleteClusterResponsePrivate(this), parent)
{
    setRequest(new DeleteClusterRequest(request));
    setReply(reply);
}

const DeleteClusterRequest * DeleteClusterResponse::request() const
{
    Q_D(const DeleteClusterResponse);
    return static_cast<const DeleteClusterRequest *>(d->request);
}

/**
 * @brief  Parse a CloudHSMV2 DeleteCluster response.
 *
 * @param  response  Response to parse.
 */
void DeleteClusterResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteClusterResponsePrivate
 *
 * @brief  Private implementation for DeleteClusterResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteClusterResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteClusterResponse instance.
 */
DeleteClusterResponsePrivate::DeleteClusterResponsePrivate(
    DeleteClusterQueueResponse * const q) : DeleteClusterPrivate(q)
{

}

/**
 * @brief  Parse an CloudHSMV2 DeleteClusterResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteClusterResponsePrivate::DeleteClusterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteClusterResponse"));
    /// @todo
}

} // namespace CloudHSMV2
} // namespace QtAws
