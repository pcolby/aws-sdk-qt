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

#include "getinstanceaccessresponse.h"
#include "getinstanceaccessresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameLift {

/**
 * @class  GetInstanceAccessResponse
 *
 * @brief  Handles GameLift GetInstanceAccess responses.
 *
 * @see    GameLiftClient::getInstanceAccess
 */

/**
 * @brief  Constructs a new GetInstanceAccessResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetInstanceAccessResponse::GetInstanceAccessResponse(
        const GetInstanceAccessRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GameLiftResponse(new GetInstanceAccessResponsePrivate(this), parent)
{
    setRequest(new GetInstanceAccessRequest(request));
    setReply(reply);
}

const GetInstanceAccessRequest * GetInstanceAccessResponse::request() const
{
    Q_D(const GetInstanceAccessResponse);
    return static_cast<const GetInstanceAccessRequest *>(d->request);
}

/**
 * @brief  Parse a GameLift GetInstanceAccess response.
 *
 * @param  response  Response to parse.
 */
void GetInstanceAccessResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetInstanceAccessResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetInstanceAccessResponsePrivate
 *
 * @brief  Private implementation for GetInstanceAccessResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetInstanceAccessResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetInstanceAccessResponse instance.
 */
GetInstanceAccessResponsePrivate::GetInstanceAccessResponsePrivate(
    GetInstanceAccessResponse * const q) : GameLiftResponsePrivate(q)
{

}

/**
 * @brief  Parse an GameLift GetInstanceAccessResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetInstanceAccessResponsePrivate::parseGetInstanceAccessResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetInstanceAccessResponse"));
    /// @todo
}

} // namespace GameLift
} // namespace QtAws
