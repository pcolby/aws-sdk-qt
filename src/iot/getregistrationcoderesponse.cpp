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

#include "getregistrationcoderesponse.h"
#include "getregistrationcoderesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IoT {

/**
 * @class  GetRegistrationCodeResponse
 *
 * @brief  Handles IoT GetRegistrationCode responses.
 *
 * @see    IoTClient::getRegistrationCode
 */

/**
 * @brief  Constructs a new GetRegistrationCodeResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetRegistrationCodeResponse::GetRegistrationCodeResponse(
        const GetRegistrationCodeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IoTResponse(new GetRegistrationCodeResponsePrivate(this), parent)
{
    setRequest(new GetRegistrationCodeRequest(request));
    setReply(reply);
}

const GetRegistrationCodeRequest * GetRegistrationCodeResponse::request() const
{
    Q_D(const GetRegistrationCodeResponse);
    return static_cast<const GetRegistrationCodeRequest *>(d->request);
}

/**
 * @brief  Parse a IoT GetRegistrationCode response.
 *
 * @param  response  Response to parse.
 */
void GetRegistrationCodeResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetRegistrationCodeResponsePrivate
 *
 * @brief  Private implementation for GetRegistrationCodeResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetRegistrationCodeResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetRegistrationCodeResponse instance.
 */
GetRegistrationCodeResponsePrivate::GetRegistrationCodeResponsePrivate(
    GetRegistrationCodeQueueResponse * const q) : GetRegistrationCodePrivate(q)
{

}

/**
 * @brief  Parse an IoT GetRegistrationCodeResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetRegistrationCodeResponsePrivate::GetRegistrationCodeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRegistrationCodeResponse"));
    /// @todo
}

} // namespace IoT
} // namespace AWS
