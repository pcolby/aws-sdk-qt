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

#include "getloginprofileresponse.h"
#include "getloginprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace IAM {

/**
 * @class  GetLoginProfileResponse
 *
 * @brief  Handles IAM GetLoginProfile responses.
 *
 * @see    IAMClient::getLoginProfile
 */

/**
 * @brief  Constructs a new GetLoginProfileResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetLoginProfileResponse::GetLoginProfileResponse(
        const GetLoginProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : IAMResponse(new GetLoginProfileResponsePrivate(this), parent)
{
    setRequest(new GetLoginProfileRequest(request));
    setReply(reply);
}

const GetLoginProfileRequest * GetLoginProfileResponse::request() const
{
    Q_D(const GetLoginProfileResponse);
    return static_cast<const GetLoginProfileRequest *>(d->request);
}

/**
 * @brief  Parse a IAM GetLoginProfile response.
 *
 * @param  response  Response to parse.
 */
void GetLoginProfileResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetLoginProfileResponsePrivate
 *
 * @brief  Private implementation for GetLoginProfileResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetLoginProfileResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetLoginProfileResponse instance.
 */
GetLoginProfileResponsePrivate::GetLoginProfileResponsePrivate(
    GetLoginProfileQueueResponse * const q) : GetLoginProfilePrivate(q)
{

}

/**
 * @brief  Parse an IAM GetLoginProfileResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetLoginProfileResponsePrivate::GetLoginProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetLoginProfileResponse"));
    /// @todo
}

} // namespace IAM
} // namespace AWS
