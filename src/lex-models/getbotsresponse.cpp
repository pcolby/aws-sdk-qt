/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "getbotsresponse.h"
#include "getbotsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuildingService {

/*!
 * \class QtAws::LexModelBuildingService::GetBotsResponse
 * \brief The GetBotsResponse class provides an interace for LexModelBuildingService GetBots responses.
 *
 * \inmodule QtAwsLexModelBuildingService
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingServiceClient::getBots
 */

/*!
 * Constructs a GetBotsResponse object for \a reply to \a request, with parent \a parent.
 */
GetBotsResponse::GetBotsResponse(
        const GetBotsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingServiceResponse(new GetBotsResponsePrivate(this), parent)
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
 * Parses a successful LexModelBuildingService GetBots \a response.
 */
void GetBotsResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetBotsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuildingService::GetBotsResponsePrivate
 * \brief The GetBotsResponsePrivate class provides private implementation for GetBotsResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuildingService
 */

/*!
 * Constructs a GetBotsResponsePrivate object with public implementation \a q.
 */
GetBotsResponsePrivate::GetBotsResponsePrivate(
    GetBotsResponse * const q) : LexModelBuildingServiceResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuildingService GetBots response element from \a xml.
 */
void GetBotsResponsePrivate::parseGetBotsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBotsResponse"));
    /// @todo
}

} // namespace LexModelBuildingService
} // namespace QtAws
