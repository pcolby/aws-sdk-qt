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

#include "authorizeiprulesresponse.h"
#include "authorizeiprulesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace WorkSpaces {

/*!
 * \class QtAws::WorkSpaces::AuthorizeIpRulesResponse
 * \brief The AuthorizeIpRulesResponse class provides an interace for WorkSpaces AuthorizeIpRules responses.
 *
 * \inmodule QtAwsWorkSpaces
 *
 *  <fullname>Amazon WorkSpaces Service</fullname>
 * 
 *  Amazon WorkSpaces enables you to provision virtual, cloud-based Microsoft Windows and Amazon Linux desktops for your
 *
 * \sa WorkSpacesClient::authorizeIpRules
 */

/*!
 * Constructs a AuthorizeIpRulesResponse object for \a reply to \a request, with parent \a parent.
 */
AuthorizeIpRulesResponse::AuthorizeIpRulesResponse(
        const AuthorizeIpRulesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : WorkSpacesResponse(new AuthorizeIpRulesResponsePrivate(this), parent)
{
    setRequest(new AuthorizeIpRulesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const AuthorizeIpRulesRequest * AuthorizeIpRulesResponse::request() const
{
    Q_D(const AuthorizeIpRulesResponse);
    return static_cast<const AuthorizeIpRulesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful WorkSpaces AuthorizeIpRules \a response.
 */
void AuthorizeIpRulesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(AuthorizeIpRulesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::WorkSpaces::AuthorizeIpRulesResponsePrivate
 * \brief The AuthorizeIpRulesResponsePrivate class provides private implementation for AuthorizeIpRulesResponse.
 * \internal
 *
 * \inmodule QtAwsWorkSpaces
 */

/*!
 * Constructs a AuthorizeIpRulesResponsePrivate object with public implementation \a q.
 */
AuthorizeIpRulesResponsePrivate::AuthorizeIpRulesResponsePrivate(
    AuthorizeIpRulesResponse * const q) : WorkSpacesResponsePrivate(q)
{

}

/*!
 * Parses a WorkSpaces AuthorizeIpRules response element from \a xml.
 */
void AuthorizeIpRulesResponsePrivate::parseAuthorizeIpRulesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("AuthorizeIpRulesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace WorkSpaces
} // namespace QtAws
