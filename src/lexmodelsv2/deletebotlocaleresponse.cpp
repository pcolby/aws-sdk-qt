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

#include "deletebotlocaleresponse.h"
#include "deletebotlocaleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::DeleteBotLocaleResponse
 * \brief The DeleteBotLocaleResponse class provides an interace for LexModelsV2 DeleteBotLocale responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::deleteBotLocale
 */

/*!
 * Constructs a DeleteBotLocaleResponse object for \a reply to \a request, with parent \a parent.
 */
DeleteBotLocaleResponse::DeleteBotLocaleResponse(
        const DeleteBotLocaleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new DeleteBotLocaleResponsePrivate(this), parent)
{
    setRequest(new DeleteBotLocaleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DeleteBotLocaleRequest * DeleteBotLocaleResponse::request() const
{
    return static_cast<const DeleteBotLocaleRequest *>(LexModelsV2Response::request());
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 DeleteBotLocale \a response.
 */
void DeleteBotLocaleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DeleteBotLocaleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::DeleteBotLocaleResponsePrivate
 * \brief The DeleteBotLocaleResponsePrivate class provides private implementation for DeleteBotLocaleResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a DeleteBotLocaleResponsePrivate object with public implementation \a q.
 */
DeleteBotLocaleResponsePrivate::DeleteBotLocaleResponsePrivate(
    DeleteBotLocaleResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 DeleteBotLocale response element from \a xml.
 */
void DeleteBotLocaleResponsePrivate::parseDeleteBotLocaleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteBotLocaleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
