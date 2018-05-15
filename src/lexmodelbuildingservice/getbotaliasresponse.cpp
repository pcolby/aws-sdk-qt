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

#include "getbotaliasresponse.h"
#include "getbotaliasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuildingService {

/*!
 * \class QtAws::LexModelBuildingService::GetBotAliasResponse
 * \brief The GetBotAliasResponse class provides an interace for LexModelBuildingService GetBotAlias responses.
 *
 * \inmodule QtAwsLexModelBuildingService
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingServiceClient::getBotAlias
 */

/*!
 * Constructs a GetBotAliasResponse object for \a reply to \a request, with parent \a parent.
 */
GetBotAliasResponse::GetBotAliasResponse(
        const GetBotAliasRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingServiceResponse(new GetBotAliasResponsePrivate(this), parent)
{
    setRequest(new GetBotAliasRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBotAliasRequest * GetBotAliasResponse::request() const
{
    Q_D(const GetBotAliasResponse);
    return static_cast<const GetBotAliasRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelBuildingService GetBotAlias \a response.
 */
void GetBotAliasResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBotAliasResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuildingService::GetBotAliasResponsePrivate
 * \brief The GetBotAliasResponsePrivate class provides private implementation for GetBotAliasResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuildingService
 */

/*!
 * Constructs a GetBotAliasResponsePrivate object with public implementation \a q.
 */
GetBotAliasResponsePrivate::GetBotAliasResponsePrivate(
    GetBotAliasResponse * const q) : LexModelBuildingServiceResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuildingService GetBotAlias response element from \a xml.
 */
void GetBotAliasResponsePrivate::parseGetBotAliasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBotAliasResponse"));
    /// @todo
}

} // namespace LexModelBuildingService
} // namespace QtAws
