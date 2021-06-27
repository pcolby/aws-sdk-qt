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

#include "describebotresponse.h"
#include "describebotresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::DescribeBotResponse
 * \brief The DescribeBotResponse class provides an interace for LexModelsV2 DescribeBot responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::describeBot
 */

/*!
 * Constructs a DescribeBotResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeBotResponse::DescribeBotResponse(
        const DescribeBotRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new DescribeBotResponsePrivate(this), parent)
{
    setRequest(new DescribeBotRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeBotRequest * DescribeBotResponse::request() const
{
    return static_cast<const DescribeBotRequest *>(LexModelsV2Response::request());
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 DescribeBot \a response.
 */
void DescribeBotResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeBotResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::DescribeBotResponsePrivate
 * \brief The DescribeBotResponsePrivate class provides private implementation for DescribeBotResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a DescribeBotResponsePrivate object with public implementation \a q.
 */
DescribeBotResponsePrivate::DescribeBotResponsePrivate(
    DescribeBotResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 DescribeBot response element from \a xml.
 */
void DescribeBotResponsePrivate::parseDescribeBotResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeBotResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
