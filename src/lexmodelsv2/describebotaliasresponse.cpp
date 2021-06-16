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

#include "describebotaliasresponse.h"
#include "describebotaliasresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::DescribeBotAliasResponse
 * \brief The DescribeBotAliasResponse class provides an interace for LexModelsV2 DescribeBotAlias responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::describeBotAlias
 */

/*!
 * Constructs a DescribeBotAliasResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeBotAliasResponse::DescribeBotAliasResponse(
        const DescribeBotAliasRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new DescribeBotAliasResponsePrivate(this), parent)
{
    setRequest(new DescribeBotAliasRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeBotAliasRequest * DescribeBotAliasResponse::request() const
{
    Q_D(const DescribeBotAliasResponse);
    return static_cast<const DescribeBotAliasRequest *>(d->request);
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 DescribeBotAlias \a response.
 */
void DescribeBotAliasResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeBotAliasResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::DescribeBotAliasResponsePrivate
 * \brief The DescribeBotAliasResponsePrivate class provides private implementation for DescribeBotAliasResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a DescribeBotAliasResponsePrivate object with public implementation \a q.
 */
DescribeBotAliasResponsePrivate::DescribeBotAliasResponsePrivate(
    DescribeBotAliasResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 DescribeBotAlias response element from \a xml.
 */
void DescribeBotAliasResponsePrivate::parseDescribeBotAliasResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeBotAliasResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
