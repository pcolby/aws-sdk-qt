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

#include "getdeployablepatchsnapshotforinstanceresponse.h"
#include "getdeployablepatchsnapshotforinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSM {

/**
 * @class  GetDeployablePatchSnapshotForInstanceResponse
 *
 * @brief  Handles SSM GetDeployablePatchSnapshotForInstance responses.
 *
 * @see    SSMClient::getDeployablePatchSnapshotForInstance
 */

/**
 * @brief  Constructs a new GetDeployablePatchSnapshotForInstanceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetDeployablePatchSnapshotForInstanceResponse::GetDeployablePatchSnapshotForInstanceResponse(
        const GetDeployablePatchSnapshotForInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GetDeployablePatchSnapshotForInstanceResponse(new GetDeployablePatchSnapshotForInstanceResponsePrivate(this), parent)
{
    setRequest(new GetDeployablePatchSnapshotForInstanceRequest(request));
    setReply(reply);
}

const GetDeployablePatchSnapshotForInstanceRequest * GetDeployablePatchSnapshotForInstanceResponse::request() const
{
    Q_D(const GetDeployablePatchSnapshotForInstanceResponse);
    return static_cast<const GetDeployablePatchSnapshotForInstanceRequest *>(d->request);
}

/**
 * @brief  Parse a SSM GetDeployablePatchSnapshotForInstance response.
 *
 * @param  response  Response to parse.
 */
void GetDeployablePatchSnapshotForInstanceResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetDeployablePatchSnapshotForInstanceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetDeployablePatchSnapshotForInstanceResponsePrivate
 *
 * @brief  Private implementation for GetDeployablePatchSnapshotForInstanceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetDeployablePatchSnapshotForInstanceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetDeployablePatchSnapshotForInstanceResponse instance.
 */
GetDeployablePatchSnapshotForInstanceResponsePrivate::GetDeployablePatchSnapshotForInstanceResponsePrivate(
    GetDeployablePatchSnapshotForInstanceResponse * const q) : SSMResponsePrivate(q)
{

}

/**
 * @brief  Parse an SSM GetDeployablePatchSnapshotForInstanceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetDeployablePatchSnapshotForInstanceResponsePrivate::parseGetDeployablePatchSnapshotForInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetDeployablePatchSnapshotForInstanceResponse"));
    /// @todo
}

} // namespace SSM
} // namespace QtAws
