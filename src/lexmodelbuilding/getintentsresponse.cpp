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

#include "getintentsresponse.h"
#include "getintentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::GetIntentsResponse
 * \brief The GetIntentsResponse class provides an interace for LexModelBuilding GetIntents responses.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::getIntents
 */

/*!
 * Constructs a GetIntentsResponse object for \a reply to \a request, with parent \a parent.
 */
GetIntentsResponse::GetIntentsResponse(
        const GetIntentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingResponse(new GetIntentsResponsePrivate(this), parent)
{
    setRequest(new GetIntentsRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const GetIntentsRequest * GetIntentsResponse::request() const
{
    Q_D(const GetIntentsResponse);
    return static_cast<const GetIntentsRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelBuilding GetIntents \a response.
 */
void GetIntentsResponse::parseSuccess(QIODevice &response)
{
    //Q_D(GetIntentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuilding::GetIntentsResponsePrivate
 * \brief The GetIntentsResponsePrivate class provides private implementation for GetIntentsResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a GetIntentsResponsePrivate object with public implementation \a q.
 */
GetIntentsResponsePrivate::GetIntentsResponsePrivate(
    GetIntentsResponse * const q) : LexModelBuildingResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuilding GetIntents response element from \a xml.
 */
void GetIntentsResponsePrivate::parseGetIntentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("GetIntentsResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelBuilding
} // namespace QtAws
