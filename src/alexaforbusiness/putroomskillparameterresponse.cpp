/*
    Copyright 2013-2021 Paul Colby

    This file is part of QtAws.

    QtAws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    QtAws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the QtAws.  If not, see <http://www.gnu.org/licenses/>.
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
 * \brief The PutRoomSkillParameterResponse class provides an interace for AlexaForBusiness PutRoomSkillParameter responses.
 *
 * \inmodule QtAwsAlexaForBusiness
 *
 *  Alexa for Business helps you use Alexa in your organization. Alexa for Business provides you with the tools to manage
 *  Alexa devices, enroll your users, and assign skills, at scale. You can build your own context-aware voice skills using
 *  the Alexa Skills Kit and the Alexa for Business API operations. You can also make these available as private skills for
 *  your organization. Alexa for Business makes it efficient to voice-enable your products and services, thus providing
 *  context-aware voice experiences for your customers. Device makers building with the Alexa Voice Service (AVS) can create
 *  fully integrated solutions, register their products with Alexa for Business, and manage them as shared devices in their
 *  organization.
 *
 * \sa AlexaForBusinessClient::putRoomSkillParameter
 */

/*!
 * Constructs a PutRoomSkillParameterResponse object for \a reply to \a request, with parent \a parent.
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

/*!
 * \reimp
 */
const PutRoomSkillParameterRequest * PutRoomSkillParameterResponse::request() const
{
    return static_cast<const PutRoomSkillParameterRequest *>(AlexaForBusinessResponse::request());
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness PutRoomSkillParameter \a response.
 */
void PutRoomSkillParameterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(PutRoomSkillParameterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::PutRoomSkillParameterResponsePrivate
 * \brief The PutRoomSkillParameterResponsePrivate class provides private implementation for PutRoomSkillParameterResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a PutRoomSkillParameterResponsePrivate object with public implementation \a q.
 */
PutRoomSkillParameterResponsePrivate::PutRoomSkillParameterResponsePrivate(
    PutRoomSkillParameterResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness PutRoomSkillParameter response element from \a xml.
 */
void PutRoomSkillParameterResponsePrivate::parsePutRoomSkillParameterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutRoomSkillParameterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
