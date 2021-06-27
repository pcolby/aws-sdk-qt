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

#include "describeintentresponse.h"
#include "describeintentresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::DescribeIntentResponse
 * \brief The DescribeIntentResponse class provides an interace for LexModelsV2 DescribeIntent responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::describeIntent
 */

/*!
 * Constructs a DescribeIntentResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeIntentResponse::DescribeIntentResponse(
        const DescribeIntentRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new DescribeIntentResponsePrivate(this), parent)
{
    setRequest(new DescribeIntentRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeIntentRequest * DescribeIntentResponse::request() const
{
    return static_cast<const DescribeIntentRequest *>(LexModelsV2Response::request());
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 DescribeIntent \a response.
 */
void DescribeIntentResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeIntentResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::DescribeIntentResponsePrivate
 * \brief The DescribeIntentResponsePrivate class provides private implementation for DescribeIntentResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a DescribeIntentResponsePrivate object with public implementation \a q.
 */
DescribeIntentResponsePrivate::DescribeIntentResponsePrivate(
    DescribeIntentResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 DescribeIntent response element from \a xml.
 */
void DescribeIntentResponsePrivate::parseDescribeIntentResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeIntentResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
