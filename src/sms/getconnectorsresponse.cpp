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

#include "getconnectorsresponse.h"
#include "getconnectorsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SMS {

/**
 * @class  GetConnectorsResponse
 *
 * @brief  Handles SMS GetConnectors responses.
 *
 * @see    SMSClient::getConnectors
 */

/**
 * @brief  Constructs a new GetConnectorsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetConnectorsResponse::GetConnectorsResponse(
        const GetConnectorsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SMSResponse(new GetConnectorsResponsePrivate(this), parent)
{
    setRequest(new GetConnectorsRequest(request));
    setReply(reply);
}

const GetConnectorsRequest * GetConnectorsResponse::request() const
{
    Q_D(const GetConnectorsResponse);
    return static_cast<const GetConnectorsRequest *>(d->request);
}

/**
 * @brief  Parse a SMS GetConnectors response.
 *
 * @param  response  Response to parse.
 */
void GetConnectorsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetConnectorsResponsePrivate
 *
 * @brief  Private implementation for GetConnectorsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetConnectorsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetConnectorsResponse instance.
 */
GetConnectorsResponsePrivate::GetConnectorsResponsePrivate(
    GetConnectorsResponse * const q) : SMSResponsePrivate(q)
{

}

/**
 * @brief  Parse an SMS GetConnectorsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetConnectorsResponsePrivate::GetConnectorsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetConnectorsResponse"));
    /// @todo
}

} // namespace SMS
} // namespace QtAws
