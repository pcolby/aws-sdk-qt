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

#include "deleteintentresponse.h"
#include "deleteintentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::DeleteIntentResponse
 * \brief The DeleteIntentResponse class provides an interace for LexModelBuilding DeleteIntent responses.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::deleteIntent
 */

/*!
 * Constructs a DeleteIntentResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteIntentResponse::DeleteIntentResponse(
        const DeleteIntentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingResponse(new DeleteIntentResponsePrivate(this), parent)
{
    setRequest(new DeleteIntentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteIntentRequest * DeleteIntentResponse::request() const
{
    Q_D(const DeleteIntentResponse);
    return static_cast<const DeleteIntentRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelBuilding DeleteIntent \a response.
 */
void DeleteIntentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteIntentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuilding::DeleteIntentResponsePrivate
 * \brief The DeleteIntentResponsePrivate class provides private implementation for DeleteIntentResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a DeleteIntentResponsePrivate object with public implementation \a q.
 */
DeleteIntentResponsePrivate::DeleteIntentResponsePrivate(
    DeleteIntentResponse * const q) : LexModelBuildingResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuilding DeleteIntent response element from \a xml.
 */
void DeleteIntentResponsePrivate::parseDeleteIntentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteIntentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelBuilding
} // namespace QtAws
