// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "getroomskillparameterresponse.h"
#include "getroomskillparameterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::GetRoomSkillParameterResponse
 * \brief The GetRoomSkillParameterResponse class provides an interace for AlexaForBusiness GetRoomSkillParameter responses.
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
 * \sa AlexaForBusinessClient::getRoomSkillParameter
 */

/*!
 * Constructs a GetRoomSkillParameterResponse object for \a reply to \a request, with parent \a parent.
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

/*!
 * \reimp
 */
const GetRoomSkillParameterRequest * GetRoomSkillParameterResponse::request() const
{
    Q_D(const GetRoomSkillParameterResponse);
    return static_cast<const GetRoomSkillParameterRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness GetRoomSkillParameter \a response.
 */
void GetRoomSkillParameterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetRoomSkillParameterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::GetRoomSkillParameterResponsePrivate
 * \brief The GetRoomSkillParameterResponsePrivate class provides private implementation for GetRoomSkillParameterResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a GetRoomSkillParameterResponsePrivate object with public implementation \a q.
 */
GetRoomSkillParameterResponsePrivate::GetRoomSkillParameterResponsePrivate(
    GetRoomSkillParameterResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness GetRoomSkillParameter response element from \a xml.
 */
void GetRoomSkillParameterResponsePrivate::parseGetRoomSkillParameterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetRoomSkillParameterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
