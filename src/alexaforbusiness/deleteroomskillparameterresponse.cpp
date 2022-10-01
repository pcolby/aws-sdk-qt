// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "deleteroomskillparameterresponse.h"
#include "deleteroomskillparameterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::DeleteRoomSkillParameterResponse
 * \brief The DeleteRoomSkillParameterResponse class provides an interace for AlexaForBusiness DeleteRoomSkillParameter responses.
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
 * \sa AlexaForBusinessClient::deleteRoomSkillParameter
 */

/*!
 * Constructs a DeleteRoomSkillParameterResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteRoomSkillParameterResponse::DeleteRoomSkillParameterResponse(
        const DeleteRoomSkillParameterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new DeleteRoomSkillParameterResponsePrivate(this), parent)
{
    setRequest(new DeleteRoomSkillParameterRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteRoomSkillParameterRequest * DeleteRoomSkillParameterResponse::request() const
{
    Q_D(const DeleteRoomSkillParameterResponse);
    return static_cast<const DeleteRoomSkillParameterRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness DeleteRoomSkillParameter \a response.
 */
void DeleteRoomSkillParameterResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteRoomSkillParameterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::DeleteRoomSkillParameterResponsePrivate
 * \brief The DeleteRoomSkillParameterResponsePrivate class provides private implementation for DeleteRoomSkillParameterResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a DeleteRoomSkillParameterResponsePrivate object with public implementation \a q.
 */
DeleteRoomSkillParameterResponsePrivate::DeleteRoomSkillParameterResponsePrivate(
    DeleteRoomSkillParameterResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness DeleteRoomSkillParameter response element from \a xml.
 */
void DeleteRoomSkillParameterResponsePrivate::parseDeleteRoomSkillParameterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteRoomSkillParameterResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
