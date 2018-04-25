/*
    Copyright 2013-2018 Paul Colby

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
 *  Alexa for Business makes it easy for you to use Alexa in your organization. Alexa for Business gives you the tools you
 *  need to manage Alexa devices, enroll your users, and assign skills, at scale. You can build your own context-aware voice
 *  skills using the Alexa Skills Kit, and the Alexa for Business APIs, and you can make these available as private skills
 *  for your organization. Alexa for Business also makes it easy to voice-enable your products and services, providing
 *  context-aware voice experiences for your
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
    Q_D(SearchUsersResponse);
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
    /// @todo
}

} // namespace AlexaForBusiness
} // namespace QtAws
