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

#include "cancelclusterresponse.h"
#include "cancelclusterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace Snowball {

/**
 * @class  CancelClusterResponse
 *
 * @brief  Handles Snowball CancelCluster responses.
 *
 * @see    SnowballClient::cancelCluster
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CancelClusterResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SnowballResponse(new CancelClusterResponsePrivate(this), parent)
{
    setRequest(new CancelClusterRequest(request));
    setReply(reply);
}

const CancelClusterRequest * CancelClusterResponse::request() const
{
    Q_D(const CancelClusterResponse);
    return static_cast<const CancelClusterRequest *>(d->request);
}

/**
 * @brief  Parse a Snowball CancelCluster response.
 *
 * @param  response  Response to parse.
 */
void CancelClusterResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CancelClusterResponsePrivate
 *
 * @brief  Private implementation for CancelClusterResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CancelClusterResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CancelClusterResponse instance.
 */
CancelClusterResponsePrivate::CancelClusterResponsePrivate(
    CancelClusterQueueResponse * const q) : CancelClusterPrivate(q)
{

}

/**
 * @brief  Parse an Snowball CancelClusterResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CancelClusterResponsePrivate::CancelClusterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelClusterResponse"));
    /// @todo
}
