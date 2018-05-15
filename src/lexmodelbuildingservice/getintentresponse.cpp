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

#include "getintentresponse.h"
#include "getintentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuildingService {

/*!
 * \class QtAws::LexModelBuildingService::GetIntentResponse
 * \brief The GetIntentResponse class provides an interace for LexModelBuildingService GetIntent responses.
 *
 * \inmodule QtAwsLexModelBuildingService
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingServiceClient::getIntent
 */

/*!
 * Constructs a GetIntentResponse object for \a reply to \a request, with parent \a parent.
 */
GetIntentResponse::GetIntentResponse(
        const GetIntentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingServiceResponse(new GetIntentResponsePrivate(this), parent)
{
    setRequest(new GetIntentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetIntentRequest * GetIntentResponse::request() const
{
    Q_D(const GetIntentResponse);
    return static_cast<const GetIntentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelBuildingService GetIntent \a response.
 */
void GetIntentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetIntentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuildingService::GetIntentResponsePrivate
 * \brief The GetIntentResponsePrivate class provides private implementation for GetIntentResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuildingService
 */

/*!
 * Constructs a GetIntentResponsePrivate object with public implementation \a q.
 */
GetIntentResponsePrivate::GetIntentResponsePrivate(
    GetIntentResponse * const q) : LexModelBuildingServiceResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuildingService GetIntent response element from \a xml.
 */
void GetIntentResponsePrivate::parseGetIntentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetIntentResponse"));
    /// @todo
}

} // namespace LexModelBuildingService
} // namespace QtAws
