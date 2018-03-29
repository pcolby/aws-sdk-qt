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

#include "getroomskillparameterresponse.h"
#include "getroomskillparameterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/**
 * @class  GetRoomSkillParameterResponse
 *
 * @brief  Handles AlexaForBusiness GetRoomSkillParameter responses.
 *
 * @see    AlexaForBusinessClient::getRoomSkillParameter
 */

/**
 * @brief  Constructs a new GetRoomSkillParameterResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
GetRoomSkillParameterResponse::GetRoomSkillParameterResponse(
        const GetRoomSkillParameterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new GetRoomSkillParameterResponsePrivate(this), parent)
{
    setRequest(new GetRoomSkillParameterRequest(request));
    setReply(reply);
}

const GetRoomSkillParameterRequest * GetRoomSkillParameterResponse::request() const
{
    Q_D(const GetRoomSkillParameterResponse);
    return static_cast<const GetRoomSkillParameterRequest *>(d->request);
}

/**
 * @brief  Parse a AlexaForBusiness GetRoomSkillParameter response.
 *
 * @param  response  Response to parse.
 */
void GetRoomSkillParameterResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetRoomSkillParameterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  GetRoomSkillParameterResponsePrivate
 *
 * @brief  Private implementation for GetRoomSkillParameterResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GetRoomSkillParameterResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GetRoomSkillParameterResponse instance.
 */
GetRoomSkillParameterResponsePrivate::GetRoomSkillParameterResponsePrivate(
    GetRoomSkillParameterResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/**
 * @brief  Parse an AlexaForBusiness GetRoomSkillParameterResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void GetRoomSkillParameterResponsePrivate::GetRoomSkillParameterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRoomSkillParameterResponse"));
    /// @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
