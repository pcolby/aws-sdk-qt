/*
    Copyright 2013-2021 Paul Colby

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

#include "getbotaliasesresponse.h"
#include "getbotaliasesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::GetBotAliasesResponse
 * \brief The GetBotAliasesResponse class provides an interace for LexModelBuilding GetBotAliases responses.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::getBotAliases
 */

/*!
 * Constructs a GetBotAliasesResponse object for \a reply to \a request, with parent \a parent.
 */
GetBotAliasesResponse::GetBotAliasesResponse(
        const GetBotAliasesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingResponse(new GetBotAliasesResponsePrivate(this), parent)
{
    setRequest(new GetBotAliasesRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBotAliasesRequest * GetBotAliasesResponse::request() const
{
    Q_D(const GetBotAliasesResponse);
    return static_cast<const GetBotAliasesRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelBuilding GetBotAliases \a response.
 */
void GetBotAliasesResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBotAliasesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuilding::GetBotAliasesResponsePrivate
 * \brief The GetBotAliasesResponsePrivate class provides private implementation for GetBotAliasesResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a GetBotAliasesResponsePrivate object with public implementation \a q.
 */
GetBotAliasesResponsePrivate::GetBotAliasesResponsePrivate(
    GetBotAliasesResponse * const q) : LexModelBuildingResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuilding GetBotAliases response element from \a xml.
 */
void GetBotAliasesResponsePrivate::parseGetBotAliasesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBotAliasesResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelBuilding
} // namespace QtAws
