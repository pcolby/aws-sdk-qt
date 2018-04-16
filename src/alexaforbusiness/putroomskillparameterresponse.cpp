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

#include "putroomskillparameterresponse.h"
#include "putroomskillparameterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::PutRoomSkillParameterResponse
 *
 * \brief The PutRoomSkillParameterResponse class provides an interace for AlexaForBusiness PutRoomSkillParameter responses.
 *
 * \ingroup AlexaForBusiness
 *
 *  Alexa for Business makes it easy for you to use Alexa in your organization. Alexa for Business gives you the tools you
 *  need to manage Alexa devices, enroll your users, and assign skills, at scale. You can build your own context-aware voice
 *  skills using the Alexa Skills Kit, and the Alexa for Business APIs, and you can make these available as private skills
 *  for your organization. Alexa for Business also makes it easy to voice-enable your products and services, providing
 *  context-aware voice experiences for your
 *
 * \sa AlexaForBusinessClient::putRoomSkillParameter
 */

/*!
 * @brief  Constructs a new PutRoomSkillParameterResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutRoomSkillParameterResponse::PutRoomSkillParameterResponse(
        const PutRoomSkillParameterRequest &request,
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

/*!
 * @brief  Parse a AlexaForBusiness PutRoomSkillParameter response.
 *
 * @param  response  Response to parse.
 */
void PutRoomSkillParameterResponse::parseSuccess(QIODevice &response)
{
    Q_D(PutRoomSkillParameterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class PutRoomSkillParameterResponsePrivate
 *
 * \brief Private implementation for PutRoomSkillParameterResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new PutRoomSkillParameterResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutRoomSkillParameterResponse instance.
 */
PutRoomSkillParameterResponsePrivate::PutRoomSkillParameterResponsePrivate(
    PutRoomSkillParameterResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * @brief  Parse an AlexaForBusiness PutRoomSkillParameterResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutRoomSkillParameterResponsePrivate::parsePutRoomSkillParameterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutRoomSkillParameterResponse"));
    /// @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
