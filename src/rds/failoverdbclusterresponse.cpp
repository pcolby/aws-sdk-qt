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

#include "failoverdbclusterresponse.h"
#include "failoverdbclusterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RDS {

/**
 * @class  FailoverDBClusterResponse
 *
 * @brief  Handles RDS FailoverDBCluster responses.
 *
 * @see    RDSClient::failoverDBCluster
 */

/**
 * @brief  Constructs a new FailoverDBClusterResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
FailoverDBClusterResponse::FailoverDBClusterResponse(
        const FailoverDBClusterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new FailoverDBClusterResponsePrivate(this), parent)
{
    setRequest(new FailoverDBClusterRequest(request));
    setReply(reply);
}

const FailoverDBClusterRequest * FailoverDBClusterResponse::request() const
{
    Q_D(const FailoverDBClusterResponse);
    return static_cast<const FailoverDBClusterRequest *>(d->request);
}

/**
 * @brief  Parse a RDS FailoverDBCluster response.
 *
 * @param  response  Response to parse.
 */
void FailoverDBClusterResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  FailoverDBClusterResponsePrivate
 *
 * @brief  Private implementation for FailoverDBClusterResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new FailoverDBClusterResponsePrivate object.
 *
 * @param  q  Pointer to this object's public FailoverDBClusterResponse instance.
 */
FailoverDBClusterResponsePrivate::FailoverDBClusterResponsePrivate(
    FailoverDBClusterQueueResponse * const q) : FailoverDBClusterPrivate(q)
{

}

/**
 * @brief  Parse an RDS FailoverDBClusterResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void FailoverDBClusterResponsePrivate::FailoverDBClusterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("FailoverDBClusterResponse"));
    /// @todo
}

} // namespace RDS
} // namespace QtAws
