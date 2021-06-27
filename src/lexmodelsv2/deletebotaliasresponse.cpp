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
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::DeleteBotAliasResponse
 * \brief The DeleteBotAliasResponse class provides an interace for LexModelsV2 DeleteBotAlias responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::deleteBotAlias
 */

/*!
 * Constructs a DeleteBotAliasResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteBotAliasResponse::DeleteBotAliasResponse(
        const DeleteBotAliasRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new DeleteBotAliasResponsePrivate(this), parent)
{
    setRequest(new DeleteBotAliasRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteBotAliasRequest * DeleteBotAliasResponse::request() const
{
    return static_cast<const DeleteBotAliasRequest *>(LexModelsV2Response::request());
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 DeleteBotAlias \a response.
 */
void DeleteBotAliasResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteBotAliasResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::DeleteBotAliasResponsePrivate
 * \brief The DeleteBotAliasResponsePrivate class provides private implementation for DeleteBotAliasResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a DeleteBotAliasResponsePrivate object with public implementation \a q.
 */
DeleteBotAliasResponsePrivate::DeleteBotAliasResponsePrivate(
    DeleteBotAliasResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 DeleteBotAlias response element from \a xml.
 */
void DeleteBotAliasResponsePrivate::parseDeleteBotAliasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBotAliasResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
