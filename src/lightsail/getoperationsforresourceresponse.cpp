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

#include "getoperationsforresourceresponse.h"
#include "getoperationsforresourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Lightsail {

/**
 * @class  GetOperationsForResourceResponse
 *
 * @brief  Handles Lightsail GetOperationsForResource responses.
 *
 * @see    LightsailClient::getOperationsForResource
 */

/**
 * @brief  Constructs a new GetOperationsForResourceResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetOperationsForResourceResponse::GetOperationsForResourceResponse(
        const GetOperationsForResourceRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LightsailResponse(new GetOperationsForResourceResponsePrivate(this), parent)
{
    setRequest(new GetOperationsForResourceRequest(request));
    setReply(reply);
}

const GetOperationsForResourceRequest * GetOperationsForResourceResponse::request() const
{
    Q_D(const GetOperationsForResourceResponse);
    return static_cast<const GetOperationsForResourceRequest *>(d->request);
}

/**
 * @brief  Parse a Lightsail GetOperationsForResource response.
 *
 * @param  response  Response to parse.
 */
void GetOperationsForResourceResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetOperationsForResourceResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetOperationsForResourceResponsePrivate
 *
 * @brief  Private implementation for GetOperationsForResourceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetOperationsForResourceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetOperationsForResourceResponse instance.
 */
GetOperationsForResourceResponsePrivate::GetOperationsForResourceResponsePrivate(
    GetOperationsForResourceResponse * const q) : LightsailResponsePrivate(q)
{

}

/**
 * @brief  Parse an Lightsail GetOperationsForResourceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetOperationsForResourceResponsePrivate::parseGetOperationsForResourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetOperationsForResourceResponse"));
    /// @todo
}

} // namespace Lightsail
} // namespace QtAws
