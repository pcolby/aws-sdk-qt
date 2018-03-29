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

#include "rebootclusterresponse.h"
#include "rebootclusterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Redshift {

/**
 * @class  RebootClusterResponse
 *
 * @brief  Handles Redshift RebootCluster responses.
 *
 * @see    RedshiftClient::rebootCluster
 */

/**
 * @brief  Constructs a new RebootClusterResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
RebootClusterResponse::RebootClusterResponse(
        const RebootClusterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RedshiftResponse(new RebootClusterResponsePrivate(this), parent)
{
    setRequest(new RebootClusterRequest(request));
    setReply(reply);
}

const RebootClusterRequest * RebootClusterResponse::request() const
{
    Q_D(const RebootClusterResponse);
    return static_cast<const RebootClusterRequest *>(d->request);
}

/**
 * @brief  Parse a Redshift RebootCluster response.
 *
 * @param  response  Response to parse.
 */
void RebootClusterResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  RebootClusterResponsePrivate
 *
 * @brief  Private implementation for RebootClusterResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new RebootClusterResponsePrivate object.
 *
 * @param  q  Pointer to this object's public RebootClusterResponse instance.
 */
RebootClusterResponsePrivate::RebootClusterResponsePrivate(
    RebootClusterResponse * const q) : RedshiftResponsePrivate(q)
{

}

/**
 * @brief  Parse an Redshift RebootClusterResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void RebootClusterResponsePrivate::RebootClusterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("RebootClusterResponse"));
    /// @todo
}

} // namespace Redshift
} // namespace QtAws
