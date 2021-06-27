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

#include "describebotlocaleresponse.h"
#include "describebotlocaleresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::DescribeBotLocaleResponse
 * \brief The DescribeBotLocaleResponse class provides an interace for LexModelsV2 DescribeBotLocale responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::describeBotLocale
 */

/*!
 * Constructs a DescribeBotLocaleResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeBotLocaleResponse::DescribeBotLocaleResponse(
        const DescribeBotLocaleRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new DescribeBotLocaleResponsePrivate(this), parent)
{
    setRequest(new DescribeBotLocaleRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeBotLocaleRequest * DescribeBotLocaleResponse::request() const
{
    return static_cast<const DescribeBotLocaleRequest *>(LexModelsV2Response::request());
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 DescribeBotLocale \a response.
 */
void DescribeBotLocaleResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeBotLocaleResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::DescribeBotLocaleResponsePrivate
 * \brief The DescribeBotLocaleResponsePrivate class provides private implementation for DescribeBotLocaleResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a DescribeBotLocaleResponsePrivate object with public implementation \a q.
 */
DescribeBotLocaleResponsePrivate::DescribeBotLocaleResponsePrivate(
    DescribeBotLocaleResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 DescribeBotLocale response element from \a xml.
 */
void DescribeBotLocaleResponsePrivate::parseDescribeBotLocaleResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeBotLocaleResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
