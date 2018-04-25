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

#include "getbotresponse.h"
#include "getbotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuildingService {

/*!
 * \class QtAws::LexModelBuildingService::GetBotResponse
 * \brief The GetBotResponse class provides an interace for LexModelBuildingService GetBot responses.
 *
 * \inmodule QtAwsLexModelBuildingService
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingServiceClient::getBot
 */

/*!
 * Constructs a GetBotResponse object for \a reply to \a request, with parent \a parent.
 */
GetBotResponse::GetBotResponse(
        const GetBotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingServiceResponse(new GetBotResponsePrivate(this), parent)
{
    setRequest(new GetBotRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBotRequest * GetBotResponse::request() const
{
    Q_D(const GetBotResponse);
    return static_cast<const GetBotRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelBuildingService GetBot \a response.
 */
void GetBotResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetBotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuildingService::GetBotResponsePrivate
 * \brief The GetBotResponsePrivate class provides private implementation for GetBotResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuildingService
 */

/*!
 * Constructs a GetBotResponsePrivate object with public implementation \a q.
 */
GetBotResponsePrivate::GetBotResponsePrivate(
    GetBotResponse * const q) : LexModelBuildingServiceResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuildingService GetBot response element from \a xml.
 */
void GetBotResponsePrivate::parseGetBotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBotResponse"));
    /// @todo
}

} // namespace LexModelBuildingService
} // namespace QtAws
