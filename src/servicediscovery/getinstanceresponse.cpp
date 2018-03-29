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

#include "getinstanceresponse.h"
#include "getinstanceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace ServiceDiscovery {

/**
 * @class  GetInstanceResponse
 *
 * @brief  Handles ServiceDiscovery GetInstance responses.
 *
 * @see    ServiceDiscoveryClient::getInstance
 */

/**
 * @brief  Constructs a new GetInstanceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetInstanceResponse::GetInstanceResponse(
        const GetInstanceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ServiceDiscoveryResponse(new GetInstanceResponsePrivate(this), parent)
{
    setRequest(new GetInstanceRequest(request));
    setReply(reply);
}

const GetInstanceRequest * GetInstanceResponse::request() const
{
    Q_D(const GetInstanceResponse);
    return static_cast<const GetInstanceRequest *>(d->request);
}

/**
 * @brief  Parse a ServiceDiscovery GetInstance response.
 *
 * @param  response  Response to parse.
 */
void GetInstanceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetInstanceResponsePrivate
 *
 * @brief  Private implementation for GetInstanceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetInstanceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetInstanceResponse instance.
 */
GetInstanceResponsePrivate::GetInstanceResponsePrivate(
    GetInstanceResponse * const q) : ServiceDiscoveryResponsePrivate(q)
{

}

/**
 * @brief  Parse an ServiceDiscovery GetInstanceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetInstanceResponsePrivate::GetInstanceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetInstanceResponse"));
    /// @todo
}

} // namespace ServiceDiscovery
} // namespace QtAws
