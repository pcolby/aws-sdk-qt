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

#include "getbuiltinintentsresponse.h"
#include "getbuiltinintentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuildingService {

/*!
 * \class QtAws::LexModelBuildingService::GetBuiltinIntentsResponse
 * \brief The GetBuiltinIntentsResponse class provides an interace for LexModelBuildingService GetBuiltinIntents responses.
 *
 * \inmodule QtAwsLexModelBuildingService
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingServiceClient::getBuiltinIntents
 */

/*!
 * Constructs a GetBuiltinIntentsResponse object for \a reply to \a request, with parent \a parent.
 */
GetBuiltinIntentsResponse::GetBuiltinIntentsResponse(
        const GetBuiltinIntentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingServiceResponse(new GetBuiltinIntentsResponsePrivate(this), parent)
{
    setRequest(new GetBuiltinIntentsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetBuiltinIntentsRequest * GetBuiltinIntentsResponse::request() const
{
    Q_D(const GetBuiltinIntentsResponse);
    return static_cast<const GetBuiltinIntentsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelBuildingService GetBuiltinIntents \a response.
 */
void GetBuiltinIntentsResponse::parseSuccess(QIODevice &response)
{
    Q_D(GetBuiltinIntentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuildingService::GetBuiltinIntentsResponsePrivate
 * \brief The GetBuiltinIntentsResponsePrivate class provides private implementation for GetBuiltinIntentsResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuildingService
 */

/*!
 * Constructs a GetBuiltinIntentsResponsePrivate object with public implementation \a q.
 */
GetBuiltinIntentsResponsePrivate::GetBuiltinIntentsResponsePrivate(
    GetBuiltinIntentsResponse * const q) : LexModelBuildingServiceResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuildingService GetBuiltinIntents response element from \a xml.
 */
void GetBuiltinIntentsResponsePrivate::parseGetBuiltinIntentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetBuiltinIntentsResponse"));
    /// @todo
}

} // namespace LexModelBuildingService
} // namespace QtAws
