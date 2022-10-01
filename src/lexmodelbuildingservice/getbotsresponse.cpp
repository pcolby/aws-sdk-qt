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

#include "getbotsresponse.h"
#include "getbotsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::GetBotsResponse
 * \brief The GetBotsResponse class provides an interace for LexModelBuilding GetBots responses.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::getBots
 */

/*!
 * Constructs a GetBotsResponse object for \a reply to \a request, with parent \a parent.
 */
GetBotsResponse::GetBotsResponse(
        const GetBotsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingResponse(new GetBotsResponsePrivate(this), parent)
{
    setRequest(new GetBotsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBotsRequest * GetBotsResponse::request() const
{
    Q_D(const GetBotsResponse);
    return static_cast<const GetBotsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelBuilding GetBots \a response.
 */
void GetBotsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBotsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuilding::GetBotsResponsePrivate
 * \brief The GetBotsResponsePrivate class provides private implementation for GetBotsResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a GetBotsResponsePrivate object with public implementation \a q.
 */
GetBotsResponsePrivate::GetBotsResponsePrivate(
    GetBotsResponse * const q) : LexModelBuildingResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuilding GetBots response element from \a xml.
 */
void GetBotsResponsePrivate::parseGetBotsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBotsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelBuilding
} // namespace QtAws
