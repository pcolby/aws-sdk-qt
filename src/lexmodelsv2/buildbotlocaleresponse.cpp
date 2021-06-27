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

#include "buildbotlocaleresponse.h"
#include "buildbotlocaleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::BuildBotLocaleResponse
 * \brief The BuildBotLocaleResponse class provides an interace for LexModelsV2 BuildBotLocale responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::buildBotLocale
 */

/*!
 * Constructs a BuildBotLocaleResponse object for \a reply to \a request, with parent \a parent.
 */
BuildBotLocaleResponse::BuildBotLocaleResponse(
        const BuildBotLocaleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new BuildBotLocaleResponsePrivate(this), parent)
{
    setRequest(new BuildBotLocaleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const BuildBotLocaleRequest * BuildBotLocaleResponse::request() const
{
    return static_cast<const BuildBotLocaleRequest *>(LexModelsV2Response::request());
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 BuildBotLocale \a response.
 */
void BuildBotLocaleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(BuildBotLocaleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::BuildBotLocaleResponsePrivate
 * \brief The BuildBotLocaleResponsePrivate class provides private implementation for BuildBotLocaleResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a BuildBotLocaleResponsePrivate object with public implementation \a q.
 */
BuildBotLocaleResponsePrivate::BuildBotLocaleResponsePrivate(
    BuildBotLocaleResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 BuildBotLocale response element from \a xml.
 */
void BuildBotLocaleResponsePrivate::parseBuildBotLocaleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("BuildBotLocaleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
