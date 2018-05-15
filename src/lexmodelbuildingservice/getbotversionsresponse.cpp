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

#include "getbotversionsresponse.h"
#include "getbotversionsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuildingService {

/*!
 * \class QtAws::LexModelBuildingService::GetBotVersionsResponse
 * \brief The GetBotVersionsResponse class provides an interace for LexModelBuildingService GetBotVersions responses.
 *
 * \inmodule QtAwsLexModelBuildingService
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingServiceClient::getBotVersions
 */

/*!
 * Constructs a GetBotVersionsResponse object for \a reply to \a request, with parent \a parent.
 */
GetBotVersionsResponse::GetBotVersionsResponse(
        const GetBotVersionsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingServiceResponse(new GetBotVersionsResponsePrivate(this), parent)
{
    setRequest(new GetBotVersionsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBotVersionsRequest * GetBotVersionsResponse::request() const
{
    Q_D(const GetBotVersionsResponse);
    return static_cast<const GetBotVersionsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelBuildingService GetBotVersions \a response.
 */
void GetBotVersionsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBotVersionsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuildingService::GetBotVersionsResponsePrivate
 * \brief The GetBotVersionsResponsePrivate class provides private implementation for GetBotVersionsResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuildingService
 */

/*!
 * Constructs a GetBotVersionsResponsePrivate object with public implementation \a q.
 */
GetBotVersionsResponsePrivate::GetBotVersionsResponsePrivate(
    GetBotVersionsResponse * const q) : LexModelBuildingServiceResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuildingService GetBotVersions response element from \a xml.
 */
void GetBotVersionsResponsePrivate::parseGetBotVersionsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBotVersionsResponse"));
    /// @todo
}

} // namespace LexModelBuildingService
} // namespace QtAws
