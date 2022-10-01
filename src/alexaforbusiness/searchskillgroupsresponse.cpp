// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "searchskillgroupsresponse.h"
#include "searchskillgroupsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::SearchSkillGroupsResponse
 * \brief The SearchSkillGroupsResponse class provides an interace for AlexaForBusiness SearchSkillGroups responses.
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
 * \sa AlexaForBusinessClient::searchSkillGroups
 */

/*!
 * Constructs a SearchSkillGroupsResponse object for \a reply to \a request, with parent \a parent.
 */
SearchSkillGroupsResponse::SearchSkillGroupsResponse(
        const SearchSkillGroupsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new SearchSkillGroupsResponsePrivate(this), parent)
{
    setRequest(new SearchSkillGroupsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SearchSkillGroupsRequest * SearchSkillGroupsResponse::request() const
{
    Q_D(const SearchSkillGroupsResponse);
    return static_cast<const SearchSkillGroupsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness SearchSkillGroups \a response.
 */
void SearchSkillGroupsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SearchSkillGroupsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::SearchSkillGroupsResponsePrivate
 * \brief The SearchSkillGroupsResponsePrivate class provides private implementation for SearchSkillGroupsResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a SearchSkillGroupsResponsePrivate object with public implementation \a q.
 */
SearchSkillGroupsResponsePrivate::SearchSkillGroupsResponsePrivate(
    SearchSkillGroupsResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness SearchSkillGroups response element from \a xml.
 */
void SearchSkillGroupsResponsePrivate::parseSearchSkillGroupsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SearchSkillGroupsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
