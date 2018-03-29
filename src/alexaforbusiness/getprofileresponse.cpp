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

#include "getprofileresponse.h"
#include "getprofileresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/**
 * @class  GetProfileResponse
 *
 * @brief  Handles AlexaForBusiness GetProfile responses.
 *
 * @see    AlexaForBusinessClient::getProfile
 */

/**
 * @brief  Constructs a new GetProfileResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetProfileResponse::GetProfileResponse(
        const GetProfileRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new GetProfileResponsePrivate(this), parent)
{
    setRequest(new GetProfileRequest(request));
    setReply(reply);
}

const GetProfileRequest * GetProfileResponse::request() const
{
    Q_D(const GetProfileResponse);
    return static_cast<const GetProfileRequest *>(d->request);
}

/**
 * @brief  Parse a AlexaForBusiness GetProfile response.
 *
 * @param  response  Response to parse.
 */
void GetProfileResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetProfileResponsePrivate
 *
 * @brief  Private implementation for GetProfileResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetProfileResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetProfileResponse instance.
 */
GetProfileResponsePrivate::GetProfileResponsePrivate(
    GetProfileResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/**
 * @brief  Parse an AlexaForBusiness GetProfileResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetProfileResponsePrivate::GetProfileResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetProfileResponse"));
    /// @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
