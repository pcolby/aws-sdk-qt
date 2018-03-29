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

#include "addroletodbclusterresponse.h"
#include "addroletodbclusterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace RDS {

/**
 * @class  AddRoleToDBClusterResponse
 *
 * @brief  Handles RDS AddRoleToDBCluster responses.
 *
 * @see    RDSClient::addRoleToDBCluster
 */

/**
 * @brief  Constructs a new AddRoleToDBClusterResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
AddRoleToDBClusterResponse::AddRoleToDBClusterResponse(
        const AddRoleToDBClusterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : RDSResponse(new AddRoleToDBClusterResponsePrivate(this), parent)
{
    setRequest(new AddRoleToDBClusterRequest(request));
    setReply(reply);
}

const AddRoleToDBClusterRequest * AddRoleToDBClusterResponse::request() const
{
    Q_D(const AddRoleToDBClusterResponse);
    return static_cast<const AddRoleToDBClusterRequest *>(d->request);
}

/**
 * @brief  Parse a RDS AddRoleToDBCluster response.
 *
 * @param  response  Response to parse.
 */
void AddRoleToDBClusterResponse::parseSuccess(QIODevice &response)
{
    Q_D(AddRoleToDBClusterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  AddRoleToDBClusterResponsePrivate
 *
 * @brief  Private implementation for AddRoleToDBClusterResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AddRoleToDBClusterResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AddRoleToDBClusterResponse instance.
 */
AddRoleToDBClusterResponsePrivate::AddRoleToDBClusterResponsePrivate(
    AddRoleToDBClusterResponse * const q) : RDSResponsePrivate(q)
{

}

/**
 * @brief  Parse an RDS AddRoleToDBClusterResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void AddRoleToDBClusterResponsePrivate::parseAddRoleToDBClusterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AddRoleToDBClusterResponse"));
    /// @todo
}

} // namespace RDS
} // namespace QtAws
