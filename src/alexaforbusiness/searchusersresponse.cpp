// SPDX-FileCopyrightText: 2013-2022 Paul Colby <git@colby.id.au>
// SPDX-License-Identifier: LGPL-3.0-or-later

#include "searchusersresponse.h"
#include "searchusersresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AlexaForBusiness {

/*!
 * \class QtAws::AlexaForBusiness::SearchUsersResponse
 * \brief The SearchUsersResponse class provides an interace for AlexaForBusiness SearchUsers responses.
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
 * \sa AlexaForBusinessClient::searchUsers
 */

/*!
 * Constructs a SearchUsersResponse object for \a reply to \a request, with parent \a parent.
 */
SearchUsersResponse::SearchUsersResponse(
        const SearchUsersRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AlexaForBusinessResponse(new SearchUsersResponsePrivate(this), parent)
{
    setRequest(new SearchUsersRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const SearchUsersRequest * SearchUsersResponse::request() const
{
    Q_D(const SearchUsersResponse);
    return static_cast<const SearchUsersRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful AlexaForBusiness SearchUsers \a response.
 */
void SearchUsersResponse::parseSuccess(QIODevice &response)
{
    //Q_D(SearchUsersResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::AlexaForBusiness::SearchUsersResponsePrivate
 * \brief The SearchUsersResponsePrivate class provides private implementation for SearchUsersResponse.
 * \internal
 *
 * \inmodule QtAwsAlexaForBusiness
 */

/*!
 * Constructs a SearchUsersResponsePrivate object with public implementation \a q.
 */
SearchUsersResponsePrivate::SearchUsersResponsePrivate(
    SearchUsersResponse * const q) : AlexaForBusinessResponsePrivate(q)
{

}

/*!
 * Parses a AlexaForBusiness SearchUsers response element from \a xml.
 */
void SearchUsersResponsePrivate::parseSearchUsersResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("SearchUsersResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
