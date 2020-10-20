/*
    Copyright 2013-2020 Paul Colby

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

#include "getbuiltinintentresponse.h"
#include "getbuiltinintentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuildingService {

/*!
 * \class QtAws::LexModelBuildingService::GetBuiltinIntentResponse
 * \brief The GetBuiltinIntentResponse class provides an interace for LexModelBuildingService GetBuiltinIntent responses.
 *
 * \inmodule QtAwsLexModelBuildingService
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingServiceClient::getBuiltinIntent
 */

/*!
 * Constructs a GetBuiltinIntentResponse object for \a reply to \a request, with parent \a parent.
 */
GetBuiltinIntentResponse::GetBuiltinIntentResponse(
        const GetBuiltinIntentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingServiceResponse(new GetBuiltinIntentResponsePrivate(this), parent)
{
    setRequest(new GetBuiltinIntentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBuiltinIntentRequest * GetBuiltinIntentResponse::request() const
{
    Q_D(const GetBuiltinIntentResponse);
    return static_cast<const GetBuiltinIntentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelBuildingService GetBuiltinIntent \a response.
 */
void GetBuiltinIntentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetBuiltinIntentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuildingService::GetBuiltinIntentResponsePrivate
 * \brief The GetBuiltinIntentResponsePrivate class provides private implementation for GetBuiltinIntentResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuildingService
 */

/*!
 * Constructs a GetBuiltinIntentResponsePrivate object with public implementation \a q.
 */
GetBuiltinIntentResponsePrivate::GetBuiltinIntentResponsePrivate(
    GetBuiltinIntentResponse * const q) : LexModelBuildingServiceResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuildingService GetBuiltinIntent response element from \a xml.
 */
void GetBuiltinIntentResponsePrivate::parseGetBuiltinIntentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBuiltinIntentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelBuildingService
} // namespace QtAws
