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

#include "updatebotaliasresponse.h"
#include "updatebotaliasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::UpdateBotAliasResponse
 * \brief The UpdateBotAliasResponse class provides an interace for LexModelsV2 UpdateBotAlias responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::updateBotAlias
 */

/*!
 * Constructs a UpdateBotAliasResponse object for \a reply to \a request, with parent \a parent.
 */
UpdateBotAliasResponse::UpdateBotAliasResponse(
        const UpdateBotAliasRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new UpdateBotAliasResponsePrivate(this), parent)
{
    setRequest(new UpdateBotAliasRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const UpdateBotAliasRequest * UpdateBotAliasResponse::request() const
{
    return static_cast<const UpdateBotAliasRequest *>(LexModelsV2Response::request());
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 UpdateBotAlias \a response.
 */
void UpdateBotAliasResponse::parseSuccess(QIODevice &response)
{
    //Q_D(UpdateBotAliasResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::UpdateBotAliasResponsePrivate
 * \brief The UpdateBotAliasResponsePrivate class provides private implementation for UpdateBotAliasResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a UpdateBotAliasResponsePrivate object with public implementation \a q.
 */
UpdateBotAliasResponsePrivate::UpdateBotAliasResponsePrivate(
    UpdateBotAliasResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 UpdateBotAlias response element from \a xml.
 */
void UpdateBotAliasResponsePrivate::parseUpdateBotAliasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateBotAliasResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
