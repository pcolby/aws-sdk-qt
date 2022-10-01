// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listskillsstorecategoriesresponse.h"
#include "listskillsstorecategoriesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::ListSkillsStoreCategoriesResponse
 * \brief The ListSkillsStoreCategoriesResponse class provides an interace for AlexaForBusiness ListSkillsStoreCategories responses.
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
 * \sa AlexaForBusinessClient::listSkillsStoreCategories
 */

/*!
 * Constructs a ListSkillsStoreCategoriesResponse object for \a reply to \a request, with parent \a parent.
 */
ListSkillsStoreCategoriesResponse::ListSkillsStoreCategoriesResponse(
        const ListSkillsStoreCategoriesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new ListSkillsStoreCategoriesResponsePrivate(this), parent)
{
    setRequest(new ListSkillsStoreCategoriesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSkillsStoreCategoriesRequest * ListSkillsStoreCategoriesResponse::request() const
{
    Q_D(const ListSkillsStoreCategoriesResponse);
    return static_cast<const ListSkillsStoreCategoriesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness ListSkillsStoreCategories \a response.
 */
void ListSkillsStoreCategoriesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListSkillsStoreCategoriesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::ListSkillsStoreCategoriesResponsePrivate
 * \brief The ListSkillsStoreCategoriesResponsePrivate class provides private implementation for ListSkillsStoreCategoriesResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a ListSkillsStoreCategoriesResponsePrivate object with public implementation \a q.
 */
ListSkillsStoreCategoriesResponsePrivate::ListSkillsStoreCategoriesResponsePrivate(
    ListSkillsStoreCategoriesResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness ListSkillsStoreCategories response element from \a xml.
 */
void ListSkillsStoreCategoriesResponsePrivate::parseListSkillsStoreCategoriesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSkillsStoreCategoriesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
