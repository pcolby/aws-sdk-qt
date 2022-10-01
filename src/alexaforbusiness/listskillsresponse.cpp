// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listskillsresponse.h"
#include "listskillsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::ListSkillsResponse
 * \brief The ListSkillsResponse class provides an interace for AlexaForBusiness ListSkills responses.
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
 * \sa AlexaForBusinessClient::listSkills
 */

/*!
 * Constructs a ListSkillsResponse object for \a reply to \a request, with parent \a parent.
 */
ListSkillsResponse::ListSkillsResponse(
        const ListSkillsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new ListSkillsResponsePrivate(this), parent)
{
    setRequest(new ListSkillsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSkillsRequest * ListSkillsResponse::request() const
{
    Q_D(const ListSkillsResponse);
    return static_cast<const ListSkillsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness ListSkills \a response.
 */
void ListSkillsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListSkillsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::ListSkillsResponsePrivate
 * \brief The ListSkillsResponsePrivate class provides private implementation for ListSkillsResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a ListSkillsResponsePrivate object with public implementation \a q.
 */
ListSkillsResponsePrivate::ListSkillsResponsePrivate(
    ListSkillsResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness ListSkills response element from \a xml.
 */
void ListSkillsResponsePrivate::parseListSkillsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSkillsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
