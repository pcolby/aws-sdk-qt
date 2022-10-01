// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "listskillsstoreskillsbycategoryresponse.h"
#include "listskillsstoreskillsbycategoryresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::ListSkillsStoreSkillsByCategoryResponse
 * \brief The ListSkillsStoreSkillsByCategoryResponse class provides an interace for AlexaForBusiness ListSkillsStoreSkillsByCategory responses.
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
 * \sa AlexaForBusinessClient::listSkillsStoreSkillsByCategory
 */

/*!
 * Constructs a ListSkillsStoreSkillsByCategoryResponse object for \a reply to \a request, with parent \a parent.
 */
ListSkillsStoreSkillsByCategoryResponse::ListSkillsStoreSkillsByCategoryResponse(
        const ListSkillsStoreSkillsByCategoryRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new ListSkillsStoreSkillsByCategoryResponsePrivate(this), parent)
{
    setRequest(new ListSkillsStoreSkillsByCategoryRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const ListSkillsStoreSkillsByCategoryRequest * ListSkillsStoreSkillsByCategoryResponse::request() const
{
    Q_D(const ListSkillsStoreSkillsByCategoryResponse);
    return static_cast<const ListSkillsStoreSkillsByCategoryRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness ListSkillsStoreSkillsByCategory \a response.
 */
void ListSkillsStoreSkillsByCategoryResponse::parseSuccess(QIODevice &response)
{
    //Q_D(ListSkillsStoreSkillsByCategoryResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::ListSkillsStoreSkillsByCategoryResponsePrivate
 * \brief The ListSkillsStoreSkillsByCategoryResponsePrivate class provides private implementation for ListSkillsStoreSkillsByCategoryResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a ListSkillsStoreSkillsByCategoryResponsePrivate object with public implementation \a q.
 */
ListSkillsStoreSkillsByCategoryResponsePrivate::ListSkillsStoreSkillsByCategoryResponsePrivate(
    ListSkillsStoreSkillsByCategoryResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness ListSkillsStoreSkillsByCategory response element from \a xml.
 */
void ListSkillsStoreSkillsByCategoryResponsePrivate::parseListSkillsStoreSkillsByCategoryResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ListSkillsStoreSkillsByCategoryResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
