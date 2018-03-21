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

#include "putroomskillparameterresponse.h"
#include "putroomskillparameterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace AlexaForBusiness {

/**
 * @class  PutRoomSkillParameterResponse
 *
 * @brief  Handles AlexaForBusiness PutRoomSkillParameter responses.
 *
 * @see    AlexaForBusinessClient::putRoomSkillParameter
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutRoomSkillParameterResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new PutRoomSkillParameterResponsePrivate(this), parent)
{
    setRequest(new PutRoomSkillParameterRequest(request));
    setReply(reply);
}

const PutRoomSkillParameterRequest * PutRoomSkillParameterResponse::request() const
{
    Q_D(const PutRoomSkillParameterResponse);
    return static_cast<const PutRoomSkillParameterRequest *>(d->request);
}

/**
 * @brief  Parse a AlexaForBusiness PutRoomSkillParameter response.
 *
 * @param  response  Response to parse.
 */
void PutRoomSkillParameterResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  PutRoomSkillParameterResponsePrivate
 *
 * @brief  Private implementation for PutRoomSkillParameterResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new PutRoomSkillParameterResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutRoomSkillParameterResponse instance.
 */
PutRoomSkillParameterResponsePrivate::PutRoomSkillParameterResponsePrivate(
    PutRoomSkillParameterQueueResponse * const q) : PutRoomSkillParameterPrivate(q)
{

}

/**
 * @brief  Parse an AlexaForBusiness PutRoomSkillParameterResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutRoomSkillParameterResponsePrivate::PutRoomSkillParameterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutRoomSkillParameterResponse"));
    /// @todo
}
