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

#include "deletebotaliasresponse.h"
#include "deletebotaliasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelBuilding {

/*!
 * \class QtAws::LexModelBuilding::DeleteBotAliasResponse
 * \brief The DeleteBotAliasResponse class provides an interace for LexModelBuilding DeleteBotAlias responses.
 *
 * \inmodule QtAwsLexModelBuilding
 *
 *  <fullname>Amazon Lex Build-Time Actions</fullname>
 * 
 *  Amazon Lex is an AWS service for building conversational voice and text interfaces. Use these actions to create, update,
 *  and delete conversational bots for new and existing client applications.
 *
 * \sa LexModelBuildingClient::deleteBotAlias
 */

/*!
 * Constructs a DeleteBotAliasResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteBotAliasResponse::DeleteBotAliasResponse(
        const DeleteBotAliasRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelBuildingResponse(new DeleteBotAliasResponsePrivate(this), parent)
{
    setRequest(new DeleteBotAliasRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteBotAliasRequest * DeleteBotAliasResponse::request() const
{
    Q_D(const DeleteBotAliasResponse);
    return static_cast<const DeleteBotAliasRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelBuilding DeleteBotAlias \a response.
 */
void DeleteBotAliasResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteBotAliasResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelBuilding::DeleteBotAliasResponsePrivate
 * \brief The DeleteBotAliasResponsePrivate class provides private implementation for DeleteBotAliasResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelBuilding
 */

/*!
 * Constructs a DeleteBotAliasResponsePrivate object with public implementation \a q.
 */
DeleteBotAliasResponsePrivate::DeleteBotAliasResponsePrivate(
    DeleteBotAliasResponse * const q) : LexModelBuildingResponsePrivate(q)
{

}

/*!
 * Parses a LexModelBuilding DeleteBotAlias response element from \a xml.
 */
void DeleteBotAliasResponsePrivate::parseDeleteBotAliasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBotAliasResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelBuilding
} // namespace QtAws
