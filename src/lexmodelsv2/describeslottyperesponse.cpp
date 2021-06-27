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

#include "describeslottyperesponse.h"
#include "describeslottyperesponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace LexModelsV2 {

/*!
 * \class QtAws::LexModelsV2::DescribeSlotTypeResponse
 * \brief The DescribeSlotTypeResponse class provides an interace for LexModelsV2 DescribeSlotType responses.
 *
 * \inmodule QtAwsLexModelsV2
 *
 *
 * \sa LexModelsV2Client::describeSlotType
 */

/*!
 * Constructs a DescribeSlotTypeResponse object for \a reply to \a request, with parent \a parent.
 */
DescribeSlotTypeResponse::DescribeSlotTypeResponse(
        const DescribeSlotTypeRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : LexModelsV2Response(new DescribeSlotTypeResponsePrivate(this), parent)
{
    setRequest(new DescribeSlotTypeRequest(request));
    setReply(reply);
}

/*!
 * \reimp
 */
const DescribeSlotTypeRequest * DescribeSlotTypeResponse::request() const
{
    return static_cast<const DescribeSlotTypeRequest *>(LexModelsV2Response::request());
}

/*!
 * \reimp
 * Parses a successful LexModelsV2 DescribeSlotType \a response.
 */
void DescribeSlotTypeResponse::parseSuccess(QIODevice &response)
{
    //Q_D(DescribeSlotTypeResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \class QtAws::LexModelsV2::DescribeSlotTypeResponsePrivate
 * \brief The DescribeSlotTypeResponsePrivate class provides private implementation for DescribeSlotTypeResponse.
 * \internal
 *
 * \inmodule QtAwsLexModelsV2
 */

/*!
 * Constructs a DescribeSlotTypeResponsePrivate object with public implementation \a q.
 */
DescribeSlotTypeResponsePrivate::DescribeSlotTypeResponsePrivate(
    DescribeSlotTypeResponse * const q) : LexModelsV2ResponsePrivate(q)
{

}

/*!
 * Parses a LexModelsV2 DescribeSlotType response element from \a xml.
 */
void DescribeSlotTypeResponsePrivate::parseDescribeSlotTypeResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeSlotTypeResponse"));
    Q_UNUSED(xml) ///< @todo
}

} // namespace LexModelsV2
} // namespace QtAws
