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

#include "describebotversionresponse.h"
#include "describebotversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::DescribeBotVersionResponse
 * \brief The DescribeBotVersionResponse class provides an interace for LexModelsV2 DescribeBotVersion responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::describeBotVersion
 */

/*!
 * Constructs a DescribeBotVersionResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeBotVersionResponse::DescribeBotVersionResponse(
        const DescribeBotVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new DescribeBotVersionResponsePrivate(this), parent)
{
    setRequest(new DescribeBotVersionRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeBotVersionRequest * DescribeBotVersionResponse::request() const
{
    return static_cast<const DescribeBotVersionRequest *>(LexModelsV2Response::request());
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 DescribeBotVersion \a response.
 */
void DescribeBotVersionResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeBotVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::DescribeBotVersionResponsePrivate
 * \brief The DescribeBotVersionResponsePrivate class provides private implementation for DescribeBotVersionResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a DescribeBotVersionResponsePrivate object with public implementation \a q.
 */
DescribeBotVersionResponsePrivate::DescribeBotVersionResponsePrivate(
    DescribeBotVersionResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 DescribeBotVersion response element from \a xml.
 */
void DescribeBotVersionResponsePrivate::parseDescribeBotVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeBotVersionResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
