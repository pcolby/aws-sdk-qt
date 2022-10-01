// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

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
    Q_D(const PutRoomSkillParameterResponse);
    return static_cast<const PutRoomSkillParameterRequest *>(d->request);
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
