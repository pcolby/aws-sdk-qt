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

#include "getconnectivityinforesponse.h"
#include "getconnectivityinforesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/**
 * @class  GetConnectivityInfoResponse
 *
 * @brief  Handles Greengrass GetConnectivityInfo responses.
 *
 * @see    GreengrassClient::getConnectivityInfo
 */

/**
 * @brief  Constructs a new GetConnectivityInfoResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetConnectivityInfoResponse::GetConnectivityInfoResponse(
        const GetConnectivityInfoRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new GetConnectivityInfoResponsePrivate(this), parent)
{
    setRequest(new GetConnectivityInfoRequest(request));
    setReply(reply);
}

const GetConnectivityInfoRequest * GetConnectivityInfoResponse::request() const
{
    Q_D(const GetConnectivityInfoResponse);
    return static_cast<const GetConnectivityInfoRequest *>(d->request);
}

/**
 * @brief  Parse a Greengrass GetConnectivityInfo response.
 *
 * @param  response  Response to parse.
 */
void GetConnectivityInfoResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetConnectivityInfoResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetConnectivityInfoResponsePrivate
 *
 * @brief  Private implementation for GetConnectivityInfoResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetConnectivityInfoResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetConnectivityInfoResponse instance.
 */
GetConnectivityInfoResponsePrivate::GetConnectivityInfoResponsePrivate(
    GetConnectivityInfoResponse * const q) : GreengrassResponsePrivate(q)
{

}

/**
 * @brief  Parse an Greengrass GetConnectivityInfoResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetConnectivityInfoResponsePrivate::GetConnectivityInfoResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetConnectivityInfoResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace QtAws
